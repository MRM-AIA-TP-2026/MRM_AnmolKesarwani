#include "rclcpp/rclcpp.hpp"
#include "cashier_system/msg/bill.hpp"
#include "std_srvs/srv/set_parameters.hpp"

class BillSubscriber : public rclcpp::Node {
public:
    BillSubscriber() : Node("bill_subscriber") {
        subscription_ = this->create_subscription<cashier_system::msg::Bill>(
            "bill", 10, std::bind(&BillSubscriber::process_bill, this, std::placeholders::_1));
        this->declare_parameter<int>("inventory", 100);
        this->declare_parameter<double>("income", 0.0);
        update_service_ = this->create_service<std_srvs::srv::SetParameters>(
            "update_parameters",
            std::bind(&BillSubscriber::update_parameters, this, std::placeholders::_1, std::placeholders::_2));
        RCLCPP_INFO(this->get_logger(), "Bill Subscriber Node Started");
    }

private:
    void process_bill(const cashier_system::msg::Bill::SharedPtr bill) {
        RCLCPP_INFO(this->get_logger(), "Received Bill: %d", bill->bill_number);

        int inventory = this->get_parameter("inventory").as_int();
        double income = this->get_parameter("income").as_double();

        inventory -= bill->quantity;
        income += bill->total;

        this->set_parameter(rclcpp::Parameter("inventory", inventory));
        this->set_parameter(rclcpp::Parameter("income", income));

        RCLCPP_INFO(this->get_logger(), "Updated Inventory: %d, Income: %.2f", inventory, income);
    }

    void update_parameters(
        const std::shared_ptr<std_srvs::srv::SetParameters::Request> request,
        std::shared_ptr<std_srvs::srv::SetParameters::Response> response) {
        for (const auto &param : request->parameters) {
            this->set_parameter(param);
        }
        response->successful = true;
    }

    rclcpp::Subscription<cashier_system::msg::Bill>::SharedPtr subscription_;
    rclcpp::Service<std_srvs::srv::SetParameters>::SharedPtr update_service_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<BillSubscriber>());
    rclcpp::shutdown();
    return 0;
}

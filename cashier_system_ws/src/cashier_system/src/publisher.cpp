#include "rclcpp/rclcpp.hpp"
#include "cashier_system/msg/bill.hpp"

class BillPublisher : public rclcpp::Node {
public:
    BillPublisher() : Node("bill_publisher") {
        publisher_ = this->create_publisher<cashier_system::msg::Bill>("bill", 10);
        timer_ = this->create_wall_timer(
            std::chrono::seconds(1),
            std::bind(&BillPublisher::publish_bill, this));
        RCLCPP_INFO(this->get_logger(), "Bill Publisher Node Started");
    }

private:
    void publish_bill() {
        auto message = cashier_system::msg::Bill();
        message.bill_number = ++bill_counter_;
        message.timestamp = this->get_clock()->now();
        message.quantity = 5;
        message.price = 20.0;
        message.total = message.quantity * message.price;

        publisher_->publish(message);
        RCLCPP_INFO(this->get_logger(), "Published Bill: %d", message.bill_number);
    }

    rclcpp::Publisher<cashier_system::msg::Bill>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    int bill_counter_ = 0;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<BillPublisher>());
    rclcpp::shutdown();
    return 0;
}

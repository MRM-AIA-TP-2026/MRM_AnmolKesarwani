#include "rclcpp/rclcpp.hpp"
#include "cashier_system/msg/bill.hpp"
#include <iostream>

class DisplayNode : public rclcpp::Node {
public:
    DisplayNode() : Node("display_node") {
        subscription_ = this->create_subscription<cashier_system::msg::Bill>(
            "bill", 10, std::bind(&DisplayNode::store_last_bill, this, std::placeholders::_1));
        timer_ = this->create_wall_timer(
            std::chrono::seconds(1),
            std::bind(&DisplayNode::print_status, this));
        RCLCPP_INFO(this->get_logger(), "Display Node Started");
    }

private:
    void store_last_bill(const cashier_system::msg::Bill::SharedPtr bill) {
        last_bill_ = *bill;
    }

    void print_status() {
        int inventory = this->get_parameter("inventory").as_int();
        double income = this->get_parameter("income").as_double();

        RCLCPP_INFO(this->get_logger(), "Last Bill: %d, Inventory: %d, Income: %.2f",
                    last_bill_.bill_number, inventory, income);
    }

    cashier_system::msg::Bill last_bill_;
    rclcpp::Subscription<cashier_system::msg::Bill>::SharedPtr subscription_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DisplayNode>());
    rclcpp::shutdown();
    return 0;
}

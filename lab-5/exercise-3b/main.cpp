#include <iostream>
#include "Order.h"
#include "OrderItem.h"
#include "Product.h"

using namespace std;

int main()
{
    Product *laptop = new Product(1, "Laptop", 999.99);
    Product *mouse = new Product(2, "Mouse", 29.99);
    Product *keyboard = new Product(3, "Keyboard", 59.99);

    Order order(1, 101);

    OrderItem *item1 = new OrderItem(1, 1, laptop);
    OrderItem *item2 = new OrderItem(2, 2, mouse);
    OrderItem *item3 = new OrderItem(3, 1, keyboard);

    order.addItem(item1);
    order.addItem(item2);
    order.addItem(item3);

    cout << "Order ID: " << order.getOrderId() << endl;
    cout << "Customer ID: " << order.getCustomerId() << endl;
    cout << "Total Amount: $" << order.getTotalAmount() << endl;

    order.removeItem(2);
    cout << "Total Amount after removing item: $" << order.getTotalAmount() << endl;

    delete laptop;
    delete mouse;
    delete keyboard;
    delete item1;
    delete item2;
    delete item3;

    return 0;
}
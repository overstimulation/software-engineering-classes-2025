#include "System.h"
#include "User.h"
#include <iostream>

int main()
{
    System sys;

    bool reg1 = sys.registerUser("john123", "pass123");
    bool reg2 = sys.registerUser("alice456", "pass456");
    bool reg3 = sys.registerUser("john123", "differentpass");

    bool auth1 = sys.authenticate("john123", "pass123");
    bool auth2 = sys.authenticate("john123", "wrongpass");
    bool auth3 = sys.authenticate("unknown", "pass123");

    User *user1 = new User("john123", "pass123");
    User *user2 = new User("alice456", "pass456");

    sys.addUser(user1);
    sys.addUser(user2);
    sys.addUser(nullptr);

    user1->login();
    user1->openHomePage();
    user1->sendData();
    user1->logout();

    user1->openHomePage();
    user1->sendData();

    sys.removeUser("john123");
    sys.removeUser("nonexistent");

    return 0;
}
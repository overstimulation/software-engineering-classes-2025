#include <iostream>
#include <string>
#include "EmailSender.h"
#include "Message.h"

using namespace std;

int main() {
    Message emailContent("odbiorca@example.com", "Wazna wiadomosc", "To jest tresc waznej wiadomosci.");
    EmailSender sender("nadawca@example.com");
    sender.sendEmail(emailContent);

    return 0;
}

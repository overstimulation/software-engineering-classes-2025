#include <iostream>
#include <string>
#include "Email.h"
#include "Attachment.h"

using namespace std;

int main() {
    Attachment file1("dokument.txt", 150);
    Attachment image1("obrazek.jpg", 520);
    Attachment file2("arkusz.xlsx", 2100);
    
    Email myEmail;
    
    myEmail.addAttachment(file1);
    myEmail.addAttachment(image1);
    myEmail.addAttachment(file2);
    
    cout << "Liczba zalacznikow w e-mailu: " << myEmail.getAttachmentCount() << endl;

    // Pobieranie i wyświetlanie informacji o zalacznikach
    for (int i = 0; i < myEmail.getAttachmentCount(); ++i) {
        Attachment& attachment = myEmail.getAttachment(i);
        cout << "Zalacznik " << i + 1 << ": " << "Nazwa pliku: " << attachment.getFilename() << ", Rozmiar: " << attachment.getSize() << " bajtow" << endl;
    }

    cout << endl;

    return 0;
}
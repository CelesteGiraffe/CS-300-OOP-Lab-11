#include <iostream>
#include "vigenere.h"

int main() {
    // Example 1
    Vigenere cipher1("HJK");
    std::string message1 = "WAR";
    std::string encrypted1 = cipher1.encrypt(message1);
    std::cout << "Example 1 : " << std::endl;
    std::cout << "Original Message: " << message1 << std::endl;
    std::cout << "Encrypted Message: " << encrypted1 << std::endl;

    // Decrypt the message
    std::string decrypted1 = cipher1.decrypt(encrypted1);
    std::cout << "Decrypted Message: " << decrypted1 << std::endl;

    // Verify encryption
    bool isCorrect1 = cipher1.isEncrypted(encrypted1, message1);
    std::cout << "Encryption Verification: " << (isCorrect1 ? "Ayyyy, let's goooo!" : "Nope try again... :( ") << std::endl;

    // Example 2
    Vigenere cipher2("WAR");
    std::string message2 = "CS IS COOL";
    std::string encrypted2 = cipher2.encrypt(message2);
    std::cout << std::endl << "Example 2 : " << std::endl;
    std::cout << "\nOriginal Message: " << message2 << std::endl;
    std::cout << "Encrypted Message: " << encrypted2 << std::endl;

    // Decrypt the message
    std::string decrypted2 = cipher2.decrypt(encrypted2);
    std::cout << "Decrypted Message: " << decrypted2 << std::endl;

    // Verify encryption
    bool isCorrect2 = cipher2.isEncrypted(encrypted2, message2);
    std::cout << "Encryption Verification: " << (isCorrect2 ? "Yeah, yeah, yeah... now you're showing off! " : "What have I done!, back to the white board") << std::endl;

    return 0;
}

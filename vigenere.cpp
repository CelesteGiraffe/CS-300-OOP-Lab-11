#include "vigenere.h"

/**
 * @file vigenere.cpp
 * @brief Implementation of the Vigenere class methods.
 */

Vigenere::Vigenere(std::string key) {
    this->key = key;
}

Vigenere::~Vigenere() {
    // No dynamic memory to clean up
}

std::string Vigenere::encrypt(std::string msg) {
    std::string encryptedMsg;
    int keyLength = key.length();
    int keyIndex = 0;

    for (size_t i = 0; i < msg.length(); ++i) {
        char msgChar = msg[i];

        if (msgChar >= 'A' && msgChar <= 'Z') {
            // Shift only uppercase alphabetic characters
            char keyChar = key[keyIndex % keyLength];
            int shift = keyChar - 'A';
            char encryptedChar = ((msgChar - 'A' + shift) % 26) + 'A';
            encryptedMsg += encryptedChar;
            keyIndex++;
        } else {
            // Preserve non-alphabetic characters
            encryptedMsg += msgChar;
        }
    }
    return encryptedMsg;
}

std::string Vigenere::decrypt(std::string msg) {
    std::string decryptedMsg;
    int keyLength = key.length();
    int keyIndex = 0;

    for (size_t i = 0; i < msg.length(); ++i) {
        char msgChar = msg[i];

        if (msgChar >= 'A' && msgChar <= 'Z') {
            // Shift only uppercase alphabetic characters
            char keyChar = key[keyIndex % keyLength];
            int shift = keyChar - 'A';
            char decryptedChar = ((msgChar - 'A' - shift + 26) % 26) + 'A';
            decryptedMsg += decryptedChar;
            keyIndex++;
        } else {
            // Preserve non-alphabetic characters
            decryptedMsg += msgChar;
        }
    }
    return decryptedMsg;
}

bool Vigenere::isEncrypted(std::string encryptedMsg, std::string decryptedMessage) {
    std::string encrypted = encrypt(decryptedMessage);
    return encrypted == encryptedMsg;
}

void Vigenere::setKey(std::string key) {
    this->key = key;
}
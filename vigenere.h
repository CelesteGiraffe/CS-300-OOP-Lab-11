#ifndef VIGENERE_H
#define VIGENERE_H

#include <string>

/**
 * @brief The Vigenere class encrypts and decrypts messages using the Vigenere cipher.
 *
 * is a method of encrypting alphabetic text where each letter of the 
 * plaintext is encoded with a different Caesar cipher, whose increment 
 * is determined by the corresponding letter of another text, the key.
 * (description from Wikipedia)
 */
class Vigenere {
public:
    /**
     * @brief Constructs a Vigenere object with the given key.
     * 
     * @param key The encryption/decryption key consisting of uppercase letters.
     * 
     * the constructor defines the Vigenere cipher object with a key.
     * The key is used for both encryption and decryption processes and should
     * contain only uppercase letters from A-Z.
     */
    Vigenere(std::string key);

    /**
     * @brief Destructor for the Vigenere class.
     *
     * Cleans up any resources used by the Vigenere object.
     */
    ~Vigenere();

    /**
     * @brief Encrypts the given message using the Vigenere cipher.
     * 
     * @param msg The plaintext message to encrypt.
     * @return The encrypted message in uppercase letters.
     * 
     * Encrypts the provided message using the key given in the
     * constructor. It processes each letter by shifting it forward in the alphabet
     * based on the corresponding letter in the key. Non-alphabetic characters are
     * left unchanged. The result is an uppercase encrypted string.
     */
    std::string encrypt(std::string msg);

    /**
     * @brief Decrypts the given message using the Vigenere cipher.
     * 
     * @param msg The encrypted message to decrypt.
     * @return The decrypted message in uppercase letters.
     * 
     * This decrypts the provided encrypted message using the key. It shifts
     * each letter backward in the alphabet based on the corresponding letter in the
     * key. Non-alphabetic characters are preserved in their original form. The
     * decrypted message is returned in uppercase letters.
     */
    std::string decrypt(std::string msg);

    /**
     * @brief Checks if the encrypted message matches the decrypted message after encryption.
     * 
     * @param encryptedMsg The encrypted message.
     * @param decryptedMessage The original plaintext message.
     * @return True only if the encrypted message matches after encryption, otherwise returns false.
     * 
     * Verifys of the encryption process by comparing the
     * provided encrypted message with the result of encrypting the decrypted
     * message using the current key. It returns true if they match, indicating
     * correct encryption.
     */
    bool isEncrypted(std::string encryptedMsg, std::string decryptedMessage);

    /**
     * @brief Sets a new key for the Vigenere cipher.
     * 
     * @param key The new key consisting of uppercase letters.
     * 
     * Allows changing the key used for encryption and decryption. The
     * new key should consist only of uppercase letters from 'A' to 'Z'.
     */
    void setKey(std::string key);

private:
    std::string key; /**< The passed key used for encryption and decryption. */
};

#endif // VIGENERE_H

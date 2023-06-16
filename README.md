# Transposition Cipher

This program implements the Transposition Cipher encryption and decryption algorithm. The Transposition Cipher is a simple form of encryption where the order of characters in a message is rearranged based on a specific pattern or key.

## Features

- Encrypt a message using the Transposition Cipher algorithm
- Decrypt an encrypted message using the Transposition Cipher algorithm
- Save the encrypted and decrypted text to a file

## Requirements

- C++ compiler
- Windows operating system (due to the use of the `windows.h` header)

## Usage

1. Clone the repository or download the source code files.
2. Compile the program using a C++ compiler.
3. Run the compiled executable.

Upon running the program, a menu will be displayed with two options: Transposition Encryption and Transposition Decryption.

### Transposition Encryption

1. Choose the "Transposition Encryption" option from the menu.
2. Enter the message you want to encrypt.
3. Specify the key (referred to as "rail" in the program) for the encryption.
4. The program will encrypt the message using the Transposition Cipher algorithm.
5. The encrypted text will be displayed on the console and saved in a file of your choice.

### Transposition Decryption

1. Choose the "Transposition Decryption" option from the menu.
2. Enter the encrypted message you want to decrypt.
3. Specify the key (rail) used for the encryption of the message.
4. The program will decrypt the encrypted message using the Transposition Cipher algorithm.
5. The decrypted text will be displayed on the console and saved in a file of your choice.

## Notes

- The program assumes the usage of a Windows operating system due to the inclusion of the `windows.h` header. If you're using a different operating system, you may need to modify the code accordingly.
- The program may throw an error if the key provided is greater than the length of the message. Please ensure that the key is within a valid range.

Feel free to explore the source code for a deeper understanding of the implementation.

## License

This project is licensed under the [MIT License](LICENSE).

## Acknowledgments

The program is based on the Transposition Cipher algorithm and was developed as a learning exercise.

Cryptogram Encryption/Decryption Program
1. Introduction
1.1 Background
The increasing need for secure communication has led to the development of encryption and decryption techniques. Cryptography plays a crucial role in safeguarding sensitive information. The Cryptogram program is designed to provide a user-friendly interface for encrypting and decrypting messages using various methods.

1.2 Objective
The main objective of the Cryptogram program is to offer a versatile tool for users to encrypt and decrypt messages securely. The program provides different approaches, including graph-based encryption using adjacency lists and array-based methods.

2. System Architecture
2.1 Overview
The Cryptogram program is structured around a modular architecture. The main components include the Crypt class for handling encryption and decryption, as well as graph representation using adjacency lists and arrays.

2.2 Crypt Class
The Crypt class encapsulates the encryption and decryption logic. It includes methods such as AdList, Encrypt, EncryptWord, decryptList, DecryptWord, encryption, decryption, and displayAdjList to facilitate various operations.

2.3 Graph Representation
Graphs are represented using adjacency lists and arrays. The program initializes two arrays of lists (adj_list and new_list) to store graph data, allowing for flexible encryption and decryption methods.

3. Implementation
3.1 Programming Language
The Cryptogram program is implemented in C++, providing a robust and efficient foundation for the encryption and decryption operations.

3.2 Key Features
The program's key features include:

Interactive user interface for entering messages and selecting encryption/decryption methods.
Versatile encryption methods using adjacency lists and arrays.
Modular code structure with the Crypt class for encapsulating encryption and decryption operations.
3.3 Code Structure
The code is organized into functions and methods to enhance readability and maintainability. The modular structure allows for easy extension and modification.

4. User Interface
4.1 Input
The program handles user input for messages, keys, and menu options. It uses standard input/output for user interactions, making it user-friendly.

4.2 Output
The output includes encrypted/decrypted messages and graphical representations of graphs. The program ensures clear and informative output for users.

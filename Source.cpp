#include<iostream>
#include"Crypt.h"

using namespace std;

int main() {
    Crypt c;
    char msg[200];
    string p;
    cout << "\n\n\n\t\t\t**************Cryptogram**************\t\t\n\n\n";
    cout << "Enter your Message: ";
    cin.getline(msg, 100); cout << endl << endl;
    int key, length, choice;
    const int maxKeyNumber = 5;
    list<int> adj_list[26 + maxKeyNumber];
    list<int> new_list[26 + maxKeyNumber];
a:
    cout << "Enter 1 if you want to do the Encryption/Decryption through Adjacency list.\nEnter 2 if you want to do the Encryption/Decryption through Arrays.\nEnter 3 to access to the graphs (protect!).\nEnter 0 if you want to Exit.\nChoice:  ";
    cin >> choice;
    length = strlen(msg);
    cout << "\n Input Key (from 0 - 4)\n";
    cin >> key;
    switch (choice)
    {
    case 1:
        c.AdList(adj_list);
        cout << "Enter 1 to encrypt and 2 to decrypt: ";
        int o;
        cin >> o;
        if (o == 1) {
            c.Encrypt(adj_list, key);
            c.EncryptWord(msg, key, adj_list);
        }
        else if (o == 2) {
            c.decryptList(adj_list, key, 26 + maxKeyNumber);
            c.DecryptWord(msg, key, adj_list);
            
        } 
        else {
            cout << "Invalid option!" << endl;
        }
        goto a;
    case 2:
        int x;
        cout << "Enter 1 to encrypt and 2 to decrypt:";
        cin >> x;
        if (x == 1) {
            c.encryption(msg, key); cout << endl << endl;
        }
        else if (x == 2) {
            c.decryption(msg, key); cout << endl << endl;
        }
        else {
            cout << "invalid option!" << endl << endl;
        }
        goto a;
    case 3:
        cout << "Enter Password to procced: ";
        cin >> p;
        if (p == "pass") {
            c.AdList(adj_list);
            c.decryptList(adj_list, key, 26 + maxKeyNumber);
            c.displayAdjList(adj_list, 26 + maxKeyNumber);
            for (int i = 0; i < (26 + maxKeyNumber); i++)
            {
                adj_list[i].clear();
            }
            cout << "\n encrypted graph\n";
            c.Encrypt(adj_list, key);
            c.displayAdjList(adj_list, 26 + maxKeyNumber);
            cout << "\n Decrypted Graph\n";
            c.decryptList(adj_list, key, 26 + maxKeyNumber);
            c.displayAdjList(adj_list, 26 + maxKeyNumber);
        }
        else {
            cout << "Incorrect Password!" << endl;
        }
        goto a;
    case 0:
        cout << "Program Exitted!" << endl;
        break;
    default:
        cout << "Invalid option!" << endl << endl;
        goto a;
    }

    return 0;
}
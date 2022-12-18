#include <iostream>
#include "../include/ciphers/Caesar.h"
#include "../include/ciphers/Vigenere.h"
#include "../include/ciphers/CaesarBox.h"
int main() {
    int cipher;
    char type;
    string text;
    cout << "This program allows you encrypt and decrypt English text using Caesar cipher, Vigenere cipher and Caesar Box cipher." << endl;
    cout << "Your text:" << endl;
    getline(cin,text);
    while(true){
        cout << "Choose cipher (1 - Caesar, 2 - Vigenere, 3 - Caesar Box)" << endl;
        cin >> cipher;
        if(cipher == 1 or cipher == 2 or cipher == 3){
            break;
        }else{
            cout << "Wrong input, try again." << endl;
        }
    }
    while(true){
        cout << "e - encryption, d - decryption" << endl;
        cin >> type;
        if(type == 'e' or type == 'd'){
            break;
        }else{
            cout << "Wrong input, try again." << endl;
        }
    }
    switch(cipher){
        case 1:{
            int key;
            cout << "Input key:" << endl;
            cin >> key;

            switch(type){
                case 'e':
                {
                    Caesar caesar("", text, key);
                    string encrypted = caesar.encrypt();
                    cout << encrypted << endl;
                    break;
                }
                case 'd':
                {
                    Caesar caesar(text, "", key);
                    string decrypted = caesar.decrypt();
                    cout << decrypted << endl;
                    break;
                }
            }
            break;
        }
        case 2:
        {
            string key;
            cout << "Input key:" << endl;
            cin >> key;
            switch(type){
                case 'e':
                {
                    Vigenere vigenere("", text, key);
                    string encrypted = vigenere.encrypt();
                    cout << encrypted << endl;
                    break;
                }
                case 'd':
                {
                    Vigenere vigenere(text, "", key);
                    string decrypted = vigenere.decrypt();
                    cout << decrypted << endl;
                    break;
                }
            }
            break;
        }
        case 3:
        {
            int width;
            while(true){
                cout << "Input width:" << endl;
                cin >> width;
                if(width > 0){
                    break;
                }else{
                    cout << "Width needs to be greater than 0." << endl;
                }
            }
            switch(type){
                case 'e':
                {
                    CaesarBox cb("", text, width);
                    string encrypted3 = cb.encrypt();
                    cout << encrypted3 << endl;
                    break;
                }
                case 'd':
                {
                    CaesarBox cb(text, "", width);
                    string decrypted3 = cb.decrypt();
                    cout << decrypted3 << endl;
                    break;
                }
            }
            break;
        }
    }
}

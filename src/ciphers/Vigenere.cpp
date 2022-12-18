
#include "../../include/ciphers/Vigenere.h"

Vigenere::Vigenere(string encryptedInput, string decryptedInput, string key) {
    encryptedString = encryptedInput;
    decryptedString = decryptedInput;
    transform(key.begin(), key.end(), key.begin(), ::toupper);
    this -> key = key;
}

string Vigenere::encrypt() {
    int i;
    for(i = 0; i < decryptedString.length(); i++){
        int k = i % key.length();
        int shift = int(key[k]) - 65 + int(decryptedString[i]);
        encryptedString += transformation(shift, decryptedString[i]);

    }
    return encryptedString;
}
string Vigenere::decrypt() {
    int i;
    for(i = 0; i < encryptedString.length(); i++){
        int k = i % key.length();
        int shift =  int(encryptedString[i]) - (int(key[k]) - 65);
        decryptedString += transformation(shift, encryptedString[i]);
    }
    return decryptedString;
}

char Vigenere::transformation(int shift, char initialText) {
    if(isupper(initialText)){
        if(shift > 90){
            shift -= 26;
        }else if(shift < 65){
            shift += 26;
        }
        return char(shift);
    }else if(islower(initialText)){
        if(shift > 122){
            shift -= 26;
        } else if(shift < 97){
            shift += 26;
        }
        return char(shift);
    }else{
        return initialText;
    }
}


#include "../../include/ciphers/CaesarBox.h"

CaesarBox::CaesarBox(string encryptedInput, string decryptedInput , int width) {
    encryptedString = encryptedInput;
    decryptedString = decryptedInput;
    this -> width = width;
}

string CaesarBox::encrypt() {
    int i;
    int j;
    for(i=0; i < width; i++){
        for(j=i; j < decryptedString.length(); j = j + width){
            encryptedString += decryptedString[j];
        }
    }
    return encryptedString;
}

string CaesarBox::decrypt() {
    int i;
    int j;
    int height;
    if (encryptedString.length() % width == 0){
        height = encryptedString.length()/width;
    } else{
        height = encryptedString.length()/width + 1;
    }
    for(i=0; i < height; i++){
        for(j=i; j < encryptedString.length(); j = j + height){
            decryptedString += encryptedString[j];
        }
    }
    return decryptedString;
}

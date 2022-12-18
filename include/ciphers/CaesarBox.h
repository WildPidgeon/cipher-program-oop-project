//
// Created by Arin on 12/18/2022.
//

#ifndef CYPHERPROGRAM_CAESARBOX_H
#define CYPHERPROGRAM_CAESARBOX_H
#include <iostream>

using namespace std;

class CaesarBox {
public:
    string encryptedString;
    string decryptedString;
    int width;
    CaesarBox(string,string,int);
    string encrypt();
    string decrypt();

};


#endif //CYPHERPROGRAM_CAESARBOX_H

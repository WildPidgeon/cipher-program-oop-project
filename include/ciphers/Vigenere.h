//
// Created by Arin on 12/18/2022.
//

#ifndef CYPHERPROGRAM_VIGENERE_H
#define CYPHERPROGRAM_VIGENERE_H
#include "iostream"
#include <bits/stdc++.h>
using namespace std;


class Vigenere {
public:
    string encryptedString;
    string decryptedString;
    string key;
    Vigenere(string, string, string);
    string encrypt();
    string decrypt();
    char transformation(int, char);
};


#endif //CYPHERPROGRAM_VIGENERE_H

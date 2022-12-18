//
// Created by Arin on 12/15/2022.
//

#ifndef CYPHERPROGRAM_CAESAR_H
#define CYPHERPROGRAM_CAESAR_H
#include <iostream>
using namespace std;


class Caesar {
public:
    string encryptedString;
    string decryptedString;
    int key;
    Caesar(string, string, int);
    char transformation(int, char);
    string encrypt();
    string decrypt();


    

};


#endif //CYPHERPROGRAM_CAESAR_H

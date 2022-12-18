
#include "../../include/ciphers/Caesar.h"


    Caesar::Caesar(string encryptedInput, string decryptedInput, int key){
        encryptedString = encryptedInput;
        decryptedString = decryptedInput;
        this -> key = key;

    }
    char Caesar::transformation(int shift, char initialText){
        if(isupper(initialText)){
            while(shift > 90 or shift < 65){
                if(shift > 90){
                    shift -= 26;
                }else {
                    shift += 26;
                }
            }
            return char(shift);
        }else if(islower(initialText)){
            while(shift > 122 or shift < 97){
                if(shift > 122){
                    shift -= 26;
                }else {
                    shift += 26;
                }
            }
            return char(shift);
        }else{
            return initialText;
        }
    }
    string Caesar::encrypt(){
        int i;
        for(i = 0; i < decryptedString.length(); i++){
            int shift = int(decryptedString[i]) + key;
            encryptedString += transformation(shift, decryptedString[i]);
        }
        return encryptedString;

    }
    string Caesar::decrypt(){
        int i;
        for(i = 0; i < encryptedString.length(); i++) {
            int shift = int(encryptedString[i]) - key;
            decryptedString += transformation(shift, encryptedString[i]);
        }
        return decryptedString;
    }


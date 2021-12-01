#include <iostream>




bool verifica(char x){

    if( ((x>='a') && (x<='z')) || ((x>='A') && (x<='Z')) ) {

        return true;

    }return false;


    /*else if( ((x!='a') && (x!='z')) || ((x!='A') && (x!='Z')) ) {

        falso
    }*/


}

char conversione(char x) {

    char ris;

    if (x >= 'A' && x <= 'Z') {

        ris = x + 32;

    } else if (x >= 'a' && x <= 'z') {

        ris = x - 32;
    }
}
int main() {

    char x;

    std::cin >> x;

    bool z =verifica(x);

    if(verifica(x)==true){

        std::cout << conversione(x) <<std::endl;

    }else {

        std::cout << "errore" <<std::endl;

    }




    return 0;
}




#include <iostream>



char conversione(char x){

    char ris;

    if( ((x>='a') && (x<='z')) || ((x>='A') && (x<='Z')) ) {

            std::cout << "vero" << std::endl;

    }else if((x!='a') && (x!='z')) {

        std::cout << "errore" << std::endl;
    }

    if(x>='A' && x <= 'Z'){

        ris = x+32;

    }else if (x>='a' && x <= 'z') {

        ris = x-32;
    }
    return  ris;
}

int main() {


    char x;


    std::cin >> x;

    char z =conversione(x);

    std::cout << z << std::endl;


    return 0;
}





#include <iostream>


std::string pyramid () {

    int i;
    int e = 2;
    for (i = 1; i <=11; i++) {
        std::cout << " ";
        for (int j = 1; j < i; j++ ) {


            if (j == e) {
                e = e+2;
                break;

            } else {
                std::cout << "*";
            }



        }
        std::cout << std::endl;

    }
}




int main() {


    pyramid ();
    return 0;
}

#include <iostream>

void promenne() {
    int cele_cislo = -1;

    unsigned int cele_nezaporne_cislo = 1;

    std::size_t index_v_poli = 0;

    double desetinne_cislo = 3.14;

    char znak = 'a';

    bool pravda_nebo_nepravda = true;

    std::string retezec = "Ahoj";
}

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int a = 0;

void scope() {
    int a = 5; 

    a = 3;

    std::cout << a << std::endl; // 3
    
    {
        int a = 4;
        std::cout << a << std::endl; // 4
        a = 6;
        std::cout << a << std::endl; // 6
    }

    std::cout << a << std::endl; // 3

}

void cykly() {
    for (int i = 0; i < 10; i++) {
        std::cout << i << std::endl;
    }

    int i = 0;
    while (i < 10) {
        std::cout << i << std::endl;
        i++;
    }

    i = 0;
    do {
        std::cout << i << std::endl;
        i++;
    } while (i < 10);
}

void stars(unsigned int a){
    for(int i = 0; i < a; i++){
        std::cout << "*";
    }
}

void space(unsigned int a){
    for(int i = 0; (i < a) && (i > (-1)); i++){
        std::cout << " ";
    }
}

void ctverec(unsigned int strana){
    stars(strana);
    std::cout << std::endl;
    for(int i = 0; i < (strana-2); i++){
        std::cout << "*";
        for(int i = 0; i < (strana-2); i++){
        std::cout << " ";
        }
        std::cout << "*" << std::endl;
    }
    stars(strana);
    std::cout << std::endl;
}

void obdelnik(unsigned int strana_a, unsigned int strana_b){
    for(unsigned int i = 0; i < strana_a; i++){
        stars(strana_b);
        std::cout << std::endl; 
    }
}

void obdelnik_my(unsigned int strana_a, unsigned int strana_b){
    stars(strana_a);
    std::cout << std::endl;
    for(int i = 0; i < (strana_b-2); i++){
        std::cout << "*";
        for(int i = 0; i < (strana_a-2); i++){
        std::cout << " ";
        }
        std::cout << "*" << std::endl;
    }
    stars(strana_a);
    std::cout << std::endl;
}

void pyramid_vertical(unsigned int line_count){
    for(unsigned int i = 0; i < (line_count/2 + 1); i++){
        stars(i+1);
        std::cout << std::endl;
        if(i == (line_count/2 + 1)){
            break;
        }

    }
    for(unsigned int i = (line_count/2); i > 0; i--){
        stars(i);
        std::cout << std::endl;
    }

}

void pyramid_horizontal(unsigned int star_count){
    for(unsigned int a = 0; a < (star_count/2 + 1); a++){
        for(unsigned int i = 0; i < (star_count/2 - a); i++){
            std::cout << " ";
        }
        stars(a*2 + 1);
         std::cout << std::endl;
    }
}   


int main() {
    stars(5);
    std::cout << std::endl;
    obdelnik(5, 7);
    std::cout << std::endl;
    pyramid_vertical(7);
    std::cout << std::endl;
    pyramid_horizontal(7);

    return 0;
}
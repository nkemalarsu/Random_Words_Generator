//
//  main.cpp
//  Random Kelime
//
//  Created by N Kemal ARSU on 3.12.2020.
//
#include<iostream>
#include<cstdlib>
#include<ctime>
#include <string.h>
using namespace std;


void randomkelime(){
srand(time(0));

string karakterListesi = "abcdefghijklmnoprstuvyzABCDEFGHIJKLMNOPRSTUVYZ"; // const değiştirelemez değişken olarak alfabede tanımlandı

 // Her Kelimenin 'A' ile baslamasini burada tanimlandi
for(int a=0;a<20; a++){
    int d =(rand()%9+1);
    string RandomHarf = "A";

 for(int i = 0; i <d; i++) {
      RandomHarf += karakterListesi[rand()%45+0];
    
}
        cout << "Random kelime: " <<RandomHarf << endl;
}
}


int main() {
    randomkelime();
     return 0;
}

ß

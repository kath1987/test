
#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;

    cout << "Hola, ¿cómo te llamas? ";
    getline(cin, name);
    cout << "Hola!! " << name << endl;

    return 0;
}

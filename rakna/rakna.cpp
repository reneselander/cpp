// program (in swedish) that do calculations using + - * /

#include <iostream>

using std::cout;

using std::cin;

using std::endl;

using std::system;

int main(){

    int tal_1;

    int tal_2;

    cout << "Skriv ett tal: " << endl;
    
    cin >> tal_1;

    cout << "Skriv ett annat tal: " << endl;

    cin >> tal_2;

    cout << tal_1 + tal_2 << " (addition)" << endl;

    cout << tal_1 - tal_2 << " (subtraktion)" << endl;

    cout << tal_1 * tal_2 << " (multiplikation)" << endl;

    cout << tal_1 / tal_2 << " (division)" << endl;

    system("pause>0");

}
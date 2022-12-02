#include <iostream>
using namespace std;

int main() {
    char s[200];
    int i;
    cout << "Introduceti un text: ";
    cin.getline(s, 199);
    i = 0;
    while (s[i] != '\0')
        i++;
    cout << "Sirul are " << i << " caractere\n";
}
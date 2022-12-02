#include <iostream>
using namespace std;

class Weight {
    private:
        int h, a;
        double w;
    public:
        Weight(int height, int age)
        {
            h = height;
            a = age;
        };
        double calcul()
        {
            w = 50.0 + 0.75 * (h - 150) + 0.25 * (a - 20);
            return w;
        };
};

int main() {
    int he, ag;
    cout << "Enter your height: ";
    cin >> he;
    cout << "Enter your age: ";
    cin >> ag;
    Weight gr(he, ag);
    cout << "Your weight should be " << gr.calcul() << endl;
}
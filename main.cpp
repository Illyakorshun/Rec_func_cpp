#include <iostream>
using namespace std;

int ree(int N, int D) {
    if (D < 1) {
        return 1;
    }
    return N * ree(N, D - 1);
}

int main() {

    int N;
    cout << "Enter a digit: ";
    cin >> N;
    int D;
    cout << "Enter a degree: ";
    cin >> D;

    cout << ree(N, D) << endl;


    return 0;
}

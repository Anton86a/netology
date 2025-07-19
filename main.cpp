#include <iostream>
#include <cmath>
using namespace std;

class calculate {
    float var, varSqr, varSqrt;
public:
    float GetSqr () { return varSqr;}
    float GetSqrt() { return varSqrt;}
    float SetVar(float x) {
        var = x;
        varSqr = var*var;
        varSqrt = sqrt(var);

    }
    void Show () {
        cout << "var=" << var << " sqrt=" << GetSqrt() << " sqr=" << GetSqr() << endl;
    }
};
void Show (calculate obj) {
    obj.Show();
}

int main() {
    calculate first, second;
    first.SetVar(25);
    second.SetVar(625);
    Show(first);
    Show(second);
    return 0;
}



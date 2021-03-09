#include <iostream>

#include "../prefix_to_infix.cpp"

using namespace std;

int main()
{
    string prefix("*-A/BC-/AKL");
    
    cout << "Prefix Expression is:: " << prefix << "\n";
    
    string infix = prefix_to_infix(prefix);
    
    cout << "Postfix form is :: " << infix << "\n";
    
    return 0;
}

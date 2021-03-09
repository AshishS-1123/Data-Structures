#include <iostream>

#include "../infix_to_postfix.cpp"

using namespace std;

int main()
{
    string infix("A+B*C-(D/E)");
    
    cout << "Infix Expression is:: " << infix << "\n";
    
    string postfix = infix_to_postfix(infix);
    
    cout << "Postfix form is :: " << postfix << "\n";
    
    return 0;
}

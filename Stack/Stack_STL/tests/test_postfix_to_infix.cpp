#include "../postfix_to_infix.cpp"

using namespace std;

int main()
{
    string post = "ABC++";
    
    cout << "Postfix Expression Is :: " << post << "\n\n";

    cout << "After Conversion to Infix :: ";
    
    cout << postfix_infix_convert(post) << endl;

    return 0;
}

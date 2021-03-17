#include "../postfix_to_prefix.cpp"

using namespace std;

int main()
{
    string post = "AB+CD-*";
    
    cout << "Postfix Expression Is :: " << post << "\n\n";

    cout << "After Conversion to Prefix :: ";
    
    cout << postfix_prefix_convert(post) << endl;

    return 0;
}

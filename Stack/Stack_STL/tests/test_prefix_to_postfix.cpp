#include "../prefix_to_postfix.cpp"

using namespace std;

int main()
{
    string pre = "*-A/BC-/AKL";
    
    cout << "Prefix Expression :: " << pre << "\n\n";

    cout << "After Conversion to Postfix :: ";

    cout << prefix_postfix_convert(pre) << "\n";
    
    return 0;
}

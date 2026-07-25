#include <iostream>
#include "MyString.h"

using namespace std;

int main() {
    MyString s1("Hello"), s2(" World");

    cout << "s1 = ";
    s1.display();
    cout << "\n";

    cout << "Length = " << s1.size() << "\n";

    s1.append(" C++");
    cout << "Append = ";
    s1.display();
    cout << "\n";

    cout << "Find C++ = " << s1.find("C++") << "\n";

    MyString sub = s1.substr(6, 3);
    cout << "Substring = ";
    sub.display();
    cout << "\n";

    MyString s3 = s1 + s2;
    cout << "Concatenate = ";
    s3.display();
    cout << "\n";

    cout << "Compare s1 and s2 = " << s1.compare(s2) << "\n";

    cout << "Equality = " << (s1 == s2 ? "Equal" : "Not Equal") << "\n";

    cout << "Character[1] = " << s1[1] << "\n";

    s1.clear();

    cout << "Empty after clear = "
         << (s1.empty() ? "Yes" : "No") << "\n";

    return 0;
}
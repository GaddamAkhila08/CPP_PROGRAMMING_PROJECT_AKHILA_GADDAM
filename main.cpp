#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
    MyString s1, s2, result;
    char input[100], input2[100], sub[100];
    int choice, start, len, index;

    do
    {
        cout << "\n=====================================================\n";
        cout << "        CUSTOM STRING CLASS MANAGEMENT SYSTEM\n";
        cout << "=====================================================\n";
        cout << "      C++ Mini Project | CipherSchools Training\n";
        cout << "=====================================================\n";

        cout << "\n--------------------- MAIN MENU ----------------------\n";
        cout << " 1. Enter New String\n";
        cout << " 2. Display Current String\n";
        cout << " 3. Display String Length\n";
        cout << " 4. Append Another String\n";
        cout << " 5. Compare Two Strings\n";
        cout << " 6. Search Substring\n";
        cout << " 7. Extract Substring\n";
        cout << " 8. Clear Current String\n";
        cout << " 9. Check if String is Empty\n";
        cout << "10. Concatenate Two Strings\n";
        cout << "11. Display Character at Index\n";
        cout << "12. Check Equality (==)\n";
        cout << "13. Exit Application\n";
        cout << "------------------------------------------------------\n";
        cout << "Enter your choice : ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1:
            {
                cout << "\nEnter String : ";
                cin.getline(input,100);

                s1.setString(input);

                cout << "\n✔ String stored successfully.\n";
                cout << "Current String : ";
                s1.display();
                cout << endl;
                break;
            }

            case 2:
            {
                cout << "\nCurrent String : ";
                s1.display();
                cout << endl;
                break;
            }

            case 3:
            {
                cout << "\nString Length : " << s1.size() << endl;
                break;
            }

            case 4:
            {
                cout << "\nEnter String to Append : ";
                cin.getline(input,100);

                s1.append(input);

                cout << "\n✔ String appended successfully.\n";
                cout << "Current String : ";
                s1.display();
                cout << endl;
                break;
            }

            case 5:
            {
                cout << "\nEnter Second String : ";
                cin.getline(input2,100);

                s2.setString(input2);

                int cmp = s1.compare(s2);

                if(cmp==0)
                    cout << "\nResult : Both strings are equal.\n";
                else if(cmp>0)
                    cout << "\nResult : First string is lexicographically greater.\n";
                else
                    cout << "\nResult : Second string is lexicographically greater.\n";

                break;
            }

            case 6:
            {
                cout << "\nEnter Substring : ";
                cin.getline(sub,100);

                int pos = s1.find(sub);

                if(pos==-1)
                    cout << "\nSubstring not found.\n";
                else
                    cout << "\nSubstring found at index : " << pos << endl;

                break;
            }

            case 7:
            {
                cout << "\nEnter Start Index : ";
                cin >> start;

                cout << "Enter Length : ";
                cin >> len;
                cin.ignore();

                result = s1.substr(start,len);

                cout << "\nExtracted Substring : ";
                result.display();
                cout << endl;

                break;
            }
                        case 8:
            {
                s1.clear();

                cout << "\n✔ String cleared successfully.\n";
                cout << "Current String : ";
                s1.display();
                cout << endl;

                break;
            }

            case 9:
            {
                if(s1.empty())
                    cout << "\nStatus : The string is empty.\n";
                else
                    cout << "\nStatus : The string contains data.\n";

                break;
            }

            case 10:
            {
                cout << "\nEnter Second String : ";
                cin.getline(input2,100);

                s2.setString(input2);

                result = s1 + s2;

                cout << "\nConcatenated String : ";
                result.display();
                cout << endl;

                break;
            }

            case 11:
            {
                cout << "\nEnter Index : ";
                cin >> index;
                cin.ignore();

                if(index >= 0 && index < s1.size())
                {
                    cout << "\nCharacter at index "
                         << index << " : "
                         << s1[index] << endl;
                }
                else
                {
                    cout << "\nInvalid index! Please enter a value between 0 and "
                         << s1.size() - 1 << "." << endl;
                }

                break;
            }

            case 12:
            {
                cout << "\nEnter Second String : ";
                cin.getline(input2,100);

                s2.setString(input2);

                if(s1 == s2)
                    cout << "\nResult : Both strings are equal.\n";
                else
                    cout << "\nResult : Strings are different.\n";

                break;
            }

            case 13:
            {
                cout << "\n=====================================================\n";
                cout << "     Thank You for Using the Custom String Class\n";
                cout << "=====================================================\n";
                cout << "Project Developed by : Akhila Gaddam\n";
                cout << "Summer Training Project - CipherSchools\n";
                cout << "=====================================================\n";

                break;
            }

            default:
            {
                cout << "\nInvalid choice! Please enter a number between 1 and 13.\n";
            }
        }

    } while(choice != 13);

    return 0;
}
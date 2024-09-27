#include <iostream>
#include <cstring>
using namespace std;

class String {
    char str[100];

public:
    void setString(const char* s) {
        strcpy(str, s);
    }

    String operator+(String const& obj) {
        String result;
        strcpy(result.str, str);
        strcat(result.str, obj.str);
        return result;
    }

    void operator=(String const& obj) {
        strcpy(str, obj.str);
    }

    bool operator<=(String const& obj) {
        return strcmp(str, obj.str) <= 0;
    }

    int length() const {
        return strlen(str);
    }

    void tolower() {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + 32;
            }
        }
    }

    void toupper() {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
        }
    }

    void display() const {
        cout << str << endl;
    }
};

int main() {
    String str1, str2, str3;

    str1.setString("Hello");
    str2.setString("World");

    str3 = str1 + str2;
    cout << "Concatenated string: ";
    str3.display();

    str2 = str1;
    cout << "After copying str1 to str2: ";
    str2.display();

    if (str1 <= str3)
        cout << "str1 is less than or equal to str3" << endl;
    else
        cout << "str1 is greater than str3" << endl;

    cout << "Length of str1: " << str1.length() << endl;

    str1.tolower();
    cout << "str1 in lowercase: ";
    str1.display();

    str1.toupper();
    cout << "str1 in uppercase: ";
    str1.display();

    return 0;
}


#include <iostream>
using namespace std;


string encrypt(string text, int s)
{
    string result = "";

    for (int i = 0; i < text.length(); i++) {

        if (isupper(text[i]))
            result = result + char(int(text[i] + s - 65) % 26 + 65);


        else if(islower(text[i]))
            result = result + char(int(text[i] + s - 97) % 26 + 97);
        else
            result = result + text[i];
    }

    return result;
}


string decrypt(string text, int s)
{
    string result = "";

    for (int i = 0; i < text.length(); i++) {

        if (isupper(text[i]))
            result = result + char(int(text[i] + s - 65) % 26 + 65);


        else if(islower(text[i]))
            result = result + char(int(text[i] + s - 97) % 26 + 97);
        else
            result = result + text[i];
    }

    return result;
}

int main()
{
    string text = "TRESNA RANI";
    int s = 3;
    cout << "Text : " << text;
    //cout << "\nShift: " << s;
    cout << "\nCipher: " << encrypt(text, s);
    cout << "\nCipher: " << (text);
    return 0;
}

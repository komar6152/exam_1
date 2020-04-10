#include <iostream>
using namespace std;

int main(){
    string sth;
    int key, rest;
    cout << "Write your text: ";
    getline(cin,sth);
    cout << "Give a key: ";
    cin >> key;

   for(int i = 0; i < sth.length(); i++){

       if(sth[i]>='A' && sth[i]<='Z')
        {
            sth[i] = (sth[i] - 'A' + key) % 26 + 'A';
            if (sth[i] < 'A') sth[i] +=26;
        }
        else if(sth[i]>='a' && sth[i]<='z')
        {
            sth[i] = (sth[i] - 'a' + key) % 26 + 'a';
            if (sth[i] < 'a') sth[i] +=26;
        }
    }

    cout << "Your cipher text is: ";
    cout << sth;
    return 0;
}

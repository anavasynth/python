#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int max_d = 0;
    vector<string> arr;
    string str;
    string MainWord;
    getline(cin, str);

    string delim(", ");//розділювач
    int prev = 0;
    int next = 0;
    int delta = delim.length(); // довжина розділювача

    while ((next = str.find(delim, prev)) != string::npos) {

        string word = str.substr(prev, next - prev);
        cout << word << endl;

        arr.push_back(str.substr(prev, next - prev));
        prev = next + delta;
    }

    string word = str.substr(prev);
    cout << word << endl;

    arr.push_back(str.substr(prev));


    // пошук найдовшого слова
    for (vector<string>::iterator it = arr.begin(); it < arr.end(); it++)
    {

        string slovo = *it;
        if (max_d < slovo.length()) {
            max_d = slovo.length();
        }


    }

    //вивід довжини
    cout << max_d << endl;

    //вивід найдовших слів
    vector<string>::iterator it = arr.begin();
    while (it < arr.end()) {
        string slovo = *it;
        if (slovo.length() == max_d) {

            cout << slovo << endl;
            arr.erase(it);
            it--;
        }
        it++;
    }


    cout << endl;
    cout << endl;

    //рядок без найдовших слів
    for (vector<string>::iterator it = arr.begin(); it < arr.end(); it++)
    {
        string slovo = *it;
        MainWord += slovo + delim;


    }

    //вивід рядка без найдовших слів
    cout << MainWord.erase(MainWord.length() - 2, 2);
    return 0;
}
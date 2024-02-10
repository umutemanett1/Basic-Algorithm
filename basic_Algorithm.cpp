#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    string myString;
    vector <string> storeStr;
    string word;

    cout<< "Please enter a string" << endl;
    getline(cin, myString);

for(char singleWord: myString){
    if(singleWord != ' '){
        word+=singleWord;
    }
    else{
        storeStr.push_back(word);
        word.clear();
    }
}

    storeStr.push_back(word);
    reverse(storeStr.begin(), storeStr.end());
    for(const string& word : storeStr ){
        cout << word << " " ;
    }

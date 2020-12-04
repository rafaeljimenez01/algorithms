#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <sstream>
using namespace std;

vector<string> solution(int min_cheermote_amount, vector<string> valid_cheermotes, string messages) {
    unordered_map<string,int> umap;
    string delimeter = ",";
    size_t pos = 0;
    vector<string> messageList;
    while((pos = messages.find(delimeter)) != string::npos){ //Create an array of each message
        messageList.push_back(messages.substr(0,pos));
        messages.erase(0, pos+delimeter.length());
    }
    for(int i =0; i < messageList.size(); i++){
        for(int j=0; j < valid_cheermotes.size(); j++){
            size_t word = messageList[i].find(valid_cheermotes[i]);
            string deliTemp = " ";
            while(word != string::npos){
                messageList[i].substr(word,)
            }
        }
        
    }
    return {"a", "b"};
}

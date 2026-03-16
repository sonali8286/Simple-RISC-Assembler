#include<bits/stdc++.h>
#include <windows.h>
using namespace std;
void first(vector<string>&v,vector<string>&current){
    for(int i=1;i<v.size();i++){
        // Check if it is like R0, R1, #25 etc.
        if(v[i][0] =='R'){ // Register like R0, R1
           
                int a = stoi(v[i].substr(1)); // Convert R0 to 0
                string present = bitset<4>(a).to_string(); // Register only needs 5 bits
                current.push_back(present);
           
            }
        else {
            // if(v[i][j][0] == '#') v[i][j] = v[i][j].substr(1); // Remove '#' if present
            current.push_back("01");
                int a = stoi(v[i]); 
                string present = bitset<16>(a).to_string();
                current.push_back(present);
        }
    }
    if(current.size()==5){
        current.push_back("00000000000000");
    }
    // cout<<"first time:";
    // for(auto it:current) cout<<it<<" ";
    // cout<<endl;
}
void h(vector<string>&v,vector<string>&current){
    for(int i=0;i<26;i++){
        current.push_back("0");
    }
}
void cmp(vector<string>&v,vector<string>&current){
    current.push_back("0000");
    for(int i=1;i<v.size();i++){
        // Check if it is like R0, R1, #25 etc.
        if(v[i][0] =='R'){ // Register like R0, R1
           
                int a = stoi(v[i].substr(1)); // Convert R0 to 0
                string present = bitset<4>(a).to_string(); // Register only needs 5 bits
                current.push_back(present);
           
            }
        else {
            // if(v[i][j][0] == '#') v[i][j] = v[i][j].substr(1); // Remove '#' if present
            current.push_back("01");
                int a = stoi(v[i]); 
                string present = bitset<16>(a).to_string();
                current.push_back(present);
        }
    }
    if(current.size()==5){
        current.push_back("00000000000000");
    }
}
void Not(vector<string>&v,vector<string>&current){
    // current.push_back("0000");
    for(int i=1;i<v.size();i++){
        // Check if it is like R0, R1, #25 etc.
        if(i==2){
            current.push_back("0000");
            // continue;
        }
        if(v[i][0] =='R'){ // Register like R0, R1
           
                int a = stoi(v[i].substr(1)); // Convert R0 to 0
                string present = bitset<4>(a).to_string(); // Register only needs 5 bits
                current.push_back(present);
           
            }
        else {
            // if(v[i][j][0] == '#') v[i][j] = v[i][j].substr(1); // Remove '#' if present
            current.push_back("01");
                int a = stoi(v[i]); 
                string present = bitset<16>(a).to_string();
                current.push_back(present);
        }
    }
    if(current.size()==5){
        current.push_back("00000000000000");
    }
}
void ld(vector<string>&v,vector<string>&current){
    for(int i=1;i<v.size();i++){
        // Check if it is like R0, R1, #25 etc.
        if(v[i][0] =='R'){ // Register like R0, R1
           
                int a = stoi(v[i].substr(1)); // Convert R0 to 0
                string present = bitset<4>(a).to_string(); // Register only needs 5 bits
                current.push_back(present);
           
            }
        else {
            // if(v[i][j][0] == '#') v[i][j] = v[i][j].substr(1); // Remove '#' if present
            current.push_back("01");
               for(int j=0;j<v[i].size();j++){
                if(v[i][j]=='0') current.push_back("0000");
                else if(v[i][j]=='1') current.push_back("0001");
                else if(v[i][j]=='2') current.push_back("0010");
                else if(v[i][j]=='3') current.push_back("0011");
                else if(v[i][j]=='4') current.push_back("0100");
                else if(v[i][j]=='5')current.push_back("0101");
                else if(v[i][j]=='6')current.push_back("0110");
                else if(v[i][j]=='7')current.push_back("0111");
                else if(v[i][j]=='8')current.push_back("1000");
                else if(v[i][j]=='9')current.push_back("1001");
                else if(v[i][j]=='A')current.push_back("1010");
                else if(v[i][j]=='B')current.push_back("1011");
                else if(v[i][j]=='C')current.push_back("1100");
                else if(v[i][j]=='D')current.push_back("1101");
                else if(v[i][j]=='E')current.push_back("1110");
                else if(v[i][j]=='F')current.push_back("1111");
               }
        }
    }
    current.push_back("0000");
    // if(current.size()==5){
    //     current.push_back("00000000000000");
    // }
}
void b(vector<string>&v,vector<string>&current){
    for(int j=0;j<v[1].size();j++){
        if(v[1][j]=='0') current.push_back("0000");
        else if(v[1][j]=='1') current.push_back("0001");
        else if(v[1][j]=='2') current.push_back("0010");
        else if(v[1][j]=='3') current.push_back("0011");
        else if(v[1][j]=='4') current.push_back("0100");
        else if(v[1][j]=='5')current.push_back("0101");
        else if(v[1][j]=='6')current.push_back("0110");
        else if(v[1][j]=='7')current.push_back("0111");
        else if(v[1][j]=='8')current.push_back("1000");
        else if(v[1][j]=='9')current.push_back("1001");
        else if(v[1][j]=='A')current.push_back("1010");
        else if(v[1][j]=='B')current.push_back("1011");
        else if(v[1][j]=='C')current.push_back("1100");
        else if(v[1][j]=='D')current.push_back("1101");
        else if(v[1][j]=='E')current.push_back("1110");
        else if(v[1][j]=='F')current.push_back("1111");
       }
current.push_back("0000000000");
}
// -------------------------------------------------main function-------------------------------------------------
int main() {
    vector<vector<string>> v;
    ifstream file("input.asm"); // Open the file

    if (!file) {
        cout << "File not found!" << endl;
        return 0;
    }

    string line;
    // Read the file line by line
    while(getline(file, line)) {
        vector<string> temp;
        string word = "";
        
        // Traverse the line character by character
        for(char ch:line){
            if(ch == ' ' || ch == ','){  
                if(!word.empty()){
                    temp.push_back(word); // Store word (excluding comma)
                    word = "";
                }
            }
            else{
                word += ch;
            }
        }
        if(!word.empty()) temp.push_back(word);

        v.push_back(temp);
    }

    file.close(); // Close the file

    unordered_map<string,string> OPCODES = {
        {"ADD", "00000"}, {"SUB", "00001"}, {"MUL", "00010"}, {"DIV", "00011"},
        {"MOD", "00100"}, {"CMP", "00101"}, {"AND", "00110"}, {"OR", "00111"},
        {"NOT", "01000"}, {"MOV", "01001"},{"LSL", "01010"}, {"LSR", "01011"}, 
        {"ASR", "01100"}, {"NOP", "01101"}, {"LD", "01110"}, {"ST", "01111"},
         {"BEQ", "10000"}, {"BGT", "10001"},  {"B", "10010"}, {"CALL", "10011"}, 
         {"RET", "10100"}, {"HLT", "11111"}
    };
    unordered_map<string,int> check = {
        {"ADD", 4}, {"SUB", 4}, {"MUL",4}, {"DIV", 4},
        {"MOD", 4}, {"CMP", 3}, {"AND", 4}, {"OR",4},
        {"NOT", 3}, {"MOV", 3},  {"LSL", 4}, {"LSR", 4}, 
        {"ASR",4}, {"NOP", 1},
        {"LD",3}, {"ST", 3}, {"BEQ", 2}, {"BGT", 2},
        {"B", 2}, {"CALL", 2}, {"RET", 1}, 
        {"HLT",1}};
    vector<vector<string>> ans;
    // Process each line
    for(int i=0;i<v.size();i++){
        if(check[v[i][0]]!=v[i].size()) {
            cout<<v[i][0]<<" "<<v[i].size()<<endl;
            cout<<"INVALID STATEMET\n";
            continue;
        }
        vector<string> current;
        current.push_back(OPCODES[v[i][0]]); // Push the opcode binary
        
        // Check if the last argument is an immediate value or a register
        if(!(isdigit(v[i][v[i].size()-1][0]))) 
            current.push_back("0"); // It's a register
        else 
            current.push_back("1"); // It's an immediate value

        ans.push_back(current);
    }
    cout<<"this is v"<<endl;

    for(auto it:v){
        for(auto itt:it) cout<<itt<<" "; 
        cout<<endl;
    }
    cout<<"v end"<<endl;
    for(int i=0;i<v.size();i++){
        // cout<<i<<endl;
        if(check[v[i][0]]!=v[i].size()) {
            // cout<<v[i][0]<<" "<<v[i].size()<<endl;
            // cout<<"INVALID STATEMET\n";
            continue;
        }
        if(v[i][0]=="ADD"||v[i][0]=="SUB"||v[i][0]=="MUL"||v[i][0]=="DIV"||v[i][0]=="MOD"||v[i][0]=="AND"
        ||v[i][0]=="OR"||v[i][0]=="LSL"||v[i][0]=="LSR"||v[i][0]=="ASR") {
            first(v[i],ans[i]);
            // continue;
        }
        else if(v[i][0]=="CMP") cmp(v[i],ans[i]); 
        else if(v[i][0]=="NOT"|| v[i][0]=="MOV") Not(v[i],ans[i]);
        else if(v[i][0]=="LD"||v[i][0]=="ST"){
            ld(v[i],ans[i]);
        }
        else if(v[i][0]=="NOP"||v[i][0]=="HLT"||v[i][0]=="RET") h(v[i],ans[i]);
        else if(v[i][0]=="CALL"||v[i][0]=="B"||v[i][0]=="BGT"||v[i][0]=="BEQ") b(v[i],ans[i]);
    }
    
    // cout<<"this the call i am making ";
    // vector<string> gh={"11111"};
    // first(v[0],gh);
    // for(auto it:gh) cout<<it;
    // cout<<"now done"<<endl;
    // Output the result
    for(auto it:ans){
        for(auto itt:it) cout<<itt;
        cout<<endl;
    }

    return 0;
}
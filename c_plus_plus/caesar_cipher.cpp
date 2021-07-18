#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cstdbool>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'caesarCipher' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER k
 */

string caesarCipher(string s, int k) {
    
    string encrypted_message = s;
    int short_shift = k % 26;
    
    for(int i = 0; i <= encrypted_message.length() - 1; ++i) {
            
        if( (encrypted_message.at(i) >= 'a') && (encrypted_message.at(i) <= 'z') ) {
            
            if(encrypted_message.at(i) + short_shift > 122)
            {
                encrypted_message.at(i) = 'a' + encrypted_message.at(i) + short_shift - 'z' - 1;
            }
            
            else {
                encrypted_message.at(i) = encrypted_message.at(i) + short_shift;
            }
            
        }
        
        else if( (encrypted_message.at(i) >= 'A') && (encrypted_message.at(i) <= 'Z') ) {
            if (encrypted_message.at(i) + short_shift > 90)
            {
                encrypted_message.at(i) = 'A' + encrypted_message.at(i) + short_shift - 'Z' - 1;
            }
            
            else {
                encrypted_message.at(i) = encrypted_message.at(i) + short_shift;
            }
        }
        
    }
    
    return encrypted_message;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string s;
    getline(cin, s);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

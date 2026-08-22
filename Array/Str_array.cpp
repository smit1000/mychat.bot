#include <iostream>
using namespace std;

// int main() {
//     string name;
//     cout<<"enter the name";
// getline(cin,name);
// cout<<name.length()<<endl;
// cout<<name[3];
//     return 0;
// }

// // string sentence;
// // getline(cin, sentence);

// #include <iostream>
// #include<string>
// using namespace std;

// int main() {
//     string s="smit";
//     for(int i=0;i<s.length();i++){
//         cout<<s.upper()<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int vowel = 0, uppercase = 0, lowercase = 0, consonant = 0, digits = 0, space = 0;
//     string s;
    
//     cout << "Enter a string: ";
//     getline(cin, s);
//     for (int i = 0; i < s.length(); i++) {
//         char ch = s[i];

        
//         if (ch == ' ') {
//             space++;
//         }
        
//         else if (ch >= '0' && ch <= '9') {
//             digits++;
//         }
//         else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            
//             if (ch >= 'A' && ch <= 'Z') {
//                 uppercase++;
//             } else {
//                 lowercase++;
//             }
//             if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || 
//                 ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || 
//                 ch == 'U' || ch == 'u') {
//                 vowel++;
//             } else {
//                 consonant++; 
//             }
//         }
//     }

//     cout << "Uppercase characters: " << uppercase << endl;
//     cout << "Lowercase characters: " << lowercase << endl;
//     cout << "Vowels: " << vowel << endl;
//     cout << "Consonants: " << consonant << endl;
//     cout << "Digits: " << digits << endl;
//     cout << "Spaces: " << space << endl;
//     return 0;
// }

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "programming";
    
    for (int i = 0; i < s.length(); i++) {
        bool alreadyPrinted = false;
        
        // Look backward to see if s[i] appeared earlier in the string
        for (int j = 0; j < i; j++) {
            if (s[i] == s[j]) {
                alreadyPrinted = true;
                break;
            }
        }
        
        // Only print if it's the first time we are seeing this character
        if (!alreadyPrinted) {
            cout << s[i];
        }
    }
    return 0;
}

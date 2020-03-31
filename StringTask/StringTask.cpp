#include <bits/stdc++.h>

using namespace std;

int main(){
  string s, s2;

  cin >> s;

  char vowels[5] = {'A', 'E', 'I', 'O', 'U'};

  for(int i = 0; i < s.length(); i++){
    for(int j = 0; j < 5; j++){
      if(toupper(s[i]) == vowels[j]){
        s.erase(i, 1);
      }
    }
    s2+=".";
    s2+=tolower(s[i]);
  }
  cout << s2;
}

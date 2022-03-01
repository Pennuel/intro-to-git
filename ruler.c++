#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;


string GetRuler(const string& kingdom) {

  // TODO: implement this method to determine the ruler name, given the kingdom.
    int lastLetter = kingdom.length();
    char last = kingdom[lastLetter-1];
   string ruler = "";
   if(last =='y'){
       return ruler = "no ruler";
   }
   vector<char>vowels = {'a','e','i','o','u'};
   
   for(int i = 0; i<vowels.size();i++){
       if (last == vowels.at(i)){
           return ruler = "Alice";
       }
        ruler= "Ben";
       
   }
  return ruler;
}

int main() {
  int testcases;
  cin >> testcases;
  string kingdom;

  for (int t = 1; t <= testcases; ++t) {
    cin >> kingdom;
    cout << "Case #" << t << ": " << kingdom << " is ruled by "
         << GetRuler(kingdom) << ".\n";
  }
  return 0;
}
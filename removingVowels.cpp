#include<iostream>
#include<string>
using namespace std;

int vowels(char c)
{
    
    c = tolower(c);

    if(c == 'a' || c == 'e' || c == 'i'|| c == 'o' || c == 'u')
    return 1;
    
    return 0;
}



string removeVowels(string s)
{
    string result;

   for(int i = 0 ; i < s.length() ; i++)
   {
      if(!vowels(s[i]))
      {
        result += s[i] ;
      }

   }

return result;
}


int main(){
 string str,result;

cout<<"Enter a string : "<<endl;
getline(cin,str);

result = removeVowels(str);

cout<< "After removing vowels : "<<result<<endl;

return 0;
}
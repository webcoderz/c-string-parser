#include<iostream>
#include <string>
using namespace std;

//Cody Webb


//main
int main () {

  char input_str[500];
  char filter_word[20]= "you";


  int wordCounter(char input_str[500]);
  int vowelcounter(char input_str[500] );
  int puncCount(char input_str[500]);
  string findSubString(char input_str[500], char filter_word[20]);



	cout<<"\nEnter the input string: ";
  fgets(input_str, sizeof input_str, stdin);

  cout<<"Number of Words : " << wordCounter(input_str) <<"\nNumber of Vowels : "<<vowelcounter(input_str)<<"\nNumber of Punctuation : "<<puncCount(input_str)<<"\n" <<findSubString(input_str,filter_word)<<endl;

	return 0;
}


//word counter

int wordCounter(char input_str[500]){
  int word_count=1;
  int i;
	for(i=0;input_str[i]!='\0';++i)
	{
		if(input_str[i]==' ')
			word_count++;
	}
  return word_count;
}



//vowel counter
int vowelcounter(char input_str[500] ){
  int vowels=0;
  int i;
  for (int i = 0; input_str[i]!='\0' ; i++)
      {
        if ((input_str[i] == 'a') || (input_str[i] == 'e') || (input_str[i] == 'i') || (input_str[i] == 'o') || (input_str[i] == 'u') ||
            (input_str[i] == 'A') || (input_str[i] == 'E') || (input_str[i] == 'I') || (input_str[i] == 'O') || (input_str[i] == 'U'))
            ++vowels;
      }
  return vowels;
  }

  //punct counter
int puncCount(char input_str[500]){
  int punc= 0 ;
  int i;
  for (int i = 0; input_str[i]!='\0' ; i++)
          {
            if ((input_str[i] == '.') || (input_str[i] == '?') || (input_str[i] == '!') || (input_str[i] == '(') || (input_str[i] == ')') ||
                (input_str[i] == '*') || (input_str[i] == '&') || (input_str[i] == ':') || (input_str[i] == ','))
                ++punc;
          }
  return punc;
  }


  //substring finder
  string findSubString(char input_str[500], char filter_word[20]){
    char *found = NULL;
    found = strstr (input_str,filter_word);
    if(found) {
        return "you is a part of this string\n";
        }
    else{
    return "you is not a part of this string\n";
    }
  }

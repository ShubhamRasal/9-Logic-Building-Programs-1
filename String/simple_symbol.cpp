
/*
Have the function SimpleSymbols(str) take the str parameter being passed and determine if it is an acceptable sequence by either returning the string true or false. The str parameter will be composed of + and = symbols with several letters between them (ie. ++d+===+c++==a) and for the string to be true each letter must be surrounded by a + symbol. So the string to the left would be false. The string will not be empty and will have at least one letter. 


////////////////////////////////////////////////////////////////*/
#include <stdio.h> 
#include <string.h>

void SimpleSymbols(char str[]) { 
  int i=0,flag=1;
  // code goes here  
  while((str[i])!='\0' && flag==1)
  {
      if((str[i]>='a')&&(str[i]<='z'))
      {
          if((str[i+1]!='+')||(str[i-1]!='+'))
          {
              flag=0;
              break;
          }
      }
      i++;
  }
  if(flag==0)
  {
     printf("false");
  }else
  {
      printf("true");
  }
            
}

int main(void) { 
  
  // keep this function call here
  SimpleSymbols(gets(stdin));
  return 0;
    
}
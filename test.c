#include <stdio.h>
#include <string.h>

int Palind(char *s, int i, int r){
     if(NULL == s || i < 0 || r < 0){
         return 0;
     }
     if(i >= r)
         {
             return 1;
         }
     if(s[i] == s[r]){
         return Palind(s, i + 1, r - 1);
     }
     return 0;
 }

int main()
{
    char s[] = {"abbba"} ;
    int in=0;
    int i=0,n=sizeof(s)/sizeof(s[0]);

    if(isPalindrome(s,i,strlen(s) - 1))
         printf("%s is palindrome",s);
    else
        printf("%s is not palindrome",s);

 }

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

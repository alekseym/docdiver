#include <stdio.h>
#include <string.h>

#include "doc.h"

int main()
{
  Doc t;
  char* str;
  
  if((str= t.get_name())==NULL)
  {
    printf("FAIL:  Test1  - Test Doc  getname \n");
    return 1;
  }
  else{
     if(strcmp(str,"empty doc"))
     {
        printf("FAIL: Test1  -  Test Doc  getname \n");
        return 1;
     }
  
     printf("OK: Test1 - Test Doc  getname");
     return 0;
  }
}
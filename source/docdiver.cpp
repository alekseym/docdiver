#include <stdio.h>
#include <stdlib.h>
#include "doclib.h"
#include "image.h"

int main(int argc,char** argv)
{
    Image img;
    DocLib  dlib;
    Doc** doc_rezult_array;
    int docs_count;
    
    img.load("test.png"); // TODO use argv
    
    dlib.find(&img,doc_rezult_array,&docs_count);
    
    if (!docs_count)
    {
      printf("No documents found\n");
      exit(0);
    }
    
    
    printf("System have founded the folowing docs:\n");
    for(int i=0;i<docs_count;i++)
    {
       doc_rezult_array[i]->get_name();
    }

    return 0;
}

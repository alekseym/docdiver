#ifndef doclib_h
#define doclib_h

#include "image.h"
#include "doc.h"

class DocLib
{
public:
  DocLib() {}
  virtual ~DocLib() {}
  
  int find(Image* image,Doc** doc_res_array,int *doc_res_array_count)
  {
    return 0;
  
  }
};

#endif
#ifndef IMAGE_H
#define IMAGE_H

class Image
{
public:
        Image();
        virtual ~Image();
        
        int load(char* filename);
};

#endif

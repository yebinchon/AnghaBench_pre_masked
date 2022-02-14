
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int* VAR_0 ;
 char const** VAR_1 ;
 unsigned int VAR_2 ;

const char *FUNC_0(unsigned VAR_3)
{
    unsigned VAR_4;
    for( VAR_4=0; VAR_4<VAR_2; ++VAR_4 )
        if( VAR_3==VAR_0[VAR_4] )
            break;

    return VAR_4<VAR_2 ? VAR_1[VAR_4] :
           "An error freetype2 neglected to specify";
}

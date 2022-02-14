
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 unsigned int FUNC_0 (unsigned int*,int const**,int) ;
 char* FUNC_1 (char*,unsigned int) ;

__attribute__((used)) static char* FUNC_2( unsigned *VAR_0, const uint8_t **VAR_1 )
{
    unsigned VAR_2 = FUNC_0( VAR_0, VAR_1, 1 );
    if (VAR_2 > *VAR_0)
        VAR_2 = *VAR_0;
    char *VAR_3 = FUNC_1( (char*)*VAR_1, VAR_2 );
    *VAR_1 += VAR_2;
    *VAR_0 -= VAR_2;
    return VAR_3;
}

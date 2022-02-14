
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;



__attribute__((used)) static unsigned FUNC_0( unsigned *VAR_0, const uint8_t **VAR_1 )
{
    unsigned int VAR_2;
    unsigned int VAR_3 = 0;

    if(*VAR_0 == 0)
        return 0;

    do
    {
        VAR_2 = **VAR_1;
        (*VAR_1)++;
        (*VAR_0)--;
        VAR_3 = ( VAR_3 << 7 ) + ( VAR_2&0x7f );

    } while( VAR_2&0x80 && *VAR_0 > 0 );

    if (VAR_3 > *VAR_0)
        VAR_3 = *VAR_0;

    return VAR_3;
}

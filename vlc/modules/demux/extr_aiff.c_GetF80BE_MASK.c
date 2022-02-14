
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 unsigned int FUNC_0 (int const*) ;

__attribute__((used)) static unsigned int FUNC_1( const uint8_t VAR_0[10] )
{
    unsigned int VAR_1 = FUNC_0( &VAR_0[2] );
    int VAR_2 = 30 - VAR_0[1];
    unsigned int VAR_3 = 0;

    while( VAR_2-- > 0 )
    {
        VAR_3 = VAR_1;
        VAR_1 >>= 1;
    }
    if( VAR_3&0x01 )
    {
        VAR_1++;
    }
    return VAR_1;
}

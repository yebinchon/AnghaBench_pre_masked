
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1( const uint8_t *VAR_0 )
{
    uint32_t VAR_1 = FUNC_0( VAR_0 );

    if( ((( VAR_1 >> 21 )&0x07FF) != 0x07FF )
        || (((VAR_1 >> 19)&0x03) == 1 )
        || (((VAR_1 >> 17)&0x03) == 0 )
        || (((VAR_1 >> 12)&0x0F) == 0x0F )
        || (((VAR_1 >> 10) & 0x03) == 0x03 )
        || ((VAR_1 & 0x03) == 0x02 ))
    {
        return 0;
    }
    return 1;
}

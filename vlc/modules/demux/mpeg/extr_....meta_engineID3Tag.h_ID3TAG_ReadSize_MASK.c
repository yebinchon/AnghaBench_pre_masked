
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (scalar_t__ const*) ;

__attribute__((used)) static uint32_t FUNC_1( const uint8_t *VAR_0, bool VAR_1 )
{
    if( !VAR_1 )
        return FUNC_0( VAR_0 );
    return ( (uint32_t)VAR_0[3] & 0x7F ) |
            (( (uint32_t)VAR_0[2] & 0x7F ) << 7) |
            (( (uint32_t)VAR_0[1] & 0x7F ) << 14) |
            (( (uint32_t)VAR_0[0] & 0x7F ) << 21);
}

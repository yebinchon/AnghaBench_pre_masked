
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static uint32_t FUNC_0( int VAR_0 )
{
    uint32_t VAR_1, VAR_2, VAR_3;

    VAR_1 = VAR_0&0x7f;
    VAR_2 = ( VAR_0 >> 7 )&0x7f;
    VAR_3 = ( VAR_0 >> 14 )&0x7f;

    return( 0x808000 | ( VAR_3 << 16 ) | ( VAR_2 << 8 ) | VAR_1 );
}

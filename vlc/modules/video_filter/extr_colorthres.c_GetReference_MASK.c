
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int8_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1( int *VAR_0, int *VAR_1, int *VAR_2,
                          uint32_t VAR_3 )
{
    int VAR_4 = ( VAR_3 & 0xFF0000 ) >> 16;
    int VAR_5 = ( VAR_3 & 0x00FF00 ) >> 8;
    int VAR_6 = ( VAR_3 & 0x0000FF );
    int VAR_7 = (int8_t)(( -38 * VAR_4 - 74 * VAR_5 + 112 * VAR_6 + 128) >> 8) + 128;
    int VAR_8 = (int8_t)(( 112 * VAR_4 - 94 * VAR_5 - 18 * VAR_6 + 128) >> 8) + 128;
    *VAR_0 = VAR_7 - 0x80;
    *VAR_1 = VAR_8 - 0x80;
    *VAR_2 = FUNC_0(*VAR_0 * *VAR_0 + *VAR_1 * *VAR_1);
}

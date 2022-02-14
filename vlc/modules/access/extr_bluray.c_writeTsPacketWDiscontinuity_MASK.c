
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int ts_header ;


 int FUNC_0 (int*,int const*,int) ;
 int FUNC_1 (int*,int,int) ;

__attribute__((used)) static void FUNC_2( uint8_t *VAR_0, uint16_t VAR_1,
                                         const uint8_t *VAR_2, uint8_t VAR_3 )
{
    uint8_t VAR_4[] = {
        0x00, 0x00, 0x00, 0x00,
        0x47,
        0x40 | ((VAR_1 & 0x1f00) >> 8), VAR_1 & 0xFF,
        VAR_3 ? 0x30 : 0x20,
        192 - (4 + 5) - VAR_3,
        0x82,
        0x0E,
         'V', 'L', 'C', '_',
         'D', 'I', 'S', 'C', 'O', 'N', 'T', 'I', 'N', 'U',
    };

    FUNC_0( VAR_0, VAR_4, sizeof(VAR_4) );
    FUNC_1( &VAR_0[sizeof(VAR_4)], 0xFF, 192 - sizeof(VAR_4) - VAR_3 );
    if( VAR_3 )
        FUNC_0( &VAR_0[192 - VAR_3], VAR_2, VAR_3 );
}

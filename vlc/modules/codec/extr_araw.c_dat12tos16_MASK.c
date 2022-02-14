
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_fast16_t ;
typedef int uint8_t ;
typedef int int_fast16_t ;
typedef int int16_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static int_fast16_t FUNC_1( uint_fast16_t VAR_0 )
{
    static const int16_t VAR_1[16] = {
       0x0000, 0x0000, 0x0100, 0x0200, 0x0300, 0x0400, 0x0500, 0x0600,
       0x0A00, 0x0B00, 0x0C00, 0x0D00, 0x0E00, 0x0F00, 0x1000, 0x1000,
    };
    static const uint8_t VAR_2[16] = {
        0, 0, 1, 2, 3, 4, 5, 6, 6, 5, 4, 3, 2, 1, 0, 0
    };

    FUNC_0(VAR_0 < 0x1000);

    int VAR_3 = VAR_0 >> 8;
    return ((int)VAR_0 - VAR_1[VAR_3]) << VAR_2[VAR_3];
}

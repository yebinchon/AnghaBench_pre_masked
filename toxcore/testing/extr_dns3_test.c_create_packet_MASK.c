
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 () ;

uint32_t FUNC_3(uint8_t *VAR_0, uint8_t *VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
    FUNC_1(VAR_0, 0, VAR_2 + 13 + 16);
    VAR_0[0] = VAR_3;
    VAR_0[1] = FUNC_2();
    VAR_0[5] = 1;
    VAR_0[11] = 1;
    VAR_0[12] = '.';
    FUNC_0(VAR_0 + 13, VAR_1, VAR_2);
    uint32_t VAR_4, VAR_5 = 0;

    for (VAR_4 = VAR_2 + 12; VAR_4 != 11; --VAR_4) {
        if (VAR_0[VAR_4] == '.') {
            VAR_0[VAR_4] = VAR_5;
            VAR_5 = 0;
        } else {
            ++VAR_5;
        }
    }

    VAR_0[VAR_2 + 13 + 2] = 16;
    VAR_0[VAR_2 + 13 + 4] = 1;
    VAR_0[VAR_2 + 13 + 7] = 0x29;
    VAR_0[VAR_2 + 13 + 8] = 16;
    VAR_0[VAR_2 + 13 + 12] = 0x80;
    return VAR_2 + 13 + 16;
}

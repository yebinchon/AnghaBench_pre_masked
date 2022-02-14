
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(void *VAR_1, uint32_t VAR_2, uint8_t VAR_3, const uint8_t *VAR_4, uint16_t VAR_5)
{
    if (VAR_1 != (void *)3)
        return 1;

    if (VAR_2 != 7)
        return 1;

    if (VAR_5 != 5)
        return 1;

    if (VAR_4[0] == 1 && VAR_4[1] == 2 && VAR_4[2] == 3 && VAR_4[3] == 4 && VAR_4[4] == 5) {
        VAR_0++;
        return 0;
    }

    return 1;
}

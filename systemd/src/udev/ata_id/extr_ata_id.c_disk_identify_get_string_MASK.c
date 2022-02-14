
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;



__attribute__((used)) static void FUNC_0(
                uint8_t VAR_0[512],
                unsigned VAR_1,
                char *VAR_2,
                size_t VAR_3) {

        unsigned VAR_4;
        unsigned VAR_5;

        while (VAR_3 > 0) {
                VAR_4 = VAR_0[VAR_1 * 2 + 1];
                VAR_5 = VAR_0[VAR_1 * 2];
                *VAR_2 = VAR_4;
                VAR_2++;
                *VAR_2 = VAR_5;
                VAR_2++;
                VAR_1++;
                VAR_3 -= 2;
        }
}

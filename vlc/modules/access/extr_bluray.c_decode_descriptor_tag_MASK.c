
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



__attribute__((used)) static int FUNC_0(const uint8_t *VAR_0)
{
    uint16_t VAR_1;
    uint8_t VAR_2 = 0;
    int VAR_3;

    VAR_1 = VAR_0[0] | (VAR_0[1] << 8);


    for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
        VAR_2 = (uint8_t)(VAR_2 + VAR_0[VAR_3]);
    }
    for (VAR_3 = 5; VAR_3 < 16; VAR_3++) {
        VAR_2 = (uint8_t)(VAR_2 + VAR_0[VAR_3]);
    }

    if (VAR_2 != VAR_0[4]) {
        return -1;
    }

    return VAR_1;
}

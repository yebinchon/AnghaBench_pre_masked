
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static uint8_t FUNC_0(int *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
    for (int VAR_3 = *VAR_0; VAR_3 + 1 < VAR_2; VAR_3++) {
        if (VAR_1[VAR_3 + 0] != 0xff || VAR_1[VAR_3 + 1] == 0x00)
            return 0xff;
        if (VAR_1[VAR_3 + 1] != 0xff) {
            *VAR_0 = VAR_3 + 2;
            return VAR_1[VAR_3 + 1];
        }
    }
    return 0xff;
}

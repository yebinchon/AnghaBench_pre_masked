
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static uint8_t FUNC_0(size_t VAR_0)
{
    size_t VAR_1 = 3;

    while (VAR_1 * VAR_1 <= VAR_0) {
        if (!(VAR_0 % VAR_1))
            return 0;

        VAR_1 += 2;
    }

    return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;



__attribute__((used)) static int FUNC_0(uint8_t *VAR_0, uint8_t *VAR_1)
{
    uint8_t *VAR_2 = VAR_1, *VAR_3 = VAR_0, VAR_4 = 0;
    *VAR_3 = 0;

    while (*VAR_2) {
        uint8_t VAR_5 = *VAR_2++;

        if ('A' <= VAR_5 && VAR_5 <= 'Z') {
            VAR_5 = VAR_5 - 'A';
        } else if ('a' <= VAR_5 && VAR_5 <= 'z') {
            VAR_5 = VAR_5 - 'a';
        } else if ('0' <= VAR_5 && VAR_5 <= '5') {
            VAR_5 = VAR_5 - '0' + 26;
        } else {
            return - 1;
        }

        *VAR_3 |= (VAR_5 << VAR_4);
        VAR_4 += 5;

        if (VAR_4 >= 8) {
            VAR_4 -= 8;
            ++VAR_3;
            *VAR_3 = (VAR_5 >> (5 - VAR_4));
        }
    }

    return VAR_3 - VAR_0;
}

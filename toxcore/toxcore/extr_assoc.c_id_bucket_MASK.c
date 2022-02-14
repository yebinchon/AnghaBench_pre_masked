
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int bucket_t ;



__attribute__((used)) static bucket_t FUNC_0(const uint8_t *VAR_0, uint8_t VAR_1)
{

    bucket_t VAR_2 = 0;

    uint8_t VAR_3 = 0;

    while (VAR_1 > 8) {
        VAR_2 = (VAR_2 << 8) | VAR_0[VAR_3++];
        VAR_1 -= 8;
    }

    return (VAR_2 << VAR_1) | (VAR_0[VAR_3] >> (8 - VAR_1));
}

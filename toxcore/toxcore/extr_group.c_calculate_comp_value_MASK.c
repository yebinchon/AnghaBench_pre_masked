
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;



__attribute__((used)) static uint64_t FUNC_0(const uint8_t *VAR_0, const uint8_t *VAR_1)
{
    uint64_t VAR_2 = 0, VAR_3 = 0;

    unsigned int VAR_4;

    for (VAR_4 = 0; VAR_4 < sizeof(uint64_t); ++VAR_4) {
        VAR_2 = (VAR_2 << 8) + (uint64_t)VAR_0[VAR_4];
        VAR_3 = (VAR_3 << 8) + (uint64_t)VAR_1[VAR_4];
    }

    return (VAR_2 - VAR_3);
}

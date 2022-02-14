
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int* VAR_0 ;

__attribute__((used)) static inline uint32_t
FUNC_0(uint32_t VAR_1, const char *VAR_2, size_t VAR_3)
{
    size_t VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
        VAR_1 = (VAR_1 >> 8) ^ VAR_0[(VAR_1 ^ *VAR_2++) & 0xff];
    }

    return VAR_1;
}

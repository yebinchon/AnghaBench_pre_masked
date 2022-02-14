
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



__attribute__((used)) static inline uint8_t *
FUNC_0(uint8_t *VAR_0, uint8_t *VAR_1, uint8_t VAR_2)
{
    while (VAR_0 >= VAR_1) {
        if (*VAR_0 == VAR_2) {
            return VAR_0;
        }
        VAR_0--;
    }

    return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;



__attribute__((used)) static inline unsigned FUNC_0(const void *VAR_0, unsigned VAR_1)
{
    const uint8_t *VAR_2 = (const uint8_t*) VAR_0;
    if (!VAR_1)
        return 0;

    if(1U + *VAR_2 > VAR_1)
        return 0;
    return *VAR_2 + 1;
}

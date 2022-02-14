
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
typedef size_t uint32_t ;



__attribute__((used)) static char *
FUNC_0(int VAR_0, uint64_t VAR_1, char *VAR_2)
{
    char VAR_3[] = "0123456789abcdef";
    uint32_t VAR_4 = (uint32_t) VAR_0;
    *VAR_2-- = 0;
    do {
        *VAR_2-- = VAR_3[VAR_1 % VAR_4];
    } while ((VAR_1 /= VAR_4) != 0);
    return VAR_2 + 1;
}

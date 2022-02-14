
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t FUNC_0(size_t VAR_0, size_t VAR_1, size_t VAR_2, size_t VAR_3)
{
    size_t VAR_4 = VAR_0 + (VAR_1 & ~1) * VAR_2;

    if (VAR_1 & 1) {
        VAR_4 += (VAR_0 & ~3) + 2;
    } else if ((VAR_3 & 1) == 0 || VAR_1 != (VAR_3 - 1)) {
        VAR_4 += (VAR_0 + 2) & ~3;
    }

    return VAR_4;
}

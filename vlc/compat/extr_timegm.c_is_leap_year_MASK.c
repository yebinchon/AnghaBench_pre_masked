
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(unsigned VAR_0)
{
    if (VAR_0 % 4)
        return 0;
    if (VAR_0 % 100)
        return 1;
    if (VAR_0 % 400)
        return 0;
    return 1;
}

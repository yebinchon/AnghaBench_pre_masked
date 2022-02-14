
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0)
{
    return (VAR_0 == '\t') || (VAR_0 == ' ') || (VAR_0 >= 0x21 && VAR_0 <= 0x27)
        || (VAR_0 >= 0x2A && VAR_0 <= 0x5B) || (VAR_0 >= 0x5D && VAR_0 <= 0x7E)
        || (VAR_0 >= 0x80);
}

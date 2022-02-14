
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(int VAR_0)
{
    return ((unsigned char)(VAR_0 - '0') < 10)
        || ((unsigned char)(VAR_0 - 'A') < 6)
        || ((unsigned char)(VAR_0 - 'a') < 6);
}

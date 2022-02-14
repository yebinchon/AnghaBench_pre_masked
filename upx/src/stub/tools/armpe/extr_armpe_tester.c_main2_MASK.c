
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static int FUNC_7(int VAR_0, char **VAR_1)
{
    if (VAR_0 != 2)
        return FUNC_4("usage: %s arm_pe_file\n", VAR_1[0]), 1;
    if (FUNC_3(VAR_1[1]))
        return 2;
    if (FUNC_5())
        return 3;
    FUNC_1('0');
    if (FUNC_2())
        return 4;
    FUNC_1('1');
    if (FUNC_6())
        return 5;
    FUNC_1('2');

    FUNC_0();
    FUNC_4("ok.\n");
    return 0;
}

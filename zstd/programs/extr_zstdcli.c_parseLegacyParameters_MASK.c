
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 (char const**,char*) ;
 unsigned int FUNC_2 (char const**) ;

__attribute__((used)) static unsigned FUNC_3(const char* VAR_0, unsigned* VAR_1)
{
    if (!FUNC_1(&VAR_0, "s=") && !FUNC_1(&VAR_0, "selectivity=")) { return 0; }
    *VAR_1 = FUNC_2(&VAR_0);
    if (VAR_0[0] != 0) return 0;
    FUNC_0(4, "legacy: selectivity=%u\n", *VAR_1);
    return 1;
}

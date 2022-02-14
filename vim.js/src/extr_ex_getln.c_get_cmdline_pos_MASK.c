
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdline_info {int cmdpos; } ;


 struct cmdline_info* FUNC_0 () ;

int
FUNC_1()
{
    struct cmdline_info *VAR_0 = FUNC_0();

    if (VAR_0 == ((void*)0))
 return -1;
    return VAR_0->cmdpos;
}

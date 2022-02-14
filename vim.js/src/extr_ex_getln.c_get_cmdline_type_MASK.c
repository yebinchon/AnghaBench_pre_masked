
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdline_info {int cmdfirstc; scalar_t__ input_fn; } ;


 int VAR_0 ;
 struct cmdline_info* FUNC_0 () ;

int
FUNC_1()
{
    struct cmdline_info *VAR_1 = FUNC_0();

    if (VAR_1 == ((void*)0))
 return VAR_0;
    if (VAR_1->cmdfirstc == VAR_0)
 return (VAR_1->input_fn) ? '@' : '-';
    return VAR_1->cmdfirstc;
}

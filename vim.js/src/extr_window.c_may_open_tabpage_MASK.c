
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tab; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

int
FUNC_1()
{
    int VAR_3 = (VAR_1.tab == 0) ? VAR_2 : VAR_1.tab;

    if (VAR_3 != 0)
    {
 VAR_1.tab = 0;
 VAR_2 = 0;
 return FUNC_0(VAR_3);
    }
    return VAR_0;
}

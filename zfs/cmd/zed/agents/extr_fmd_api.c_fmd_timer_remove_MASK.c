
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ft_tid; } ;
typedef TYPE_1__ fmd_timer_t ;
typedef int fmd_hdl_t ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;
 int FUNC_2 (int ) ;

void
FUNC_3(fmd_hdl_t *VAR_0, fmd_timer_t *VAR_1)
{
 FUNC_0(VAR_0, "removing timer (%p)", VAR_1->ft_tid);

 FUNC_2(VAR_1->ft_tid);

 FUNC_1(VAR_0, VAR_1, sizeof (fmd_timer_t));
}

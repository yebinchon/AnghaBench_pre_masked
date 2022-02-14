
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union sigval {TYPE_2__* sival_ptr; } ;
struct itimerspec {int dummy; } ;
struct TYPE_7__ {int ft_arg; int ft_tid; int * ft_hdl; } ;
typedef TYPE_2__ fmd_timer_t ;
struct TYPE_8__ {TYPE_1__* mod_info; } ;
typedef TYPE_3__ fmd_module_t ;
typedef int fmd_hdl_t ;
struct TYPE_9__ {int (* fmdo_timeout ) (int *,TYPE_2__*,int ) ;} ;
typedef TYPE_4__ fmd_hdl_ops_t ;
struct TYPE_6__ {TYPE_4__* fmdi_ops; } ;


 int FUNC_0 (struct itimerspec*,int) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int FUNC_3 (int ,int ,struct itimerspec*,int *) ;

__attribute__((used)) static void
FUNC_4(union sigval VAR_0)
{
 fmd_timer_t *VAR_1 = VAR_0.sival_ptr;
 fmd_hdl_t *VAR_2 = VAR_1->ft_hdl;
 fmd_module_t *VAR_3 = (fmd_module_t *)VAR_2;
 const fmd_hdl_ops_t *VAR_4 = VAR_3->mod_info->fmdi_ops;
 struct itimerspec VAR_5;

 FUNC_1(VAR_2, "timer fired (%p)", VAR_1->ft_tid);


 FUNC_0(&VAR_5, sizeof (struct itimerspec));
 FUNC_3(VAR_1->ft_tid, 0, &VAR_5, ((void*)0));


 if (VAR_4->fmdo_timeout != ((void*)0))
  VAR_4->fmdo_timeout(VAR_2, VAR_1, VAR_1->ft_arg);
}

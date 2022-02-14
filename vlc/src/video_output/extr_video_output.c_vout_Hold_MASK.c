
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p; } ;
typedef TYPE_1__ vout_thread_t ;
struct TYPE_6__ {int refs; } ;
typedef TYPE_2__ vout_thread_sys_t ;


 int FUNC_0 (int *,int,int ) ;
 int VAR_0 ;

vout_thread_t *FUNC_1(vout_thread_t *VAR_1)
{
    vout_thread_sys_t *VAR_2 = VAR_1->p;

    FUNC_0(&VAR_2->refs, 1, VAR_0);
    return VAR_1;
}

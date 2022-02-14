
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * tqent_taskq; scalar_t__ tqent_flags; int * tqent_arg; int * tqent_func; scalar_t__ tqent_id; int tqent_list; int tqent_timer; int tqent_waitq; int tqent_lock; } ;
typedef TYPE_1__ taskq_ent_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;

void
FUNC_4(taskq_ent_t *VAR_0)
{
 FUNC_2(&VAR_0->tqent_lock);
 FUNC_1(&VAR_0->tqent_waitq);
 FUNC_3(&VAR_0->tqent_timer, ((void*)0), 0);
 FUNC_0(&VAR_0->tqent_list);
 VAR_0->tqent_id = 0;
 VAR_0->tqent_func = ((void*)0);
 VAR_0->tqent_arg = ((void*)0);
 VAR_0->tqent_flags = 0;
 VAR_0->tqent_taskq = ((void*)0);
}

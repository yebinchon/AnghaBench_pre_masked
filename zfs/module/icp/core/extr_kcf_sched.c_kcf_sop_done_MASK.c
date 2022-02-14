
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sn_rv; int sn_lock; int sn_cv; int sn_state; } ;
typedef TYPE_1__ kcf_sreq_node_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(kcf_sreq_node_t *VAR_1, int VAR_2)
{
 FUNC_1(&VAR_1->sn_lock);
 VAR_1->sn_state = VAR_0;
 VAR_1->sn_rv = VAR_2;
 FUNC_0(&VAR_1->sn_cv);
 FUNC_2(&VAR_1->sn_lock);
}

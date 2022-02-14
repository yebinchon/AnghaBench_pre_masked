
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sn_cv; int sn_lock; } ;
typedef TYPE_1__ kcf_sreq_node_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, void *VAR_1)
{
 kcf_sreq_node_t *VAR_2 = (kcf_sreq_node_t *)VAR_0;

 FUNC_1(&VAR_2->sn_lock);
 FUNC_0(&VAR_2->sn_cv);
}

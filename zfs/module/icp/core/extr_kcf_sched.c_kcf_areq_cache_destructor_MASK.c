
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ an_refcnt; int an_turn_cv; int an_done; int an_lock; } ;
typedef TYPE_1__ kcf_areq_node_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, void *VAR_1)
{
 kcf_areq_node_t *VAR_2 = (kcf_areq_node_t *)VAR_0;

 FUNC_0(VAR_2->an_refcnt == 0);
 FUNC_2(&VAR_2->an_lock);
 FUNC_1(&VAR_2->an_done);
 FUNC_1(&VAR_2->an_turn_cv);
}

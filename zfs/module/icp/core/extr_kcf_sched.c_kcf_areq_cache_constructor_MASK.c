
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int an_turn_cv; int an_done; int an_lock; scalar_t__ an_refcnt; int an_type; } ;
typedef TYPE_1__ kcf_areq_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,int *) ;
 int FUNC_1 (int *,int *,int ,int *) ;

__attribute__((used)) static int
FUNC_2(void *VAR_3, void *VAR_4, int VAR_5)
{
 kcf_areq_node_t *VAR_6 = (kcf_areq_node_t *)VAR_3;

 VAR_6->an_type = VAR_0;
 VAR_6->an_refcnt = 0;
 FUNC_1(&VAR_6->an_lock, ((void*)0), VAR_2, ((void*)0));
 FUNC_0(&VAR_6->an_done, ((void*)0), VAR_1, ((void*)0));
 FUNC_0(&VAR_6->an_turn_cv, ((void*)0), VAR_1, ((void*)0));

 return (0);
}

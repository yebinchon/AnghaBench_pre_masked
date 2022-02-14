
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task {int node; } ;
struct background_worker {int queue_wait; int queue; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct background_worker *VAR_0, struct task *VAR_1)
{
    FUNC_2(&VAR_0->lock);
    FUNC_1(&VAR_1->node, &VAR_0->queue);
    FUNC_0(&VAR_0->queue_wait);
}

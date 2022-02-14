
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct background_worker {int lock; int queue_wait; } ;


 int FUNC_0 (struct background_worker*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct background_worker *VAR_0)
{
    FUNC_1(&VAR_0->queue_wait);
    FUNC_2(&VAR_0->lock);
    FUNC_0(VAR_0);
}

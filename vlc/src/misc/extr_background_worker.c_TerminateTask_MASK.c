
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task {int dummy; } ;
struct background_worker {scalar_t__ uncompleted; int lock; } ;
struct background_thread {int * task; struct background_worker* owner; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct background_worker*,struct task*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct background_thread *VAR_0, struct task *VAR_1)
{
    struct background_worker *VAR_2 = VAR_0->owner;
    FUNC_1(VAR_2, VAR_1);

    FUNC_2(&VAR_2->lock);
    VAR_0->task = ((void*)0);
    VAR_2->uncompleted--;
    FUNC_0(VAR_2->uncompleted >= 0);
    FUNC_3(&VAR_2->lock);
}

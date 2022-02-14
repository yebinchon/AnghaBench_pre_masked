
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct background_worker {int dummy; } ;
struct background_thread {int probe; int cancel; struct background_worker* owner; int * task; int probe_cancel_wait; } ;


 struct background_thread* FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct background_thread *
FUNC_2(struct background_worker *VAR_0)
{
    struct background_thread *VAR_1 = FUNC_0(sizeof(*VAR_1));
    if (!VAR_1)
        return ((void*)0);

    FUNC_1(&VAR_1->probe_cancel_wait);
    VAR_1->probe = 0;
    VAR_1->cancel = 0;
    VAR_1->task = ((void*)0);
    VAR_1->owner = VAR_0;
    return VAR_1;
}

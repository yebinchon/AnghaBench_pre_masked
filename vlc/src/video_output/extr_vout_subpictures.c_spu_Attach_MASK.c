
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* p; } ;
typedef TYPE_2__ spu_t ;
typedef int input_thread_t ;
struct TYPE_6__ {int lock; int textlock; scalar_t__ text; int * input; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(spu_t *VAR_0, input_thread_t *VAR_1)
{
    FUNC_3(&VAR_0->p->lock);
    if (VAR_0->p->input != VAR_1) {
        FUNC_2(VAR_0, ((void*)0));

        VAR_0->p->input = VAR_1;

        FUNC_3(&VAR_0->p->textlock);
        if (VAR_0->p->text)
            FUNC_0(VAR_0->p->text);
        VAR_0->p->text = FUNC_1(VAR_0);
        FUNC_4(&VAR_0->p->textlock);
    }
    FUNC_4(&VAR_0->p->lock);
}

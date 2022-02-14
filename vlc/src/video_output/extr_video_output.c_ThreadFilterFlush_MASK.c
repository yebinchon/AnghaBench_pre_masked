
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* p; } ;
typedef TYPE_4__ vout_thread_t ;
struct TYPE_7__ {int lock; int chain_interactive; int chain_static; } ;
struct TYPE_6__ {int * next; int * current; } ;
struct TYPE_8__ {TYPE_2__ filter; TYPE_1__ displayed; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(vout_thread_t *VAR_0, bool VAR_1)
{
    if (VAR_0->p->displayed.current)
    {
        FUNC_1( VAR_0->p->displayed.current );
        VAR_0->p->displayed.current = ((void*)0);
    }

    if (VAR_0->p->displayed.next)
    {
        FUNC_1( VAR_0->p->displayed.next );
        VAR_0->p->displayed.next = ((void*)0);
    }

    if (!VAR_1)
        FUNC_2(&VAR_0->p->filter.lock);
    FUNC_0(VAR_0->p->filter.chain_static);
    FUNC_0(VAR_0->p->filter.chain_interactive);
    if (!VAR_1)
        FUNC_3(&VAR_0->p->filter.lock);
}

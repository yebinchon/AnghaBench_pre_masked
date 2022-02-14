
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_head; } ;
typedef TYPE_1__ subsdelay_heap_t ;
struct TYPE_7__ {int * p_filter; struct TYPE_7__* p_next; } ;
typedef TYPE_2__ subsdelay_heap_entry_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1( subsdelay_heap_t *VAR_0, subsdelay_heap_entry_t *VAR_1 )
{
    subsdelay_heap_entry_t *VAR_2;

    VAR_2 = ((void*)0);

    for( subsdelay_heap_entry_t *VAR_3 = VAR_0->p_head; VAR_3 != ((void*)0);
         VAR_3 = VAR_3->p_next )
    {
        if( VAR_3 == VAR_1 )
        {
            break;
        }

        VAR_2 = VAR_3;
    }

    if( VAR_2 )
    {
        VAR_2->p_next = VAR_1->p_next;
    }
    else
    {
        VAR_0->p_head = VAR_1->p_next;
    }

    VAR_1->p_filter = ((void*)0);

    FUNC_0( VAR_0 );
}

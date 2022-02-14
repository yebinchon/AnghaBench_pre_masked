
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int lock; TYPE_4__* p_head; } ;
typedef TYPE_3__ subsdelay_heap_t ;
struct TYPE_11__ {int * p_filter; TYPE_2__* p_source; TYPE_1__* p_subpic; struct TYPE_11__* p_next; } ;
typedef TYPE_4__ subsdelay_heap_entry_t ;
struct TYPE_9__ {int i_stop; } ;
struct TYPE_8__ {int i_stop; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3( subsdelay_heap_t *VAR_0 )
{
    FUNC_0( VAR_0 );

    for( subsdelay_heap_entry_t *VAR_1 = VAR_0->p_head;
         VAR_1 != ((void*)0); VAR_1 = VAR_1->p_next )
    {
        VAR_1->p_subpic->i_stop = VAR_1->p_source->i_stop;

        VAR_1->p_filter = ((void*)0);
    }

    FUNC_1( VAR_0 );

    FUNC_2( &VAR_0->lock );
}

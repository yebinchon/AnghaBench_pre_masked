
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int b_update_stop; TYPE_2__* p_source; scalar_t__ i_new_stop; int b_update_ephemer; struct TYPE_12__* p_next; } ;
typedef TYPE_3__ subsdelay_heap_entry_t ;
struct TYPE_13__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_10__ {TYPE_3__* p_head; } ;
struct TYPE_14__ {TYPE_1__ heap; } ;
typedef TYPE_5__ filter_sys_t ;
struct TYPE_11__ {scalar_t__ i_start; } ;


 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_2( filter_t *VAR_0 )
{
    filter_sys_t *VAR_1 = VAR_0->p_sys;
    for( subsdelay_heap_entry_t *VAR_2 = VAR_1->heap.p_head;
         VAR_2 != ((void*)0); VAR_2 = VAR_2->p_next )
    {
        if( !VAR_2->b_update_ephemer )
        {
            VAR_2->i_new_stop = VAR_2->p_source->i_start + FUNC_1( VAR_0, VAR_2 );
            VAR_2->b_update_stop = 0;
        }
    }

    FUNC_0( VAR_0 );
}

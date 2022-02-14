
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int fmt_in; int fmt_out; int p_module; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_9__ {int obj; TYPE_3__* last; TYPE_3__* first; } ;
typedef TYPE_2__ filter_chain_t ;
struct TYPE_10__ {int mouse; int pending; struct TYPE_10__* prev; struct TYPE_10__* next; } ;
typedef TYPE_3__ chained_filter_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ,char*,void*) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7( filter_chain_t *VAR_0, filter_t *VAR_1 )
{
    chained_filter_t *VAR_2 = (chained_filter_t *)VAR_1;


    if( VAR_2->prev != ((void*)0) )
        VAR_2->prev->next = VAR_2->next;
    else
    {
        FUNC_1( VAR_2 == VAR_0->first );
        VAR_0->first = VAR_2->next;
    }

    if( VAR_2->next != ((void*)0) )
        VAR_2->next->prev = VAR_2->prev;
    else
    {
        FUNC_1( VAR_2 == VAR_0->last );
        VAR_0->last = VAR_2->prev;
    }

    FUNC_4( VAR_1, VAR_1->p_module );

    FUNC_5( VAR_0->obj, "Filter %p removed from chain", (void *)VAR_1 );
    FUNC_0( VAR_2->pending );

    FUNC_3( VAR_2->mouse );
    FUNC_2( &VAR_1->fmt_out );
    FUNC_2( &VAR_1->fmt_in );

    FUNC_6(VAR_1);

}

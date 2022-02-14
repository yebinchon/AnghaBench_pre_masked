
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* p_next; } ;
typedef TYPE_1__ picture_t ;
struct TYPE_10__ {TYPE_3__* last; int first; } ;
typedef TYPE_2__ filter_chain_t ;
struct TYPE_11__ {int next; TYPE_1__* pending; struct TYPE_11__* prev; } ;
typedef TYPE_3__ chained_filter_t ;


 TYPE_1__* FUNC_0 (int ,TYPE_1__*) ;

picture_t *FUNC_1( filter_chain_t *VAR_0, picture_t *VAR_1 )
{
    if( VAR_1 )
    {
        VAR_1 = FUNC_0( VAR_0->first, VAR_1 );
        if( VAR_1 )
            return VAR_1;
    }
    for( chained_filter_t *VAR_2 = VAR_0->last; VAR_2 != ((void*)0); VAR_2 = VAR_2->prev )
    {
        VAR_1 = VAR_2->pending;
        if( !VAR_1 )
            continue;
        VAR_2->pending = VAR_1->p_next;
        VAR_1->p_next = ((void*)0);

        VAR_1 = FUNC_0( VAR_2->next, VAR_1 );
        if( VAR_1 )
            return VAR_1;
    }
    return ((void*)0);
}

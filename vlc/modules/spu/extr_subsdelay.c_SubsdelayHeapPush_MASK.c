
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ i_count; TYPE_3__* p_head; } ;
typedef TYPE_2__ subsdelay_heap_t ;
struct TYPE_13__ {int b_update_ephemer; struct TYPE_13__* p_next; TYPE_1__* p_source; } ;
typedef TYPE_3__ subsdelay_heap_entry_t ;
struct TYPE_14__ {scalar_t__ i_start; } ;
typedef TYPE_4__ subpicture_t ;
typedef int filter_t ;
struct TYPE_11__ {scalar_t__ i_start; scalar_t__ i_stop; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_4__*,int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static subsdelay_heap_entry_t *FUNC_2( subsdelay_heap_t *VAR_1, subpicture_t *VAR_2, filter_t *VAR_3 )
{
    subsdelay_heap_entry_t *VAR_4, *VAR_5;

    if( VAR_1->i_count >= VAR_0 )
    {
        return ((void*)0);
    }

    VAR_5 = FUNC_0( VAR_2, VAR_3 );

    if( !VAR_5 )
    {
        return ((void*)0);
    }


    VAR_4 = ((void*)0);

    for( subsdelay_heap_entry_t *VAR_6 = VAR_1->p_head; VAR_6 != ((void*)0);
         VAR_6 = VAR_6->p_next )
    {
        if( VAR_6->p_source->i_start > VAR_2->i_start )
        {

            break;
        }

        VAR_4 = VAR_6;
    }

    if( VAR_4 )
    {
        VAR_5->p_next = VAR_4->p_next;
        VAR_4->p_next = VAR_5;


        if( VAR_4->b_update_ephemer )
        {


            VAR_4->p_source->i_stop = VAR_5->p_source->i_start;
            VAR_4->b_update_ephemer = 0;
        }
    }
    else
    {
        VAR_5->p_next = VAR_1->p_head;
        VAR_1->p_head = VAR_5;
    }




    FUNC_1( VAR_1 );

    return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int subsdelay_heap_t ;
struct TYPE_5__ {int b_check_empty; TYPE_1__* p_source; struct TYPE_5__* p_next; } ;
typedef TYPE_2__ subsdelay_heap_entry_t ;
struct TYPE_4__ {scalar_t__ i_start; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1( subsdelay_heap_t *VAR_0, subsdelay_heap_entry_t *VAR_1, vlc_tick_t VAR_2 )
{
    int VAR_3;

    FUNC_0( VAR_0 );

    VAR_3 = 0;

    for( subsdelay_heap_entry_t *VAR_4 = VAR_1->p_next; VAR_4 != ((void*)0);
         VAR_4 = VAR_4->p_next )
    {
        if( VAR_4->p_source->i_start > VAR_2 )
        {
            break;
        }

        if( !VAR_4->b_check_empty )
        {
            VAR_3++;
        }
    }

    return VAR_3;
}

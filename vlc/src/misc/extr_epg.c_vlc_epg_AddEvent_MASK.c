
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int i_event; TYPE_2__** pp_event; TYPE_2__* p_current; } ;
typedef TYPE_1__ vlc_epg_t ;
struct TYPE_11__ {scalar_t__ i_start; } ;
typedef TYPE_2__ vlc_epg_event_t ;
typedef int ssize_t ;


 int FUNC_0 (int,TYPE_2__**,TYPE_2__*) ;
 int FUNC_1 (int,TYPE_2__**,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;

bool FUNC_3( vlc_epg_t *VAR_0, vlc_epg_event_t *VAR_1 )
{
    ssize_t VAR_2 = -1;


    if( VAR_0->i_event )
    {
        if( VAR_0->pp_event[0]->i_start > VAR_1->i_start )
        {
            VAR_2 = 0;
        }
        else if ( VAR_0->pp_event[VAR_0->i_event - 1]->i_start >= VAR_1->i_start )
        {

            size_t VAR_3 = 0;
            size_t VAR_4 = VAR_0->i_event - 1;

            while( VAR_3 < VAR_4 )
            {
                size_t VAR_5 = ( VAR_3 + VAR_4 ) / 2;
                vlc_epg_event_t *VAR_6 = VAR_0->pp_event[VAR_5];

                if( VAR_6->i_start < VAR_1->i_start )
                {
                    VAR_3 = VAR_5 + 1;
                }
                else if ( VAR_6->i_start >= VAR_1->i_start )
                {
                    VAR_4 = VAR_5;
                }
            }
            VAR_2 = VAR_3;
        }
    }

    if( VAR_2 != -1 )
    {

        if( VAR_0->pp_event[VAR_2]->i_start == VAR_1->i_start )
        {
            FUNC_2( VAR_0->pp_event[VAR_2] );
            if( VAR_0->p_current == VAR_0->pp_event[VAR_2] )
                VAR_0->p_current = VAR_1;
            VAR_0->pp_event[VAR_2] = VAR_1;
            return 1;
        }
        else
        {
            FUNC_1( VAR_0->i_event, VAR_0->pp_event, VAR_1, VAR_2 );
        }
    }
    else
        FUNC_0( VAR_0->i_event, VAR_0->pp_event, VAR_1 );

    return 1;
}

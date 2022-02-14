
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t i_event; scalar_t__* pp_event; scalar_t__ p_current; int b_present; int * psz_name; int i_source_id; int i_id; } ;
typedef TYPE_1__ vlc_epg_t ;
typedef int vlc_epg_event_t ;


 int FUNC_0 (size_t,scalar_t__*,int *) ;
 int * FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 int * FUNC_3 (scalar_t__) ;

vlc_epg_t * FUNC_4( const vlc_epg_t *VAR_0 )
{
    vlc_epg_t *VAR_1 = FUNC_2( VAR_0->i_id, VAR_0->i_source_id );
    if( VAR_1 )
    {
        VAR_1->psz_name = ( VAR_0->psz_name ) ? FUNC_1( VAR_0->psz_name ) : ((void*)0);
        VAR_1->b_present = VAR_0->b_present;
        for( size_t VAR_2=0; VAR_2<VAR_0->i_event; VAR_2++ )
        {
            vlc_epg_event_t *VAR_3 = FUNC_3( VAR_0->pp_event[VAR_2] );
            if( VAR_3 )
            {
                if( VAR_0->p_current == VAR_0->pp_event[VAR_2] )
                    VAR_1->p_current = VAR_3;
                FUNC_0( VAR_1->i_event, VAR_1->pp_event, VAR_3 );
            }
        }
    }
    return VAR_1;
}

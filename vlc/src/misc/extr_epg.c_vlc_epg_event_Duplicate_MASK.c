
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int i_description_items; int i_rating; TYPE_5__* description_items; void* psz_short_description; void* psz_name; void* psz_description; int i_duration; int i_start; int i_id; } ;
typedef TYPE_1__ vlc_epg_event_t ;
struct TYPE_8__ {void* psz_value; void* psz_key; } ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_5__* FUNC_2 (int) ;
 void* FUNC_3 (void*) ;
 TYPE_1__* FUNC_4 (int ,int ,int ) ;

vlc_epg_event_t * FUNC_5( const vlc_epg_event_t *VAR_0 )
{
    vlc_epg_event_t *VAR_1 = FUNC_4( VAR_0->i_id, VAR_0->i_start,
                                                VAR_0->i_duration );
    if( FUNC_1(VAR_1) )
    {
        if( VAR_0->psz_description )
            VAR_1->psz_description = FUNC_3( VAR_0->psz_description );
        if( VAR_0->psz_name )
            VAR_1->psz_name = FUNC_3( VAR_0->psz_name );
        if( VAR_0->psz_short_description )
            VAR_1->psz_short_description = FUNC_3( VAR_0->psz_short_description );
        if( VAR_0->i_description_items )
        {
            VAR_1->description_items = FUNC_2( sizeof(*VAR_1->description_items) *
                                               VAR_0->i_description_items );
            if( VAR_1->description_items )
            {
                for( int VAR_2=0; VAR_2<VAR_0->i_description_items; VAR_2++ )
                {
                    VAR_1->description_items[VAR_2].psz_key =
                            FUNC_3( VAR_0->description_items[VAR_2].psz_key );
                    VAR_1->description_items[VAR_2].psz_value =
                            FUNC_3( VAR_0->description_items[VAR_2].psz_value );
                    if(!VAR_1->description_items[VAR_2].psz_value ||
                       !VAR_1->description_items[VAR_2].psz_key)
                    {
                        FUNC_0(VAR_1->description_items[VAR_2].psz_key);
                        FUNC_0(VAR_1->description_items[VAR_2].psz_value);
                        break;
                    }
                    VAR_1->i_description_items++;
                }
            }
        }
        VAR_1->i_rating = VAR_0->i_rating;
    }
    return VAR_1;
}

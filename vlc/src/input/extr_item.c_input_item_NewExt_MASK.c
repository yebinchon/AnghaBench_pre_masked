
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int vlc_event_manager_t ;
struct TYPE_8__ {int i_type; int b_net; int b_error_when_reading; int pp_slaves; int i_slaves; int pp_epg; int i_epg; int * p_meta; int * p_stats; int es; int i_es; int pp_categories; int i_categories; int i_duration; int * opaques; int * optflagv; scalar_t__ optflagc; int ppsz_options; int i_options; int * psz_uri; int * psz_name; int lock; int event_manager; } ;
typedef TYPE_1__ input_item_t ;
struct TYPE_9__ {TYPE_1__ item; int rc; } ;
typedef TYPE_2__ input_item_owner_t ;
typedef enum input_item_type_e { ____Placeholder_input_item_type_e } input_item_type_e ;
typedef enum input_item_net_type { ____Placeholder_input_item_net_type } input_item_net_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *) ;

input_item_t *
FUNC_8( const char *VAR_3, const char *VAR_4,
                   vlc_tick_t VAR_5, enum input_item_type_e VAR_6, enum input_item_net_type VAR_7 )
{
    input_item_owner_t *VAR_8 = FUNC_1( 1, sizeof( *VAR_8 ) );
    if( FUNC_4(VAR_8 == ((void*)0)) )
        return ((void*)0);

    FUNC_5( &VAR_8->rc );

    input_item_t *VAR_9 = &VAR_8->item;
    vlc_event_manager_t * VAR_10 = &VAR_9->event_manager;

    FUNC_7( &VAR_9->lock );

    VAR_9->psz_name = ((void*)0);
    if( VAR_4 )
        FUNC_2( VAR_9, VAR_4 );

    VAR_9->psz_uri = ((void*)0);
    if( VAR_3 )
        FUNC_3( VAR_9, VAR_3 );
    else
    {
        VAR_9->i_type = VAR_2;
        VAR_9->b_net = 0;
    }

    FUNC_0( VAR_9->i_options, VAR_9->ppsz_options );
    VAR_9->optflagc = 0;
    VAR_9->optflagv = ((void*)0);
    VAR_9->opaques = ((void*)0);

    VAR_9->i_duration = VAR_5;
    FUNC_0( VAR_9->i_categories, VAR_9->pp_categories );
    FUNC_0( VAR_9->i_es, VAR_9->es );
    VAR_9->p_stats = ((void*)0);
    VAR_9->p_meta = ((void*)0);
    FUNC_0( VAR_9->i_epg, VAR_9->pp_epg );
    FUNC_0( VAR_9->i_slaves, VAR_9->pp_slaves );

    FUNC_6( VAR_10, VAR_9 );

    if( VAR_6 != VAR_2 )
        VAR_9->i_type = VAR_6;
    VAR_9->b_error_when_reading = 0;

    if( VAR_7 != VAR_1 )
        VAR_9->b_net = VAR_7 == VAR_0;
    return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int i_options; int i_es; int i_epg; int i_categories; int i_slaves; int lock; TYPE_2__** pp_slaves; TYPE_2__** pp_categories; TYPE_2__** pp_epg; TYPE_2__** es; TYPE_2__* optflagv; TYPE_2__** ppsz_options; TYPE_2__* opaques; int * p_meta; TYPE_2__* p_stats; TYPE_2__* psz_uri; TYPE_2__* psz_name; int event_manager; } ;
typedef TYPE_1__ input_item_t ;
struct TYPE_14__ {struct TYPE_14__* next; int rc; } ;
typedef TYPE_2__ input_item_owner_t ;
typedef TYPE_2__ input_item_opaque_t ;


 int FUNC_0 (int,TYPE_2__**) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11( input_item_t *VAR_0 )
{
    input_item_owner_t *VAR_1 = FUNC_5(VAR_0);

    if( !FUNC_6( &VAR_1->rc ) )
        return;

    FUNC_8( &VAR_0->event_manager );

    FUNC_2( VAR_0->psz_name );
    FUNC_2( VAR_0->psz_uri );
    FUNC_2( VAR_0->p_stats );

    if( VAR_0->p_meta != ((void*)0) )
        FUNC_9( VAR_0->p_meta );

    for( input_item_opaque_t *VAR_2 = VAR_0->opaques, *VAR_3; VAR_2 != ((void*)0); VAR_2 = VAR_3 )
    {
        VAR_3 = VAR_2->next;
        FUNC_2( VAR_2 );
    }

    for( int VAR_4 = 0; VAR_4 < VAR_0->i_options; VAR_4++ )
        FUNC_2( VAR_0->ppsz_options[VAR_4] );
    FUNC_0( VAR_0->i_options, VAR_0->ppsz_options );
    FUNC_2( VAR_0->optflagv );

    for( int VAR_5 = 0; VAR_5 < VAR_0->i_es; VAR_5++ )
    {
        FUNC_1( VAR_0->es[VAR_5] );
        FUNC_2( VAR_0->es[VAR_5] );
    }
    FUNC_0( VAR_0->i_es, VAR_0->es );

    for( int VAR_6 = 0; VAR_6 < VAR_0->i_epg; VAR_6++ )
        FUNC_7( VAR_0->pp_epg[VAR_6] );
    FUNC_0( VAR_0->i_epg, VAR_0->pp_epg );

    for( int VAR_7 = 0; VAR_7 < VAR_0->i_categories; VAR_7++ )
        FUNC_3( VAR_0->pp_categories[VAR_7] );
    FUNC_0( VAR_0->i_categories, VAR_0->pp_categories );

    for( int VAR_8 = 0; VAR_8 < VAR_0->i_slaves; VAR_8++ )
        FUNC_4( VAR_0->pp_slaves[VAR_8] );
    FUNC_0( VAR_0->i_slaves, VAR_0->pp_slaves );

    FUNC_10( &VAR_0->lock );
    FUNC_2( VAR_1 );
}

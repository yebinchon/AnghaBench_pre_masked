
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int input_thread_t ;
struct TYPE_4__ {int i_slave; scalar_t__ i_attachment; int * p_resource; int p_sout; TYPE_2__* p_item; int * attachment_demux; int * attachment; int * stats; scalar_t__ p_es_out_display; scalar_t__ p_es_out; scalar_t__ i_seekpoint_offset; scalar_t__ i_title_offset; int master; int * slave; } ;
typedef TYPE_1__ input_thread_private_t ;
struct TYPE_5__ {int lock; int p_stats; } ;
typedef TYPE_2__ input_item_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int *) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 TYPE_1__* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14( input_thread_t * VAR_4 )
{
    input_thread_private_t *VAR_5 = FUNC_6(VAR_4);


    FUNC_5( VAR_4, VAR_0, VAR_3 );


    FUNC_3( VAR_5->p_es_out, VAR_2 );


    for( int VAR_6 = 0; VAR_6 < VAR_5->i_slave; VAR_6++ )
        FUNC_0( VAR_5->slave[VAR_6] );
    FUNC_4( VAR_5->slave );


    FUNC_0( VAR_5->master );
    VAR_5->i_title_offset = 0;
    VAR_5->i_seekpoint_offset = 0;


    if( VAR_5->p_es_out )
        FUNC_2( VAR_5->p_es_out );
    FUNC_3( VAR_5->p_es_out_display, VAR_1 );

    if( VAR_5->stats != ((void*)0) )
    {
        input_item_t *VAR_7 = VAR_5->p_item;

        FUNC_12( &VAR_7->lock );
        FUNC_10( VAR_5->stats, VAR_7->p_stats );
        FUNC_13( &VAR_7->lock );
    }

    FUNC_12( &VAR_5->p_item->lock );
    if( VAR_5->i_attachment > 0 )
    {
        for( int VAR_8 = 0; VAR_8 < VAR_5->i_attachment; VAR_8++ )
            FUNC_11( VAR_5->attachment[VAR_8] );
        FUNC_1( VAR_5->i_attachment, VAR_5->attachment );
        FUNC_4( VAR_5->attachment_demux);
        VAR_5->attachment_demux = ((void*)0);
    }

    FUNC_13( &FUNC_6(VAR_4)->p_item->lock );


    FUNC_8( FUNC_6(VAR_4)->p_resource,
                                 FUNC_6(VAR_4)->p_sout, ((void*)0) );
    FUNC_9( FUNC_6(VAR_4)->p_resource, ((void*)0) );
    if( FUNC_6(VAR_4)->p_resource )
    {
        FUNC_7( FUNC_6(VAR_4)->p_resource );
        FUNC_6(VAR_4)->p_resource = ((void*)0);
    }
}

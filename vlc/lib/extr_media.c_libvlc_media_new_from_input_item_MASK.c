
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int i_refcount; int * p_input_item; int event_manager; int * p_subitems; int state; int subitems_lock; int parsed_lock; int parsed_cond; int * p_libvlc_instance; } ;
typedef TYPE_1__ libvlc_media_t ;
typedef int libvlc_instance_t ;
typedef int input_item_t ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

libvlc_media_t * FUNC_8(
                                   libvlc_instance_t *VAR_1,
                                   input_item_t *VAR_2 )
{
    libvlc_media_t * VAR_3;

    if (!VAR_2)
    {
        FUNC_4( "No input item given" );
        return ((void*)0);
    }

    VAR_3 = FUNC_0( 1, sizeof(libvlc_media_t) );
    if( !VAR_3 )
    {
        FUNC_4( "Not enough memory" );
        return ((void*)0);
    }

    VAR_3->p_libvlc_instance = VAR_1;
    VAR_3->p_input_item = VAR_2;
    VAR_3->i_refcount = 1;

    FUNC_6(&VAR_3->parsed_cond);
    FUNC_7(&VAR_3->parsed_lock);
    FUNC_7(&VAR_3->subitems_lock);

    VAR_3->state = VAR_0;



    VAR_3->p_subitems = ((void*)0);

    FUNC_3( &VAR_3->event_manager, VAR_3 );

    FUNC_1( VAR_3->p_input_item );

    FUNC_2( VAR_3 );

    FUNC_5( VAR_1 );
    return VAR_3;
}

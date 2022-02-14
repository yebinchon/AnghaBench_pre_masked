
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int libvlc_media_t ;
struct TYPE_4__ {scalar_t__ i_refcount; int p_libvlc_instance; int items; int refcount_lock; int object_lock; int * p_md; int event_manager; } ;
typedef TYPE_1__ libvlc_media_list_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;
 int * FUNC_6 (int *,size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10( libvlc_media_list_t * VAR_0 )
{
    FUNC_8( &VAR_0->refcount_lock );
    VAR_0->i_refcount--;
    if( VAR_0->i_refcount > 0 )
    {
        FUNC_9( &VAR_0->refcount_lock );
        return;
    }
    FUNC_9( &VAR_0->refcount_lock );



    FUNC_1( &VAR_0->event_manager );
    FUNC_2( VAR_0->p_md );

    for( size_t VAR_1 = 0; VAR_1 < FUNC_5( &VAR_0->items ); VAR_1++ )
    {
        libvlc_media_t* VAR_2 = FUNC_6( &VAR_0->items, VAR_1 );
        FUNC_2( VAR_2 );
    }

    FUNC_7( &VAR_0->object_lock );
    FUNC_7( &VAR_0->refcount_lock );
    FUNC_4( &VAR_0->items );

    FUNC_3( VAR_0->p_libvlc_instance );
    FUNC_0( VAR_0 );
}

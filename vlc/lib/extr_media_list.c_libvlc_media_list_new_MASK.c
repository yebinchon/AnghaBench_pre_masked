
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ i_count; } ;
struct TYPE_6__ {int b_read_only; int i_refcount; int * p_internal_md; int * p_md; TYPE_2__ items; int refcount_lock; int object_lock; int event_manager; int * p_libvlc_instance; } ;
typedef TYPE_1__ libvlc_media_list_t ;
typedef int libvlc_instance_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;

libvlc_media_list_t *
FUNC_8( libvlc_instance_t * VAR_0 )
{
    libvlc_media_list_t * VAR_1;

    VAR_1 = FUNC_4(sizeof(libvlc_media_list_t));
    if( FUNC_5(VAR_1 == ((void*)0)) )
    {
        FUNC_2( "Not enough memory" );
        return ((void*)0);
    }

    VAR_1->p_libvlc_instance = VAR_0;
    FUNC_1( &VAR_1->event_manager, VAR_1 );
    VAR_1->b_read_only = 0;

    FUNC_7( &VAR_1->object_lock );
    FUNC_7( &VAR_1->refcount_lock );

    FUNC_6( &VAR_1->items );
    FUNC_0( VAR_1->items.i_count == 0 );
    VAR_1->i_refcount = 1;
    VAR_1->p_md = ((void*)0);
    VAR_1->p_internal_md = ((void*)0);

    FUNC_3( VAR_0 );
    return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ i_refcount; TYPE_6__* p_libvlc_instance; int event_manager; int subitems_lock; int parsed_lock; int parsed_cond; int p_input_item; scalar_t__ p_subitems; } ;
typedef TYPE_3__ libvlc_media_t ;
struct TYPE_11__ {TYPE_3__* md; } ;
struct TYPE_12__ {TYPE_1__ media_freed; } ;
struct TYPE_14__ {TYPE_2__ u; int type; } ;
typedef TYPE_4__ libvlc_event_t ;
struct TYPE_15__ {int p_libvlc_int; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_4__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10( libvlc_media_t *VAR_1 )
{
    if (!VAR_1)
        return;

    VAR_1->i_refcount--;

    if( VAR_1->i_refcount > 0 )
        return;

    FUNC_7( VAR_1 );


    FUNC_2( VAR_1->p_libvlc_instance->p_libvlc_int, VAR_1 );

    if( VAR_1->p_subitems )
        FUNC_5( VAR_1->p_subitems );

    FUNC_1( VAR_1->p_input_item );

    FUNC_8( &VAR_1->parsed_cond );
    FUNC_9( &VAR_1->parsed_lock );
    FUNC_9( &VAR_1->subitems_lock );


    libvlc_event_t VAR_2;
    VAR_2.type = VAR_0;
    VAR_2.u.media_freed.md = VAR_1;


    FUNC_4( &VAR_1->event_manager, &VAR_2 );

    FUNC_3( &VAR_1->event_manager );
    FUNC_6( VAR_1->p_libvlc_instance );
    FUNC_0( VAR_1 );
}

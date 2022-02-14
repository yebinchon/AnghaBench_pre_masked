
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int event_manager; int p_libvlc_instance; } ;
typedef TYPE_3__ libvlc_media_t ;
typedef int libvlc_media_list_t ;
struct TYPE_11__ {TYPE_3__* new_child; } ;
struct TYPE_12__ {TYPE_1__ media_subitem_added; } ;
struct TYPE_14__ {TYPE_2__ u; int type; } ;
typedef TYPE_4__ libvlc_event_t ;
typedef int input_item_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int ,int *) ;
 int * FUNC_5 (TYPE_3__*,int) ;

__attribute__((used)) static libvlc_media_t *FUNC_6( libvlc_media_t *VAR_1,
                                               input_item_t *VAR_2 )
{
    libvlc_media_t * VAR_3;
    libvlc_media_list_t *VAR_4;
    libvlc_event_t VAR_5;

    VAR_3 = FUNC_4( VAR_1->p_libvlc_instance,
                                                   VAR_2 );


    VAR_4 = FUNC_5( VAR_1, 1 );
    if( VAR_4 != ((void*)0) )
    {
        FUNC_2( VAR_4 );
        FUNC_1( VAR_4, VAR_3 );
        FUNC_3( VAR_4 );
    }


    VAR_5.type = VAR_0;
    VAR_5.u.media_subitem_added.new_child = VAR_3;


    FUNC_0( &VAR_1->event_manager, &VAR_5 );
    return VAR_3;
}

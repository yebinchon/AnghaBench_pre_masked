
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {size_t meta_type; } ;
struct TYPE_13__ {TYPE_3__ input_item_meta_changed; } ;
struct TYPE_14__ {TYPE_4__ u; } ;
typedef TYPE_5__ vlc_event_t ;
struct TYPE_15__ {int event_manager; } ;
typedef TYPE_6__ libvlc_media_t ;
struct TYPE_10__ {int meta_type; } ;
struct TYPE_11__ {TYPE_1__ media_meta_changed; } ;
struct TYPE_16__ {TYPE_2__ u; int type; } ;
typedef TYPE_7__ libvlc_event_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_7__*) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_1( const vlc_event_t *VAR_2,
                                     void * VAR_3 )
{
    libvlc_media_t * VAR_4 = VAR_3;
    libvlc_event_t VAR_5;


    VAR_5.type = VAR_0;
    VAR_5.u.media_meta_changed.meta_type =
        VAR_1[VAR_2->u.input_item_meta_changed.meta_type];


    FUNC_0( &VAR_4->event_manager, &VAR_5 );
}

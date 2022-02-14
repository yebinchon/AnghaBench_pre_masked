
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_renderer_item_t ;
struct TYPE_9__ {TYPE_5__* sys; } ;
struct TYPE_12__ {TYPE_1__ owner; } ;
typedef TYPE_4__ vlc_renderer_discovery_t ;
typedef int libvlc_renderer_item_t ;
struct TYPE_13__ {int event_manager; int pp_items; int i_items; } ;
typedef TYPE_5__ libvlc_renderer_discoverer_t ;
struct TYPE_10__ {int * item; } ;
struct TYPE_11__ {TYPE_2__ renderer_discoverer_item_added; } ;
struct TYPE_14__ {TYPE_3__ u; int type; } ;
typedef TYPE_6__ libvlc_event_t ;


 int FUNC_0 (int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_6__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3( vlc_renderer_discovery_t *VAR_1,
                                           vlc_renderer_item_t *VAR_2 )
{
    libvlc_renderer_discoverer_t *VAR_3 = VAR_1->owner.sys;

    FUNC_2( VAR_2 );

    FUNC_0( VAR_3->i_items, VAR_3->pp_items, VAR_2 );

    libvlc_event_t VAR_4 = {
        .type = VAR_0,
        .u.renderer_discoverer_item_added.item =
            (libvlc_renderer_item_t*) VAR_2,
    };
    FUNC_1( &VAR_3->event_manager, &VAR_4 );
}

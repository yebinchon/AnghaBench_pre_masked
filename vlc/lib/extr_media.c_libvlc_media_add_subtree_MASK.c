
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int event_manager; } ;
typedef TYPE_3__ libvlc_media_t ;
struct TYPE_8__ {TYPE_3__* item; } ;
struct TYPE_9__ {TYPE_1__ media_subitemtree_added; } ;
struct TYPE_11__ {TYPE_2__ u; int type; } ;
typedef TYPE_4__ libvlc_event_t ;
typedef int input_item_node_t ;


 int FUNC_0 (TYPE_3__*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_4__*) ;

void FUNC_2(libvlc_media_t *VAR_1, input_item_node_t *VAR_2)
{




    FUNC_0( VAR_1, VAR_2 );


    libvlc_event_t VAR_3;
    VAR_3.type = VAR_0;
    VAR_3.u.media_subitemtree_added.item = VAR_1;


    FUNC_1( &VAR_1->event_manager, &VAR_3 );
}

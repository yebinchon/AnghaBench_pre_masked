
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int libvlc_media_t ;
struct TYPE_11__ {int event_manager; } ;
typedef TYPE_4__ libvlc_media_list_t ;
struct TYPE_8__ {int index; int * item; } ;
struct TYPE_9__ {int index; int * item; } ;
struct TYPE_10__ {TYPE_1__ media_list_will_delete_item; TYPE_2__ media_list_item_deleted; } ;
struct TYPE_12__ {TYPE_3__ u; int type; } ;
typedef TYPE_5__ libvlc_event_t ;
typedef scalar_t__ EventPlaceInTime ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_1( libvlc_media_list_t * VAR_3,
                      libvlc_media_t * VAR_4,
                      int VAR_5,
                      EventPlaceInTime VAR_6 )
{
    libvlc_event_t VAR_7;


    if( VAR_6 == VAR_0 )
    {
        VAR_7.type = VAR_1;
        VAR_7.u.media_list_item_deleted.item = VAR_4;
        VAR_7.u.media_list_item_deleted.index = VAR_5;
    }
    else
    {
        VAR_7.type = VAR_2;
        VAR_7.u.media_list_will_delete_item.item = VAR_4;
        VAR_7.u.media_list_will_delete_item.index = VAR_5;
    }


    FUNC_0( &VAR_3->event_manager, &VAR_7 );
}

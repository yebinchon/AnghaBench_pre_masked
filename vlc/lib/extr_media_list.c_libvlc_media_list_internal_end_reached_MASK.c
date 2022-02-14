
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int event_manager; } ;
typedef TYPE_1__ libvlc_media_list_t ;
struct TYPE_6__ {int type; } ;
typedef TYPE_2__ libvlc_event_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;

void FUNC_1( libvlc_media_list_t * VAR_1 )
{
    libvlc_event_t VAR_2;

    VAR_2.type = VAR_0;


    FUNC_0( &VAR_1->event_manager, &VAR_2 );
}

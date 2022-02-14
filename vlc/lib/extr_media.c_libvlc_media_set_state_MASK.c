
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* libvlc_state_t ;
struct TYPE_9__ {int event_manager; void* state; } ;
typedef TYPE_3__ libvlc_media_t ;
struct TYPE_7__ {void* new_state; } ;
struct TYPE_8__ {TYPE_1__ media_state_changed; } ;
struct TYPE_10__ {TYPE_2__ u; int type; } ;
typedef TYPE_4__ libvlc_event_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_4__*) ;

void
FUNC_1( libvlc_media_t *VAR_1,
                                   libvlc_state_t VAR_2 )
{
    libvlc_event_t VAR_3;

    VAR_1->state = VAR_2;


    VAR_3.type = VAR_0;
    VAR_3.u.media_state_changed.new_state = VAR_2;


    FUNC_0( &VAR_1->event_manager, &VAR_3 );
}

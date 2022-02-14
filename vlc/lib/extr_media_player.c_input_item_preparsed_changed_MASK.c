
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


struct TYPE_10__ {int new_status; } ;
struct TYPE_11__ {TYPE_1__ input_item_preparsed_changed; } ;
struct TYPE_14__ {TYPE_2__ u; } ;
typedef TYPE_5__ vlc_event_t ;
struct TYPE_15__ {int event_manager; } ;
typedef TYPE_6__ libvlc_media_t ;
struct TYPE_12__ {int new_status; } ;
struct TYPE_13__ {TYPE_3__ media_parsed_changed; } ;
struct TYPE_16__ {TYPE_4__ u; int type; } ;
typedef TYPE_7__ libvlc_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_7__*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1( const vlc_event_t *VAR_3,
                                          void * VAR_4 )
{
    libvlc_media_t *VAR_5 = VAR_4;
    if( VAR_3->u.input_item_preparsed_changed.new_status & VAR_0 )
    {

        libvlc_event_t VAR_6;
        VAR_6.type = VAR_1;
        VAR_6.u.media_parsed_changed.new_status = VAR_2;
        FUNC_0( &VAR_5->event_manager, &VAR_6 );
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int event_manager; } ;
typedef TYPE_1__ libvlc_media_player_t ;
struct TYPE_5__ {int type; } ;
typedef TYPE_2__ libvlc_event_t ;
typedef int audio_output_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(audio_output_t *VAR_2, bool VAR_3, void *VAR_4)
{
    (void) VAR_2;

    libvlc_media_player_t *VAR_5 = VAR_4;

    libvlc_event_t VAR_6;
    VAR_6.type = VAR_3 ? VAR_0
                           : VAR_1;

    FUNC_0(&VAR_5->event_manager, &VAR_6);
}

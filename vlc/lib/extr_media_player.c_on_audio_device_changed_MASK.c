
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int event_manager; } ;
typedef TYPE_3__ libvlc_media_player_t ;
struct TYPE_6__ {char const* device; } ;
struct TYPE_7__ {TYPE_1__ media_player_audio_device; } ;
struct TYPE_9__ {TYPE_2__ u; int type; } ;
typedef TYPE_4__ libvlc_event_t ;
typedef int audio_output_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_1(audio_output_t *VAR_1, const char *VAR_2, void *VAR_3)
{
    (void) VAR_1;

    libvlc_media_player_t *VAR_4 = VAR_3;

    libvlc_event_t VAR_5;
    VAR_5.type = VAR_0;
    VAR_5.u.media_player_audio_device.device = VAR_2;

    FUNC_0(&VAR_4->event_manager, &VAR_5);
}

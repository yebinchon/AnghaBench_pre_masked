
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; } ;
struct vlc_player_input {int thread; TYPE_1__ spu_track_vector; TYPE_1__ audio_track_vector; TYPE_1__ video_track_vector; TYPE_1__ program_vector; int * teletext_menu; int * titles; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct vlc_player_input*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(struct vlc_player_input *VAR_0)
{
    FUNC_0(VAR_0->titles == ((void*)0));
    FUNC_0(VAR_0->program_vector.size == 0);
    FUNC_0(VAR_0->video_track_vector.size == 0);
    FUNC_0(VAR_0->audio_track_vector.size == 0);
    FUNC_0(VAR_0->spu_track_vector.size == 0);
    FUNC_0(VAR_0->teletext_menu == ((void*)0));

    FUNC_3(&VAR_0->program_vector);
    FUNC_3(&VAR_0->video_track_vector);
    FUNC_3(&VAR_0->audio_track_vector);
    FUNC_3(&VAR_0->spu_track_vector);

    FUNC_2(VAR_0->thread);
    FUNC_1(VAR_0);
}

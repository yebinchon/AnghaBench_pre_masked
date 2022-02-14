
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_2__ {unsigned int frame_rate; unsigned int frame_rate_base; int df; int df_fps; int frames_per_10mins; scalar_t__ frame_resolution; } ;
struct vlc_player_timer_source {TYPE_1__ smpte; } ;



__attribute__((used)) static void
FUNC_0(vlc_player_t *VAR_0,
                               struct vlc_player_timer_source *VAR_1,
                               unsigned VAR_2, unsigned VAR_3)
{
    (void) VAR_0;
    VAR_1->smpte.frame_rate = VAR_2;
    VAR_1->smpte.frame_rate_base = VAR_3;


    VAR_1->smpte.frame_resolution = 0;

    unsigned VAR_4 = VAR_2 / VAR_3;

    if (VAR_4 == 29 && (100 * VAR_2 / VAR_3) == 2997)
    {

        VAR_1->smpte.df = 2;
        VAR_1->smpte.df_fps = 30;
        VAR_1->smpte.frames_per_10mins = 17982;
    }
    else if (VAR_4 == 59 && (100 * VAR_2 / VAR_3) == 5994)
    {

        VAR_1->smpte.df = 4;
        VAR_1->smpte.df_fps = 60;
        VAR_1->smpte.frames_per_10mins = 35964;
    }
    else
        VAR_1->smpte.df = 0;

    while (VAR_4 != 0)
    {
        VAR_4 /= 10;
        VAR_1->smpte.frame_resolution++;
    }
}

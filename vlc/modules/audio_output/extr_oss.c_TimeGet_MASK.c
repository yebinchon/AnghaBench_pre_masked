
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_7__ {TYPE_3__* sys; } ;
typedef TYPE_2__ audio_output_t ;
struct TYPE_6__ {int i_frame_length; int i_rate; int i_bytes_per_frame; } ;
struct TYPE_8__ {TYPE_1__ format; int fd; } ;
typedef TYPE_3__ aout_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4 (audio_output_t *VAR_2, vlc_tick_t *restrict VAR_3)
{
    aout_sys_t *VAR_4 = VAR_2->sys;
    int VAR_5;

    if (FUNC_0 (VAR_4->fd, VAR_0, &VAR_5) < 0)
    {
        FUNC_1 (VAR_2, "cannot get delay: %s", FUNC_2(VAR_1));
        return -1;
    }

    *VAR_3 = FUNC_3(VAR_5 * VAR_4->format.i_frame_length,
                        VAR_4->format.i_rate * VAR_4->format.i_bytes_per_frame);
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_stats {int lost_pictures; int displayed_pictures; int lost_abuffers; int played_abuffers; int decoded_video; int decoded_audio; int demux_discontinuity; int demux_corrupted; int demux_bitrate; int input_bitrate; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 struct input_stats* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;

struct input_stats *FUNC_4(void)
{
    struct input_stats *VAR_0 = FUNC_2(sizeof (*VAR_0));
    if (FUNC_3(VAR_0 == ((void*)0)))
        return ((void*)0);

    FUNC_1(&VAR_0->input_bitrate);
    FUNC_1(&VAR_0->demux_bitrate);
    FUNC_0(&VAR_0->demux_corrupted, 0);
    FUNC_0(&VAR_0->demux_discontinuity, 0);
    FUNC_0(&VAR_0->decoded_audio, 0);
    FUNC_0(&VAR_0->decoded_video, 0);
    FUNC_0(&VAR_0->played_abuffers, 0);
    FUNC_0(&VAR_0->lost_abuffers, 0);
    FUNC_0(&VAR_0->displayed_pictures, 0);
    FUNC_0(&VAR_0->lost_pictures, 0);
    return VAR_0;
}

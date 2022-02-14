
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lock; int value; int updates; } ;
struct input_stats {int lost_pictures; int displayed_pictures; int decoded_video; int lost_abuffers; int played_abuffers; int decoded_audio; int demux_discontinuity; int demux_corrupted; TYPE_2__ demux_bitrate; TYPE_2__ input_bitrate; } ;
struct TYPE_4__ {void* i_lost_pictures; void* i_displayed_pictures; void* i_decoded_video; void* i_lost_abuffers; void* i_played_abuffers; void* i_decoded_audio; void* i_demux_discontinuity; void* i_demux_corrupted; void* f_demux_bitrate; int i_demux_read_bytes; void* f_input_bitrate; int i_read_bytes; int i_read_packets; } ;
typedef TYPE_1__ input_stats_t ;


 void* FUNC_0 (int *,int ) ;
 int VAR_0 ;
 void* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct input_stats *VAR_1, input_stats_t *VAR_2)
{

    FUNC_2(&VAR_1->input_bitrate.lock);
    VAR_2->i_read_packets = VAR_1->input_bitrate.updates;
    VAR_2->i_read_bytes = VAR_1->input_bitrate.value;
    VAR_2->f_input_bitrate = FUNC_1(&VAR_1->input_bitrate);
    FUNC_3(&VAR_1->input_bitrate.lock);

    FUNC_2(&VAR_1->demux_bitrate.lock);
    VAR_2->i_demux_read_bytes = VAR_1->demux_bitrate.value;
    VAR_2->f_demux_bitrate = FUNC_1(&VAR_1->demux_bitrate);
    FUNC_3(&VAR_1->demux_bitrate.lock);
    VAR_2->i_demux_corrupted = FUNC_0(&VAR_1->demux_corrupted,
                                                 VAR_0);
    VAR_2->i_demux_discontinuity = FUNC_0(
                    &VAR_1->demux_discontinuity, VAR_0);


    VAR_2->i_decoded_audio = FUNC_0(&VAR_1->decoded_audio,
                                               VAR_0);
    VAR_2->i_played_abuffers = FUNC_0(&VAR_1->played_abuffers,
                                                 VAR_0);
    VAR_2->i_lost_abuffers = FUNC_0(&VAR_1->lost_abuffers,
                                               VAR_0);


    VAR_2->i_decoded_video = FUNC_0(&VAR_1->decoded_video,
                                               VAR_0);
    VAR_2->i_displayed_pictures = FUNC_0(&VAR_1->displayed_pictures,
                                                    VAR_0);
    VAR_2->i_lost_pictures = FUNC_0(&VAR_1->lost_pictures,
                                               VAR_0);
}

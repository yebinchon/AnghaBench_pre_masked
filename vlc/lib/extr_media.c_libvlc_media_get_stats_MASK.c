
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* p_input_item; } ;
typedef TYPE_1__ libvlc_media_t ;
struct TYPE_8__ {int i_lost_abuffers; int i_played_abuffers; int i_lost_pictures; int i_displayed_pictures; int i_decoded_audio; int i_decoded_video; int i_demux_discontinuity; int i_demux_corrupted; int f_demux_bitrate; int i_demux_read_bytes; int f_input_bitrate; int i_read_bytes; } ;
typedef TYPE_2__ libvlc_media_stats_t ;
struct TYPE_9__ {int i_lost_abuffers; int i_played_abuffers; int i_lost_pictures; int i_displayed_pictures; int i_decoded_audio; int i_decoded_video; int i_demux_discontinuity; int i_demux_corrupted; int f_demux_bitrate; int i_demux_read_bytes; int f_input_bitrate; int i_read_bytes; } ;
typedef TYPE_3__ input_stats_t ;
struct TYPE_10__ {int lock; TYPE_3__* p_stats; } ;
typedef TYPE_4__ input_item_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool FUNC_2(libvlc_media_t *VAR_0,
                            libvlc_media_stats_t *VAR_1)
{
    input_item_t *VAR_2 = VAR_0->p_input_item;

    if( !VAR_0->p_input_item )
        return 0;

    FUNC_0( &VAR_2->lock );

    input_stats_t *VAR_3 = VAR_0->p_input_item->p_stats;
    if( VAR_3 == ((void*)0) )
    {
        FUNC_1( &VAR_2->lock );
        return 0;
    }

    VAR_1->i_read_bytes = VAR_3->i_read_bytes;
    VAR_1->f_input_bitrate = VAR_3->f_input_bitrate;

    VAR_1->i_demux_read_bytes = VAR_3->i_demux_read_bytes;
    VAR_1->f_demux_bitrate = VAR_3->f_demux_bitrate;
    VAR_1->i_demux_corrupted = VAR_3->i_demux_corrupted;
    VAR_1->i_demux_discontinuity = VAR_3->i_demux_discontinuity;

    VAR_1->i_decoded_video = VAR_3->i_decoded_video;
    VAR_1->i_decoded_audio = VAR_3->i_decoded_audio;

    VAR_1->i_displayed_pictures = VAR_3->i_displayed_pictures;
    VAR_1->i_lost_pictures = VAR_3->i_lost_pictures;

    VAR_1->i_played_abuffers = VAR_3->i_played_abuffers;
    VAR_1->i_lost_abuffers = VAR_3->i_lost_abuffers;

    FUNC_1( &VAR_2->lock );
    return 1;
}

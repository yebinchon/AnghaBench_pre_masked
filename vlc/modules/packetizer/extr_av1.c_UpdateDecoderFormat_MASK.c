
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ video_transfer_func_t ;
typedef scalar_t__ video_color_space_t ;
typedef int video_color_range_t ;
typedef scalar_t__ video_color_primaries_t ;
typedef int uint8_t ;
struct TYPE_10__ {unsigned int i_visible_width; unsigned int i_width; unsigned int i_height; unsigned int i_visible_height; unsigned int i_frame_rate; unsigned int i_frame_rate_base; scalar_t__ primaries; scalar_t__ transfer; scalar_t__ space; int color_range; } ;
struct TYPE_12__ {int i_profile; int i_level; int p_extra; int i_extra; TYPE_2__ video; } ;
struct TYPE_9__ {scalar_t__ primaries; int i_frame_rate_base; int i_frame_rate; int i_visible_width; int i_visible_height; } ;
struct TYPE_11__ {scalar_t__ i_profile; int i_extra; TYPE_1__ video; } ;
struct TYPE_14__ {TYPE_4__ fmt_out; TYPE_3__ fmt_in; TYPE_7__* p_sys; } ;
typedef TYPE_6__ decoder_t ;
struct TYPE_15__ {TYPE_5__* p_sequence_header_block; int p_sequence_header; } ;
typedef TYPE_7__ av1_sys_t ;
struct TYPE_13__ {int i_buffer; int p_buffer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int **,int ,int,int const**,int *) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_2 (int ,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_3 (int ,unsigned int*,unsigned int*) ;
 int FUNC_4 (int ,int*,int*,int*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_5(decoder_t *VAR_2)
{
    av1_sys_t *VAR_3 = VAR_2->p_sys;
    if(!VAR_3->p_sequence_header)
        return;

    if(VAR_2->fmt_in.i_profile < VAR_0)
    {
        int VAR_4[3];
        FUNC_4(VAR_3->p_sequence_header, &VAR_4[0], &VAR_4[1], &VAR_4[2]);
        if(VAR_2->fmt_out.i_profile != VAR_4[0] || VAR_2->fmt_out.i_level != VAR_4[1])
        {
            VAR_2->fmt_out.i_profile = VAR_4[0];
            VAR_2->fmt_out.i_level = VAR_4[1];
        }
    }

    unsigned VAR_5, VAR_6;
    FUNC_2(VAR_3->p_sequence_header, &VAR_5, &VAR_6);
    if((!VAR_2->fmt_in.video.i_visible_height ||
        !VAR_2->fmt_in.video.i_visible_width) &&
       (VAR_2->fmt_out.video.i_visible_width != VAR_5 ||
        VAR_2->fmt_out.video.i_visible_width != VAR_6))
    {
        VAR_2->fmt_out.video.i_width =
        VAR_2->fmt_out.video.i_visible_width = VAR_5;
        VAR_2->fmt_out.video.i_height =
        VAR_2->fmt_out.video.i_visible_height = VAR_6;
    }

    if((!VAR_2->fmt_in.video.i_frame_rate ||
        !VAR_2->fmt_in.video.i_frame_rate_base) &&
        FUNC_3(VAR_3->p_sequence_header, &VAR_5, &VAR_6) &&
        (VAR_2->fmt_out.video.i_frame_rate != VAR_5 ||
         VAR_2->fmt_out.video.i_frame_rate_base != VAR_6))
    {
        VAR_2->fmt_out.video.i_frame_rate = VAR_5;
        VAR_2->fmt_out.video.i_frame_rate_base = VAR_6;
    }

    video_color_primaries_t VAR_7;
    video_color_space_t VAR_8;
    video_transfer_func_t VAR_9;
    video_color_range_t VAR_10;
    if(VAR_2->fmt_in.video.primaries == VAR_1 &&
       FUNC_1(VAR_3->p_sequence_header, &VAR_7, &VAR_9, &VAR_8, &VAR_10) &&
       VAR_7 != VAR_1 &&
       (VAR_2->fmt_out.video.primaries != VAR_7 ||
        VAR_2->fmt_out.video.transfer != VAR_9 ||
        VAR_2->fmt_out.video.space != VAR_8))
    {
        VAR_2->fmt_out.video.primaries = VAR_7;
        VAR_2->fmt_out.video.transfer = VAR_9;
        VAR_2->fmt_out.video.space = VAR_8;
        VAR_2->fmt_out.video.color_range = VAR_10;
    }

    if(!VAR_2->fmt_in.i_extra && !VAR_2->fmt_out.i_extra)
    {
        VAR_2->fmt_out.i_extra =
                FUNC_0((uint8_t **)&VAR_2->fmt_out.p_extra,
                                                      VAR_3->p_sequence_header,
                                                      1,
                                                      (const uint8_t **)&VAR_3->p_sequence_header_block->p_buffer,
                                                      &VAR_3->p_sequence_header_block->i_buffer);
    }
}

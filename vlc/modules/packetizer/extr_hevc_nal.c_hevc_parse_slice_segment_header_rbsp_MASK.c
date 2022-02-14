
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int (* pf_get_matchedxps ) (scalar_t__,void*,TYPE_1__**,TYPE_2__**,int **) ;
typedef int hevc_video_parameter_set_t ;
struct TYPE_12__ {scalar_t__ nal_type; scalar_t__ slice_pic_parameter_set_id; scalar_t__ slice_type; int pic_output_flag; int pic_order_cnt_lsb; void* dependent_slice_segment_flag; void* first_slice_segment_in_pic_flag; void* no_output_of_prior_pics_flag; } ;
typedef TYPE_3__ hevc_slice_segment_header_t ;
struct TYPE_11__ {scalar_t__ log2_max_pic_order_cnt_lsb_minus4; scalar_t__ separate_colour_plane_flag; } ;
typedef TYPE_2__ hevc_sequence_parameter_set_t ;
struct TYPE_10__ {unsigned int num_extra_slice_header_bits; scalar_t__ output_flag_present_flag; scalar_t__ dependent_slice_segments_enabled_flag; } ;
typedef TYPE_1__ hevc_picture_parameter_set_t ;
typedef int bs_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,scalar_t__) ;
 void* FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_2__*,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_6 (unsigned int) ;

__attribute__((used)) static bool FUNC_7( bs_t *VAR_6,
                                                  pf_get_matchedxps VAR_7,
                                                  void *VAR_8,
                                                  hevc_slice_segment_header_t *VAR_9 )
{
    hevc_sequence_parameter_set_t *VAR_10;
    hevc_picture_parameter_set_t *VAR_11;
    hevc_video_parameter_set_t *VAR_12;

    if( FUNC_3( VAR_6 ) < 3 )
        return 0;

    VAR_9->first_slice_segment_in_pic_flag = FUNC_1( VAR_6 );
    if( VAR_9->nal_type >= VAR_0 && VAR_9->nal_type <= VAR_3 )
        VAR_9->no_output_of_prior_pics_flag = FUNC_1( VAR_6 );
    VAR_9->slice_pic_parameter_set_id = FUNC_2( VAR_6 );
    if( VAR_9->slice_pic_parameter_set_id > VAR_4 || FUNC_3( VAR_6 ) < 1 )
        return 0;

    VAR_7( VAR_9->slice_pic_parameter_set_id, VAR_8, &VAR_11, &VAR_10, &VAR_12 );
    if(!VAR_10 || !VAR_11)
        return 0;

    if( !VAR_9->first_slice_segment_in_pic_flag )
    {
        if( VAR_11->dependent_slice_segments_enabled_flag )
            VAR_9->dependent_slice_segment_flag = FUNC_1( VAR_6 );

        unsigned VAR_13, VAR_14;
        if( !FUNC_5( VAR_10, &VAR_13, &VAR_14 ) )
            return 0;

        (void) FUNC_0( VAR_6, FUNC_6( VAR_13 * VAR_14 ) );
    }

    if( !VAR_9->dependent_slice_segment_flag )
    {
        unsigned VAR_15=0;
        if( VAR_11->num_extra_slice_header_bits > VAR_15 )
        {
            VAR_15++;
            FUNC_4( VAR_6, 1 );
        }

        if( VAR_11->num_extra_slice_header_bits > VAR_15 )
        {
            VAR_15++;
            FUNC_4( VAR_6, 1 );
        }

        if( VAR_15 < VAR_11->num_extra_slice_header_bits )
           FUNC_4( VAR_6, VAR_11->num_extra_slice_header_bits - VAR_15 );

        VAR_9->slice_type = FUNC_2( VAR_6 );
        if( VAR_9->slice_type > VAR_5 )
            return 0;

        if( VAR_11->output_flag_present_flag )
            VAR_9->pic_output_flag = FUNC_1( VAR_6 );
        else
            VAR_9->pic_output_flag = 1;
    }

    if( VAR_10->separate_colour_plane_flag )
        FUNC_4( VAR_6, 2 );

    if( VAR_9->nal_type != VAR_2 && VAR_9->nal_type != VAR_1 )
        VAR_9->pic_order_cnt_lsb = FUNC_0( VAR_6, VAR_10->log2_max_pic_order_cnt_lsb_minus4 + 4 );
    else
        VAR_9->pic_order_cnt_lsb = 0;

    if( FUNC_3( VAR_6 ) < 1 )
        return 0;

    return 1;
}

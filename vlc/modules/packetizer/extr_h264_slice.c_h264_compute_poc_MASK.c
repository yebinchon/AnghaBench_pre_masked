
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned int int64_t ;
typedef unsigned int int32_t ;
struct TYPE_9__ {scalar_t__ i_nal_type; int i_pic_order_cnt_lsb; scalar_t__ i_nal_ref_idc; unsigned int i_frame_num; unsigned int i_delta_pic_order_cnt0; int i_delta_pic_order_cnt1; scalar_t__ i_bottom_field_flag; scalar_t__ i_field_pic_flag; scalar_t__ has_mmco5; scalar_t__ i_delta_pic_order_cnt_bottom; } ;
typedef TYPE_2__ h264_slice_t ;
struct TYPE_10__ {int i_pic_order_cnt_type; int i_log2_max_pic_order_cnt_lsb; int i_log2_max_frame_num; int i_num_ref_frames_in_pic_order_cnt_cycle; unsigned int* offset_for_ref_frame; unsigned int offset_for_non_ref_pic; int offset_for_top_to_bottom_field; } ;
typedef TYPE_3__ h264_sequence_parameter_set_t ;
struct TYPE_8__ {int lsb; int msb; } ;
struct TYPE_11__ {int prevRefPictureIsBottomField; int prevRefPictureTFOC; unsigned int prevFrameNum; unsigned int prevFrameNumOffset; TYPE_1__ prevPicOrderCnt; scalar_t__ prevRefPictureHasMMCO5; } ;
typedef TYPE_4__ h264_poc_context_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;

void FUNC_1( const h264_sequence_parameter_set_t *VAR_1,
                       const h264_slice_t *VAR_2, h264_poc_context_t *VAR_3,
                       int *VAR_4, int *VAR_5, int *VAR_6 )
{
    *VAR_5 = *VAR_6 = 0;

    if( VAR_1->i_pic_order_cnt_type == 0 )
    {
        unsigned VAR_7 = 1U << (VAR_1->i_log2_max_pic_order_cnt_lsb + 4);


        if( VAR_2->i_nal_type == VAR_0 )
        {
            VAR_3->prevPicOrderCnt.lsb = 0;
            VAR_3->prevPicOrderCnt.msb = 0;
        }
        else if( VAR_3->prevRefPictureHasMMCO5 )
        {
            VAR_3->prevPicOrderCnt.msb = 0;
            if( !VAR_3->prevRefPictureIsBottomField )
                VAR_3->prevPicOrderCnt.lsb = VAR_3->prevRefPictureTFOC;
            else
                VAR_3->prevPicOrderCnt.lsb = 0;
        }


        int VAR_8 = VAR_3->prevPicOrderCnt.msb;
        int64_t VAR_9 = VAR_2->i_pic_order_cnt_lsb - VAR_3->prevPicOrderCnt.lsb;
        if( VAR_9 < 0 && -VAR_9 >= VAR_7 / 2 )
            VAR_8 += VAR_7;
        else if( VAR_9 > VAR_7 / 2 )
            VAR_8 -= VAR_7;

        *VAR_5 = *VAR_6 = VAR_8 + VAR_2->i_pic_order_cnt_lsb;
        if( VAR_2->i_field_pic_flag )
            *VAR_6 += VAR_2->i_delta_pic_order_cnt_bottom;


        if( VAR_2->i_nal_ref_idc )
        {
            VAR_3->prevRefPictureIsBottomField = (VAR_2->i_field_pic_flag &&
                                                  VAR_2->i_bottom_field_flag);
            VAR_3->prevRefPictureHasMMCO5 = VAR_2->has_mmco5;
            VAR_3->prevRefPictureTFOC = *VAR_5;
            VAR_3->prevPicOrderCnt.lsb = VAR_2->i_pic_order_cnt_lsb;
            VAR_3->prevPicOrderCnt.msb = VAR_8;
        }
    }
    else
    {
        unsigned VAR_10 = 1 << (VAR_1->i_log2_max_frame_num + 4);
        unsigned VAR_11;
        unsigned VAR_12 = 0;

        if( VAR_2->i_nal_type == VAR_0 )
            VAR_11 = 0;
        else if( VAR_3->prevFrameNum > VAR_2->i_frame_num )
            VAR_11 = VAR_3->prevFrameNumOffset + VAR_10;
        else
            VAR_11 = VAR_3->prevFrameNumOffset;

        if( VAR_1->i_pic_order_cnt_type == 1 )
        {
            unsigned VAR_13;

            if( VAR_1->i_num_ref_frames_in_pic_order_cnt_cycle > 0 )
                VAR_13 = VAR_11 + VAR_2->i_frame_num;
            else
                VAR_13 = 0;

            if( VAR_2->i_nal_ref_idc == 0 && VAR_13 > 0 )
                VAR_13--;

            if( VAR_13 > 0 )
            {
                int32_t VAR_14 = 0;
                for( int VAR_15=0; VAR_15<VAR_1->i_num_ref_frames_in_pic_order_cnt_cycle; VAR_15++ )
                    VAR_14 += VAR_1->offset_for_ref_frame[VAR_15];

                unsigned VAR_16 = 0;
                unsigned VAR_17 = 0;
                if( VAR_1->i_num_ref_frames_in_pic_order_cnt_cycle )
                {
                    VAR_16 = ( VAR_13 - 1 ) / VAR_1->i_num_ref_frames_in_pic_order_cnt_cycle;
                    VAR_17 = ( VAR_13 - 1 ) % VAR_1->i_num_ref_frames_in_pic_order_cnt_cycle;
                }

                VAR_12 = VAR_16 * VAR_14;
                for( unsigned VAR_18=0; VAR_18 <= VAR_17; VAR_18++ )
                    VAR_12 = VAR_12 + VAR_1->offset_for_ref_frame[VAR_18];
            }

            if( VAR_2->i_nal_ref_idc == 0 )
                VAR_12 = VAR_12 + VAR_1->offset_for_non_ref_pic;

            *VAR_5 = VAR_12 + VAR_2->i_delta_pic_order_cnt0;
            if( !VAR_2->i_field_pic_flag )
                *VAR_6 = *VAR_5 + VAR_1->offset_for_top_to_bottom_field + VAR_2->i_delta_pic_order_cnt1;
            else if( VAR_2->i_bottom_field_flag )
                *VAR_6 = VAR_12 + VAR_1->offset_for_top_to_bottom_field + VAR_2->i_delta_pic_order_cnt0;
        }
        else if( VAR_1->i_pic_order_cnt_type == 2 )
        {
            unsigned VAR_19;

            if( VAR_2->i_nal_type == VAR_0 )
                VAR_19 = 0;
            else if( VAR_2->i_nal_ref_idc == 0 )
                VAR_19 = 2 * ( VAR_11 + VAR_2->i_frame_num ) - 1;
            else
                VAR_19 = 2 * ( VAR_11 + VAR_2->i_frame_num );

            *VAR_6 = *VAR_5 = VAR_19;
        }

        VAR_3->prevFrameNum = VAR_2->i_frame_num;
        if( VAR_2->has_mmco5 )
            VAR_3->prevFrameNumOffset = 0;
        else
            VAR_3->prevFrameNumOffset = VAR_11;
    }


    if( !VAR_2->i_field_pic_flag )
        *VAR_4 = FUNC_0( *VAR_6, *VAR_5 );
    else
    if ( VAR_2->i_bottom_field_flag )
        *VAR_4 = *VAR_6;
    else
        *VAR_4 = *VAR_5;
}

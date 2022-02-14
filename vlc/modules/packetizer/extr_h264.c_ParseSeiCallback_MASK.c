
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int video_multiview_mode_t ;
struct TYPE_18__ {int i_frames; } ;
struct TYPE_29__ {int type; } ;
struct TYPE_24__ {int i_data; int p_data; } ;
struct TYPE_25__ {TYPE_2__ cc; } ;
struct TYPE_26__ {TYPE_3__ u; int type; } ;
struct TYPE_19__ {int i_type; TYPE_10__ recovery; TYPE_7__ frame_packing; TYPE_4__ itu_t35; int p_bs; } ;
typedef TYPE_11__ hxxx_sei_data_t ;
struct TYPE_23__ {int b_pic_struct_present_flag; int i_dpb_output_delay_length_minus1; int i_cpb_removal_delay_length_minus1; int b_hrd_parameters_present_flag; int b_valid; } ;
struct TYPE_20__ {TYPE_1__ vui; } ;
typedef TYPE_12__ h264_sequence_parameter_set_t ;
struct TYPE_30__ {int multiview_mode; } ;
struct TYPE_31__ {TYPE_8__ video; } ;
struct TYPE_27__ {int multiview_mode; } ;
struct TYPE_28__ {TYPE_5__ video; } ;
struct TYPE_21__ {TYPE_9__ fmt_out; TYPE_6__ fmt_in; TYPE_14__* p_sys; } ;
typedef TYPE_13__ decoder_t ;
struct TYPE_22__ {int i_recovery_frame_cnt; int b_recovered; int p_ccs; void* i_pic_struct; void* i_dpb_output_delay; TYPE_12__* p_active_sps; } ;
typedef TYPE_14__ decoder_sys_t ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_12__ const*) ;
 void* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (TYPE_13__*,char*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5( const hxxx_sei_data_t *VAR_8, void *VAR_9 )
{
    decoder_t *VAR_10 = (decoder_t *) VAR_9;
    decoder_sys_t *VAR_11 = VAR_10->p_sys;

    switch( VAR_8->i_type )
    {

        case 130:
        {
            const h264_sequence_parameter_set_t *VAR_12 = VAR_11->p_active_sps;
            if( FUNC_4( VAR_12 == ((void*)0) ) )
            {
                FUNC_0( VAR_12 );
                break;
            }

            if( VAR_12->vui.b_valid )
            {
                if( VAR_12->vui.b_hrd_parameters_present_flag )
                {
                    FUNC_1( VAR_8->p_bs, VAR_12->vui.i_cpb_removal_delay_length_minus1 + 1 );
                    VAR_11->i_dpb_output_delay =
                            FUNC_1( VAR_8->p_bs, VAR_12->vui.i_dpb_output_delay_length_minus1 + 1 );
                }

                if( VAR_12->vui.b_pic_struct_present_flag )
                    VAR_11->i_pic_struct = FUNC_1( VAR_8->p_bs, 4 );

            }
        } break;


        case 128:
        {
            if( VAR_8->itu_t35.type == VAR_0 )
            {
                FUNC_2( VAR_11->p_ccs, 1, VAR_8->itu_t35.u.cc.p_data,
                                                       VAR_8->itu_t35.u.cc.i_data );
            }
        } break;

        case 131:
        {
            if( VAR_10->fmt_in.video.multiview_mode == VAR_1 )
            {
                video_multiview_mode_t VAR_13;
                switch( VAR_8->frame_packing.type )
                {
                    case 138:
                        VAR_13 = VAR_2; break;
                    case 137:
                        VAR_13 = VAR_3; break;
                    case 136:
                        VAR_13 = VAR_5; break;
                    case 135:
                        VAR_13 = VAR_6; break;
                    case 132:
                        VAR_13 = VAR_7; break;
                    case 134:
                        VAR_13 = VAR_4; break;
                    case 133:
                    default:
                        VAR_13 = VAR_1; break;
                }
                VAR_10->fmt_out.video.multiview_mode = VAR_13;
            }
        } break;


        case 129:
        {
            if( !VAR_11->b_recovered )
                FUNC_3( VAR_10, "Seen SEI recovery point, %d recovery frames", VAR_8->recovery.i_frames );
            VAR_11->i_recovery_frame_cnt = VAR_8->recovery.i_frames;
        } break;

        default:

            break;
    }

    return 1;
}

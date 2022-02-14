
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_16__ ;
typedef struct TYPE_24__ TYPE_15__ ;
typedef struct TYPE_23__ TYPE_14__ ;
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int video_multiview_mode_t ;
struct TYPE_20__ {int MaxFALL; int MaxCLL; } ;
struct TYPE_33__ {int min_luminance; int max_luminance; int * white_point; int * primaries; } ;
struct TYPE_22__ {TYPE_11__ lighting; TYPE_8__ mastering; int multiview_mode; } ;
typedef TYPE_13__ video_format_t ;
struct TYPE_21__ {int MaxFALL; int MaxCLL; } ;
struct TYPE_34__ {int min_luminance; int max_luminance; int * white_point; int * primaries; } ;
struct TYPE_32__ {int type; } ;
struct TYPE_29__ {int i_frames; } ;
struct TYPE_26__ {int i_data; int p_data; } ;
struct TYPE_27__ {TYPE_1__ cc; } ;
struct TYPE_28__ {TYPE_2__ u; int type; } ;
struct TYPE_23__ {int i_type; TYPE_12__ content_light_lvl; TYPE_9__ colour_volume; TYPE_7__ frame_packing; TYPE_4__ recovery; TYPE_3__ itu_t35; int p_bs; } ;
typedef TYPE_14__ hxxx_sei_data_t ;
struct TYPE_19__ {TYPE_13__ video; } ;
struct TYPE_30__ {int multiview_mode; } ;
struct TYPE_31__ {TYPE_5__ video; } ;
struct TYPE_24__ {TYPE_10__ fmt_out; TYPE_6__ fmt_in; TYPE_16__* p_sys; } ;
typedef TYPE_15__ decoder_t ;
struct TYPE_25__ {int b_recovery_point; int p_ccs; int p_active_sps; int p_timing; } ;
typedef TYPE_16__ decoder_sys_t ;


 size_t FUNC_0 (int *) ;







 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_15__*,char*,int ) ;

__attribute__((used)) static bool FUNC_5( const hxxx_sei_data_t *VAR_8, void *VAR_9 )
{
    decoder_t *VAR_10 = (decoder_t *) VAR_9;
    decoder_sys_t *VAR_11 = VAR_10->p_sys;

    switch( VAR_8->i_type )
    {
        case 130:
        {
            if( VAR_11->p_active_sps )
            {
                FUNC_3( VAR_11->p_timing );
                VAR_11->p_timing = FUNC_2( VAR_8->p_bs,
                                                              VAR_11->p_active_sps );
            }
        } break;
        case 128:
        {
            if( VAR_8->itu_t35.type == VAR_0 )
            {
                FUNC_1( VAR_11->p_ccs, 1, VAR_8->itu_t35.u.cc.p_data,
                                                       VAR_8->itu_t35.u.cc.i_data );
            }
        } break;
        case 129:
        {
            if( !VAR_11->b_recovery_point )
            {
                FUNC_4( VAR_10, "Seen SEI recovery point, %d recovery frames", VAR_8->recovery.i_frames );
                VAR_11->b_recovery_point = 1;
            }
        } break;
        case 132:
        {
            if( VAR_10->fmt_in.video.multiview_mode == VAR_1 )
            {
                video_multiview_mode_t VAR_12;
                switch( VAR_8->frame_packing.type )
                {
                    case 140:
                        VAR_12 = VAR_2; break;
                    case 139:
                        VAR_12 = VAR_3; break;
                    case 138:
                        VAR_12 = VAR_5; break;
                    case 137:
                        VAR_12 = VAR_6; break;
                    case 134:
                        VAR_12 = VAR_7; break;
                    case 136:
                        VAR_12 = VAR_4; break;
                    case 135:
                    default:
                        VAR_12 = VAR_1; break;
                }
                VAR_10->fmt_out.video.multiview_mode = VAR_12;
            }
        } break;
        case 131:
        {
            video_format_t *VAR_13 = &VAR_10->fmt_out.video;
            for (size_t VAR_14=0; VAR_14<FUNC_0(VAR_8->colour_volume.primaries); ++VAR_14)
                VAR_13->mastering.primaries[VAR_14] = VAR_8->colour_volume.primaries[VAR_14];
            for (size_t VAR_15=0; VAR_15<FUNC_0(VAR_8->colour_volume.white_point); ++VAR_15)
                VAR_13->mastering.white_point[VAR_15] = VAR_8->colour_volume.white_point[VAR_15];
            VAR_13->mastering.max_luminance = VAR_8->colour_volume.max_luminance;
            VAR_13->mastering.min_luminance = VAR_8->colour_volume.min_luminance;
        } break;
        case 133:
        {
            video_format_t *VAR_16 = &VAR_10->fmt_out.video;
            VAR_16->lighting.MaxCLL = VAR_8->content_light_lvl.MaxCLL;
            VAR_16->lighting.MaxFALL = VAR_8->content_light_lvl.MaxFALL;
        } break;
    }

    return 1;
}

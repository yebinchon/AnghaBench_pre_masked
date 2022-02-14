
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int video_multiview_mode_t ;
struct TYPE_10__ {int i_frame_rate; int i_frame_rate_base; int multiview_mode; } ;
struct TYPE_11__ {scalar_t__ i_codec; TYPE_1__ video; int i_original_fourcc; } ;
struct TYPE_12__ {TYPE_2__ fmt; } ;
typedef TYPE_3__ ts_es_t ;
struct TYPE_13__ {int i_frame_rate_code; int b_mpeg2; int b_multiple_frame_rate; } ;
typedef TYPE_4__ dvbpsi_vstream_dr_t ;
typedef int dvbpsi_pmt_es_t ;
struct TYPE_14__ {scalar_t__ i_length; int* p_data; } ;
typedef TYPE_5__ dvbpsi_descriptor_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (int const*,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__* FUNC_1 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_2( ts_es_t *VAR_5,
                            const dvbpsi_pmt_es_t *VAR_6 )
{
    dvbpsi_descriptor_t *VAR_7 = FUNC_0( VAR_6, 0x02 );
    if( VAR_7 )
    {

        const dvbpsi_vstream_dr_t *VAR_8 = FUNC_1( VAR_7 );
        if( VAR_8 )
        {
            if( VAR_8->i_frame_rate_code > 1 && VAR_8->i_frame_rate_code < 9 &&
                !VAR_8->b_multiple_frame_rate )
            {
                static const int VAR_9[8][2] =
                {
                    { 24000, 1001 }, { 24, 1 }, { 25, 1 }, { 30000, 1001 },
                    { 30, 1 }, { 50, 1 }, { 60000, 1001 }, { 60, 1 },
                };
                VAR_5->fmt.video.i_frame_rate = VAR_9[VAR_8->i_frame_rate_code - 1][0];
                VAR_5->fmt.video.i_frame_rate_base = VAR_9[VAR_8->i_frame_rate_code - 1][1];
            }
            if( !VAR_8->b_mpeg2 && VAR_5->fmt.i_codec == VAR_4 )
                VAR_5->fmt.i_original_fourcc = VAR_3;
        }
    }


    VAR_7 = FUNC_0( VAR_6, 0x34 );
    if( VAR_7 && VAR_7->i_length > 0 && (VAR_7->p_data[0] & 0x80) )
    {
        video_multiview_mode_t VAR_10;
        switch( VAR_7->p_data[0] & 0x7F )
        {
            case 0x03:
                VAR_10 = VAR_1; break;
            case 0x04:
                VAR_10 = VAR_2; break;
            case 0x08:
            default:
                VAR_10 = VAR_0; break;
        }
        VAR_5->fmt.video.multiview_mode = VAR_10;
    }
}

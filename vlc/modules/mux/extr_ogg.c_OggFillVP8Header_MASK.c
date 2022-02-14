
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {TYPE_2__* p_fmt; scalar_t__ p_sys; } ;
typedef TYPE_5__ sout_input_t ;
struct TYPE_10__ {int i_frame_rate_base; int i_frame_rate; } ;
struct TYPE_11__ {TYPE_3__ video; } ;
struct TYPE_13__ {TYPE_4__ fmt; } ;
typedef TYPE_6__ ogg_stream_t ;
struct TYPE_8__ {int i_height; int i_sar_num; int i_sar_den; int i_width; } ;
struct TYPE_9__ {TYPE_1__ video; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static void FUNC_3( uint8_t *VAR_0, sout_input_t *VAR_1 )
{
    ogg_stream_t *VAR_2 = (ogg_stream_t *) VAR_1->p_sys;

    FUNC_2( VAR_0, "OVP80\x01\x01\x00", 8 );
    FUNC_1( &VAR_0[8], VAR_1->p_fmt->video.i_width );
    FUNC_0( &VAR_0[14], VAR_1->p_fmt->video.i_sar_den );
    FUNC_0( &VAR_0[11], VAR_1->p_fmt->video.i_sar_num );
    FUNC_1( &VAR_0[10], VAR_1->p_fmt->video.i_height );
    FUNC_0( &VAR_0[18], VAR_2->fmt.video.i_frame_rate );
    FUNC_0( &VAR_0[22], VAR_2->fmt.video.i_frame_rate_base );
}

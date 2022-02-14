
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_dts_header_t ;
struct TYPE_7__ {scalar_t__ i_codec; int audio; } ;
struct TYPE_6__ {scalar_t__ i_codec; int audio; } ;
struct TYPE_8__ {int * pf_get_cc; int pf_flush; int pf_packetize; TYPE_2__ fmt_in; TYPE_1__ fmt_out; TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_9__ {int b_date_set; int b_discontinuity; int bytestream; int second; int first; int i_pts; int end_date; int i_state; } ;
typedef TYPE_4__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int FUNC_4( vlc_object_t *VAR_8 )
{
    decoder_t *VAR_9 = (decoder_t*)VAR_8;
    decoder_sys_t *VAR_10;

    if( VAR_9->fmt_in.i_codec != VAR_3 )
        return VAR_4;


    if( ( VAR_9->p_sys = VAR_10 = FUNC_2(sizeof(decoder_sys_t)) ) == ((void*)0) )
        return VAR_5;


    VAR_10->i_state = VAR_2;
    FUNC_1( &VAR_10->end_date, VAR_7 );
    VAR_10->i_pts = VAR_7;
    VAR_10->b_date_set = 0;
    VAR_10->b_discontinuity = 0;
    FUNC_3(&VAR_10->first, 0, sizeof(vlc_dts_header_t));
    FUNC_3(&VAR_10->second, 0, sizeof(vlc_dts_header_t));
    FUNC_0( &VAR_10->bytestream );


    VAR_9->fmt_out.i_codec = VAR_9->fmt_in.i_codec;
    VAR_9->fmt_out.audio = VAR_9->fmt_in.audio;


    VAR_9->pf_packetize = VAR_0;
    VAR_9->pf_flush = VAR_1;
    VAR_9->pf_get_cc = ((void*)0);
    return VAR_6;
}

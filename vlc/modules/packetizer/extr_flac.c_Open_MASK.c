
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_10__ {int b_packetized; scalar_t__ i_codec; } ;
struct TYPE_11__ {scalar_t__ i_codec; } ;
struct TYPE_8__ {int * pf_get_cc; int pf_flush; int pf_packetize; TYPE_5__ fmt_out; TYPE_6__ fmt_in; TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_7__ {int i_pts; } ;
struct TYPE_9__ {int b_stream_info; int pts; int bytestream; scalar_t__ i_next_block_flags; int * p_buf; scalar_t__ i_buf; TYPE_1__ headerinfo; scalar_t__ i_frame_size; int i_last_frame_size; scalar_t__ i_offset; int i_state; } ;
typedef TYPE_3__ decoder_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (TYPE_5__*,TYPE_6__*) ;
 TYPE_3__* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(vlc_object_t *VAR_9)
{
    decoder_t *VAR_10 = (decoder_t*)VAR_9;
    decoder_sys_t *VAR_11;

    if (VAR_10->fmt_in.i_codec != VAR_4)
        return VAR_5;



    VAR_10->p_sys = VAR_11 = FUNC_3(sizeof(*VAR_11));
    if (!VAR_11)
        return VAR_6;

    VAR_11->i_state = VAR_3;
    VAR_11->i_offset = 0;
    VAR_11->b_stream_info = 0;
    VAR_11->i_last_frame_size = VAR_0;
    VAR_11->i_frame_size = 0;
    VAR_11->headerinfo.i_pts = VAR_8;
    VAR_11->i_buf = 0;
    VAR_11->p_buf = ((void*)0);
    VAR_11->i_next_block_flags = 0;
    FUNC_0(&VAR_11->bytestream);
    FUNC_1( &VAR_11->pts, 1, 1 );


    FUNC_2(&VAR_10->fmt_out, &VAR_10->fmt_in);
    VAR_10->fmt_out.i_codec = VAR_4;
    VAR_10->fmt_out.b_packetized = 1;


    VAR_10->pf_packetize = VAR_2;
    VAR_10->pf_flush = VAR_1;
    VAR_10->pf_get_cc = ((void*)0);

    return VAR_7;
}

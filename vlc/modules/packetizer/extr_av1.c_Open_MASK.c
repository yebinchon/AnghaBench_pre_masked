
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


typedef int vlc_object_t ;
struct TYPE_12__ {int b_packetized; } ;
struct TYPE_13__ {scalar_t__ i_codec; } ;
struct TYPE_9__ {int pf_flush; int pf_packetize; TYPE_5__ fmt_out; TYPE_6__ fmt_in; TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_8__ {int b_has_visible_frame; void* pts; void* dts; } ;
struct TYPE_10__ {scalar_t__ i_next_block_flags; scalar_t__ i_seen; TYPE_1__ tu; int * p_sequence_header; int * p_sequence_header_block; } ;
typedef TYPE_3__ av1_sys_t ;
struct TYPE_11__ {int post; int frame; int pre; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 TYPE_3__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_5__*,TYPE_6__*) ;
 int VAR_7 ;
 TYPE_4__ VAR_8 ;

__attribute__((used)) static int FUNC_3(vlc_object_t *VAR_9)
{
    decoder_t *VAR_10 = (decoder_t*)VAR_9;
    av1_sys_t *VAR_11;

    if (VAR_10->fmt_in.i_codec != VAR_2)
        return VAR_3;

    VAR_10->p_sys = VAR_11 = FUNC_1(1, sizeof(av1_sys_t));
    if (!VAR_10->p_sys)
        return VAR_4;

    FUNC_0(VAR_7);
    VAR_11->p_sequence_header_block = ((void*)0);
    VAR_11->p_sequence_header = ((void*)0);
    VAR_11->tu.b_has_visible_frame = 0;
    VAR_11->tu.dts = VAR_6;
    VAR_11->tu.pts = VAR_6;
    VAR_11->i_seen = 0;
    VAR_11->i_next_block_flags = 0;
    FUNC_0(VAR_8.pre);
    FUNC_0(VAR_8.frame);
    FUNC_0(VAR_8.post);


    FUNC_2(&VAR_10->fmt_out, &VAR_10->fmt_in);
    VAR_10->fmt_out.b_packetized = 1;

    VAR_10->pf_packetize = VAR_1;
    VAR_10->pf_flush = VAR_0;

    return VAR_5;
}

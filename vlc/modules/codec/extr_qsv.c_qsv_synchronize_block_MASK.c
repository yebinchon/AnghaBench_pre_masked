
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;


typedef scalar_t__ mfxStatus ;
struct TYPE_18__ {int i_frame_rate; int i_frame_rate_base; } ;
struct TYPE_19__ {TYPE_1__ video; } ;
struct TYPE_20__ {TYPE_2__ fmt_in; TYPE_4__* p_sys; } ;
typedef TYPE_3__ encoder_t ;
struct TYPE_21__ {scalar_t__ last_dts; int session; } ;
typedef TYPE_4__ encoder_sys_t ;
struct TYPE_22__ {scalar_t__ i_buffer; scalar_t__ i_dts; scalar_t__ i_length; int p_buffer; } ;
typedef TYPE_5__ block_t ;
struct TYPE_17__ {scalar_t__ DataLength; scalar_t__ DataOffset; int DecodeTimeStamp; int FrameType; } ;
struct TYPE_23__ {TYPE_13__ bs; TYPE_5__* block; int * syncp; } ;
typedef TYPE_6__ async_task_t ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (TYPE_3__*,char*,scalar_t__) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,TYPE_5__*,TYPE_13__*) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static block_t *FUNC_6(encoder_t *VAR_3, async_task_t *VAR_4)
{
    encoder_sys_t *VAR_5 = VAR_3->p_sys;
    mfxStatus VAR_6;


    do {
        VAR_6 = FUNC_0(VAR_5->session, *VAR_4->syncp, VAR_2);
    } while (VAR_6 == VAR_1);
    if (VAR_6 != VAR_0) {
        FUNC_2(VAR_3, "SyncOperation failed (%d), outputting garbage data. "
                "Updating your drivers and/or changing the encoding settings might resolve this", VAR_6);
        return ((void*)0);
    }
    if (VAR_4->bs.DataLength == 0)
    {
        FUNC_1(VAR_3, "Empty encoded block");
        return ((void*)0);
    }
    block_t *VAR_7 = VAR_4->block;
    VAR_7->i_buffer = VAR_4->bs.DataLength;
    VAR_7->p_buffer += VAR_4->bs.DataOffset;

    FUNC_4(VAR_3, VAR_5, VAR_7, &VAR_4->bs);
    FUNC_3(VAR_7, VAR_4->bs.FrameType);






    VAR_7->i_length = FUNC_5( VAR_3->fmt_in.video.i_frame_rate_base,
                                             VAR_3->fmt_in.video.i_frame_rate );


    if (VAR_4->bs.DecodeTimeStamp < -10000)
        VAR_7->i_dts = VAR_5->last_dts + VAR_7->i_length;
    VAR_5->last_dts = VAR_7->i_dts;

    VAR_4->bs.DataLength = VAR_4->bs.DataOffset = 0;
    return VAR_7;
}

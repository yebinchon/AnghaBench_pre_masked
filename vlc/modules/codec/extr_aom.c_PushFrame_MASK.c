
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_12__ {TYPE_1__* frame_priv; int i_next_frame_priv; int ctx; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_13__ {size_t i_buffer; scalar_t__ i_pts; scalar_t__ i_dts; int * p_buffer; } ;
typedef TYPE_4__ block_t ;
typedef scalar_t__ aom_codec_err_t ;
typedef int aom_codec_ctx_t ;
struct TYPE_10__ {scalar_t__ pts; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *,char*) ;
 uintptr_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int *,int const*,size_t,void*) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_4(decoder_t *VAR_6, block_t *VAR_7)
{
    decoder_sys_t *VAR_8 = VAR_6->p_sys;
    aom_codec_ctx_t *VAR_9 = &VAR_8->ctx;
    const uint8_t *VAR_10;
    size_t VAR_11;


    uintptr_t VAR_12 = VAR_8->i_next_frame_priv++ % VAR_2;

    if(FUNC_3(VAR_7))
    {
        VAR_10 = VAR_7->p_buffer;
        VAR_11 = VAR_7->i_buffer;
        VAR_8->frame_priv[VAR_12].pts = (VAR_7->i_pts != VAR_5) ? VAR_7->i_pts : VAR_7->i_dts;
    }
    else
    {
        VAR_10 = ((void*)0);
        VAR_11 = 0;
    }

    aom_codec_err_t VAR_13;
    VAR_13 = FUNC_1(VAR_9, VAR_10, VAR_11, (void*)VAR_12);

    if(VAR_7)
        FUNC_2(VAR_7);

    if (VAR_13 != VAR_0) {
        FUNC_0(VAR_6, VAR_9, "Failed to decode frame");
        if (VAR_13 == VAR_1)
            return VAR_3;
    }
    return VAR_4;
}

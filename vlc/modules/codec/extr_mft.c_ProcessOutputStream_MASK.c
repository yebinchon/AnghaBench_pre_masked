
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef void* vlc_tick_t ;
struct TYPE_30__ {int b_progressive; void* date; } ;
typedef TYPE_4__ picture_t ;
struct TYPE_29__ {scalar_t__ i_cat; } ;
struct TYPE_27__ {int i_bitspersample; int i_channels; } ;
struct TYPE_28__ {TYPE_1__ audio; } ;
struct TYPE_31__ {TYPE_3__ fmt_in; TYPE_2__ fmt_out; TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_32__ {int * output_sample; scalar_t__ output_type; int output_stream_id; int mft; } ;
typedef TYPE_6__ decoder_sys_t ;
struct TYPE_33__ {int i_buffer; int p_buffer; void* i_pts; } ;
typedef TYPE_7__ block_t ;
typedef int UINT32 ;
struct TYPE_34__ {int member_0; int * pSample; scalar_t__ pEvents; int * member_3; int member_2; int * member_1; } ;
typedef TYPE_8__ MFT_OUTPUT_DATA_BUFFER ;
typedef int LONGLONG ;
typedef int IMFSample ;
typedef int IMFMediaBuffer ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (TYPE_5__*,int ,int **) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int *,int **,int *,int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int *,int ,int **) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,int*) ;
 scalar_t__ FUNC_11 (int *,int *,int*) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,int ,int,TYPE_8__*,int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_14 (TYPE_5__*,int ,scalar_t__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_15 (int ) ;
 int FUNC_16 (TYPE_7__*) ;
 TYPE_7__* FUNC_17 (TYPE_5__*,int) ;
 TYPE_4__* FUNC_18 (TYPE_5__*) ;
 int FUNC_19 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_20 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_21 (TYPE_5__*) ;
 scalar_t__ FUNC_22 (TYPE_5__*) ;
 int FUNC_23 (int ,int *,int) ;
 int FUNC_24 (TYPE_5__*,char*,...) ;
 int FUNC_25 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_26(decoder_t *VAR_8, DWORD VAR_9)
{
    decoder_sys_t *VAR_10 = VAR_8->p_sys;
    HRESULT VAR_11;
    picture_t *VAR_12 = ((void*)0);
    block_t *VAR_13 = ((void*)0);

    DWORD VAR_14 = 0;
    MFT_OUTPUT_DATA_BUFFER VAR_15 = { VAR_9, VAR_10->output_sample, 0, ((void*)0) };
    VAR_11 = FUNC_13(VAR_10->mft, 0, 1, &VAR_15, &VAR_14);
    if (VAR_15.pEvents)
        FUNC_3(VAR_15.pEvents);

    IMFSample *VAR_16 = VAR_15.pSample;

    if (VAR_11 == VAR_4)
    {
        if (!VAR_16)
            return VAR_7;

        LONGLONG VAR_17;
        VAR_11 = FUNC_9(VAR_16, &VAR_17);
        if (FUNC_2(VAR_11))
            goto error;

        vlc_tick_t VAR_18 = FUNC_15(VAR_17);

        DWORD VAR_19 = 0;
        VAR_11 = FUNC_10(VAR_16, &VAR_19);
        if (FUNC_2(VAR_11))
            goto error;

        if (VAR_8->fmt_in.i_cat == VAR_5)
        {
            if (FUNC_22(VAR_8))
                return VAR_7;
            VAR_12 = FUNC_18(VAR_8);
            if (!VAR_12)
                return VAR_7;

            UINT32 VAR_20 = 0;
            VAR_11 = FUNC_11(VAR_16, &VAR_0, &VAR_20);
            VAR_12->b_progressive = !VAR_20;

            VAR_12->date = VAR_18;
        }
        else
        {
            if (FUNC_21(VAR_8))
                goto error;
            if (VAR_8->fmt_out.audio.i_bitspersample == 0 || VAR_8->fmt_out.audio.i_channels == 0)
                goto error;
            int VAR_21 = VAR_19 / (VAR_8->fmt_out.audio.i_bitspersample * VAR_8->fmt_out.audio.i_channels / 8);
            VAR_13 = FUNC_17(VAR_8, VAR_21);
            if (!VAR_13)
                return VAR_7;
            if (VAR_13->i_buffer < VAR_19)
                goto error;

            VAR_13->i_pts = VAR_18;
        }

        IMFMediaBuffer *VAR_22 = ((void*)0);
        VAR_11 = FUNC_8(VAR_16, 0, &VAR_22);

        BYTE *VAR_23;
        VAR_11 = FUNC_4(VAR_22, &VAR_23, ((void*)0), ((void*)0));
        if (FUNC_2(VAR_11))
            goto error;

        if (VAR_8->fmt_in.i_cat == VAR_5)
            FUNC_1(VAR_12, VAR_23);
        else
            FUNC_23(VAR_13->p_buffer, VAR_23, VAR_19);

        VAR_11 = FUNC_6(VAR_22);
        FUNC_12(VAR_22);
        if (FUNC_2(VAR_11))
            goto error;

        if (VAR_10->output_sample)
        {

            VAR_11 = FUNC_5(VAR_22, 0);
            if (FUNC_2(VAR_11))
                goto error;
        }
        else
        {

            FUNC_12(VAR_16);
        }
    }
    else if (VAR_11 == VAR_2 || VAR_11 == VAR_3)
    {
        if (VAR_10->output_type)
            FUNC_7(VAR_10->output_type);
        if (FUNC_14(VAR_8, VAR_10->output_stream_id, &VAR_10->output_type))
            goto error;


        if (VAR_10->output_sample)
            FUNC_12(VAR_10->output_sample);
        VAR_10->output_sample = ((void*)0);
        if (FUNC_0(VAR_8, 0, &VAR_10->output_sample))
            goto error;
        return VAR_7;
    }
    else if (VAR_11 == VAR_1)
    {
        return VAR_7;
    }
    else
    {
        FUNC_24(VAR_8, "Unexpected error in IMFTransform::ProcessOutput: %#lx",
                VAR_11);
        goto error;
    }

    if (VAR_8->fmt_in.i_cat == VAR_5)
        FUNC_20(VAR_8, VAR_12);
    else
        FUNC_19(VAR_8, VAR_13);

    return VAR_7;

error:
    FUNC_24(VAR_8, "Error in ProcessOutputStream()");
    if (VAR_12)
        FUNC_25(VAR_12);
    if (VAR_13)
        FUNC_16(VAR_13);
    return VAR_6;
}

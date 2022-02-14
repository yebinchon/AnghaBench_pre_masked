
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int i_rate; int i_channels; int i_bitspersample; int i_blockalign; } ;
struct TYPE_9__ {int i_width; int i_height; int i_frame_rate; int i_frame_rate_base; } ;
struct TYPE_11__ {scalar_t__ i_cat; int i_bitrate; scalar_t__ i_extra; scalar_t__ p_extra; TYPE_2__ audio; TYPE_1__ video; } ;
struct TYPE_12__ {TYPE_3__ fmt_in; TYPE_5__* p_sys; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_13__ {int mft; TYPE_8__* subtype; } ;
typedef TYPE_5__ decoder_sys_t ;
typedef int UINT8 ;
typedef int UINT64 ;
typedef int UINT32 ;
struct TYPE_14__ {int Data1; } ;
typedef int IMFMediaType ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,int const*,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int *,int) ;
 scalar_t__ FUNC_6 (int *,int *,int) ;
 scalar_t__ FUNC_7 (int ,int ,int,int **) ;
 scalar_t__ FUNC_8 (int ,int ,int *,int ) ;
 scalar_t__ FUNC_9 (int *,TYPE_8__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_10 (TYPE_4__*,char*) ;

__attribute__((used)) static int FUNC_11(decoder_t *VAR_16, DWORD VAR_17, IMFMediaType **VAR_18)
{
    decoder_sys_t *VAR_19 = VAR_16->p_sys;
    HRESULT VAR_20;

    *VAR_18 = ((void*)0);

    IMFMediaType *VAR_21 = ((void*)0);


    int VAR_22 = 0;
    bool VAR_23 = 0;
    for (int VAR_24 = 0; !VAR_23; ++VAR_24)
    {
        VAR_20 = FUNC_7(VAR_19->mft, VAR_17, VAR_24, &VAR_21);
        if (VAR_20 == VAR_1)
            break;
        else if (VAR_20 == VAR_2)
        {

            return VAR_15;
        }
        else if (FUNC_0(VAR_20))
            goto error;

        GUID VAR_25;
        VAR_20 = FUNC_2(VAR_21, &VAR_11, &VAR_25);
        if (FUNC_0(VAR_20))
            goto error;

        if (FUNC_9(&VAR_25, VAR_19->subtype))
            VAR_23 = 1;

        if (VAR_23)
            VAR_22 = VAR_24;

        FUNC_3(VAR_21);
        VAR_21 = ((void*)0);
    }
    if (!VAR_23)
        goto error;

    VAR_20 = FUNC_7(VAR_19->mft, VAR_17, VAR_22, &VAR_21);
    if (FUNC_0(VAR_20))
        goto error;

    if (VAR_16->fmt_in.i_cat == VAR_13)
    {
        UINT64 VAR_26 = VAR_16->fmt_in.video.i_width;
        UINT64 VAR_27 = VAR_16->fmt_in.video.i_height;
        UINT64 VAR_28 = (VAR_26 << 32) | VAR_27;
        VAR_20 = FUNC_6(VAR_21, &VAR_9, VAR_28);
        if (FUNC_0(VAR_20))
            goto error;


        UINT64 VAR_29 = VAR_16->fmt_in.video.i_frame_rate;
        UINT64 VAR_30 = VAR_16->fmt_in.video.i_frame_rate_base;
        if(VAR_29 && VAR_30) {
            UINT64 VAR_31 = (VAR_29 << 32) | VAR_30;
            VAR_20 = FUNC_6(VAR_21, &VAR_8, VAR_31);
            if(FUNC_0(VAR_20))
                goto error;
        }
    }
    else
    {
        VAR_20 = FUNC_5(VAR_21, &VAR_10, VAR_19->subtype->Data1);
        if (FUNC_0(VAR_20))
            goto error;
        if (VAR_16->fmt_in.audio.i_rate)
        {
            VAR_20 = FUNC_5(VAR_21, &VAR_7, VAR_16->fmt_in.audio.i_rate);
            if (FUNC_0(VAR_20))
                goto error;
        }
        if (VAR_16->fmt_in.audio.i_channels)
        {
            VAR_20 = FUNC_5(VAR_21, &VAR_6, VAR_16->fmt_in.audio.i_channels);
            if (FUNC_0(VAR_20))
                goto error;
        }
        if (VAR_16->fmt_in.audio.i_bitspersample)
        {
            VAR_20 = FUNC_5(VAR_21, &VAR_4, VAR_16->fmt_in.audio.i_bitspersample);
            if (FUNC_0(VAR_20))
                goto error;
        }
        if (VAR_16->fmt_in.audio.i_blockalign)
        {
            VAR_20 = FUNC_5(VAR_21, &VAR_5, VAR_16->fmt_in.audio.i_blockalign);
            if (FUNC_0(VAR_20))
                goto error;
        }
        if (VAR_16->fmt_in.i_bitrate)
        {
            VAR_20 = FUNC_5(VAR_21, &VAR_3, VAR_16->fmt_in.i_bitrate / 8);
            if (FUNC_0(VAR_20))
                goto error;
        }
    }

    if (VAR_16->fmt_in.i_extra > 0)
    {
        UINT32 VAR_32 = 0;
        VAR_20 = FUNC_1(VAR_21, &VAR_12, &VAR_32);




        if (VAR_20 == VAR_0)
        {
            VAR_20 = FUNC_4(VAR_21, &VAR_12,
                                      (const UINT8*)VAR_16->fmt_in.p_extra, VAR_16->fmt_in.i_extra);
            if (FUNC_0(VAR_20))
                goto error;
        }
    }

    VAR_20 = FUNC_8(VAR_19->mft, VAR_17, VAR_21, 0);
    if (FUNC_0(VAR_20))
        goto error;

    *VAR_18 = VAR_21;

    return VAR_15;

error:
    FUNC_10(VAR_16, "Error in SetInputType()");
    if (VAR_21)
        FUNC_3(VAR_21);
    return VAR_14;
}

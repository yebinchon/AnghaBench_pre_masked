
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_14__ {int i_bitspersample; int i_channels; int i_rate; int i_physical_channels; } ;
struct TYPE_19__ {int orientation; } ;
struct TYPE_15__ {TYPE_2__ audio; scalar_t__ i_codec; TYPE_7__ video; } ;
struct TYPE_13__ {scalar_t__ i_cat; TYPE_2__ audio; int video; } ;
struct TYPE_16__ {TYPE_3__ fmt_out; TYPE_1__ fmt_in; TYPE_5__* p_sys; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_17__ {int mft; } ;
typedef TYPE_5__ decoder_sys_t ;
typedef int UINT32 ;
struct TYPE_18__ {int Data1; } ;
typedef int IMFMediaType ;
typedef scalar_t__ HRESULT ;
typedef TYPE_6__ GUID ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,TYPE_6__*) ;
 scalar_t__ FUNC_2 (int *,int *,TYPE_6__*) ;
 scalar_t__ FUNC_3 (int *,int *,int*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ,int,int **) ;
 scalar_t__ FUNC_6 (int ,int ,int *,int ) ;
 scalar_t__ FUNC_7 (TYPE_6__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (TYPE_4__*,char*) ;
 int * VAR_14 ;
 int FUNC_10 (TYPE_7__*,int *) ;
 scalar_t__ FUNC_11 (scalar_t__,int ) ;
 scalar_t__ FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (int ,scalar_t__*,int *) ;

__attribute__((used)) static int FUNC_14(decoder_t *VAR_15, DWORD VAR_16, IMFMediaType **VAR_17)
{
    decoder_sys_t *VAR_18 = VAR_15->p_sys;
    HRESULT VAR_19;

    *VAR_17 = ((void*)0);

    IMFMediaType *VAR_20 = ((void*)0);






    int VAR_21 = -1;
    bool VAR_22 = 0;
    for (int VAR_23 = 0; !VAR_22; ++VAR_23)
    {
        VAR_19 = FUNC_5(VAR_18->mft, VAR_16, VAR_23, &VAR_20);
        if (VAR_19 == VAR_3)
            break;
        else if (VAR_19 == VAR_4)
        {

            return VAR_12;
        }
        else if (FUNC_0(VAR_19))
            goto error;

        GUID VAR_24;
        VAR_19 = FUNC_2(VAR_20, &VAR_8, &VAR_24);
        if (FUNC_0(VAR_19))
            goto error;

        if (VAR_15->fmt_in.i_cat == VAR_10)
        {
            if (FUNC_7(&VAR_24, &VAR_2) || FUNC_7(&VAR_24, &VAR_1))
                VAR_22 = 1;


            else if(VAR_21 < 0 && FUNC_1(VAR_13, &VAR_24) > 0)
                    VAR_21 = VAR_23;
        }
        else
        {
            UINT32 VAR_25;
            VAR_19 = FUNC_3(VAR_20, &VAR_5, &VAR_25);
            if (FUNC_0(VAR_19))
                continue;
            if (VAR_25 == 32 && FUNC_7(&VAR_24, &VAR_0))
                VAR_22 = 1;
        }

        if (VAR_22)
            VAR_21 = VAR_23;

        FUNC_4(VAR_20);
        VAR_20 = ((void*)0);
    }




    if(VAR_21 < 0)


        VAR_21 = 0;

    VAR_19 = FUNC_5(VAR_18->mft, VAR_16, VAR_21, &VAR_20);
    if (FUNC_0(VAR_19))
        goto error;

    VAR_19 = FUNC_6(VAR_18->mft, VAR_16, VAR_20, 0);
    if (FUNC_0(VAR_19))
        goto error;

    GUID VAR_26;
    VAR_19 = FUNC_2(VAR_20, &VAR_8, &VAR_26);
    if (FUNC_0(VAR_19))
        goto error;

    if (VAR_15->fmt_in.i_cat == VAR_10)
    {
        FUNC_10( &VAR_15->fmt_out.video, &VAR_15->fmt_in.video );


        vlc_fourcc_t VAR_27 = FUNC_1(VAR_13, &VAR_26);
        if(VAR_27) {

            VAR_15->fmt_out.video.orientation = VAR_9;
        } else {
            VAR_27 = FUNC_11(VAR_15->fmt_in.i_cat, VAR_26.Data1);
        }

        VAR_15->fmt_out.i_codec = VAR_27;
    }
    else
    {
        VAR_15->fmt_out.audio = VAR_15->fmt_in.audio;

        UINT32 VAR_28 = 0;
        VAR_19 = FUNC_3(VAR_20, &VAR_5, &VAR_28);
        if (FUNC_8(VAR_19) && VAR_28)
            VAR_15->fmt_out.audio.i_bitspersample = VAR_28;

        UINT32 VAR_29 = 0;
        VAR_19 = FUNC_3(VAR_20, &VAR_6, &VAR_29);
        if (FUNC_8(VAR_19) && VAR_29)
            VAR_15->fmt_out.audio.i_channels = VAR_29;

        UINT32 VAR_30 = 0;
        VAR_19 = FUNC_3(VAR_20, &VAR_7, &VAR_30);
        if (FUNC_8(VAR_19) && VAR_30)
            VAR_15->fmt_out.audio.i_rate = VAR_30;

        vlc_fourcc_t VAR_31;
        FUNC_13(VAR_26.Data1, &VAR_31, ((void*)0));
        VAR_15->fmt_out.i_codec = FUNC_12(VAR_31, VAR_15->fmt_out.audio.i_bitspersample);

        VAR_15->fmt_out.audio.i_physical_channels = VAR_14[VAR_15->fmt_out.audio.i_channels];
    }

    *VAR_17 = VAR_20;

    return VAR_12;

error:
    FUNC_9(VAR_15, "Error in SetOutputType()");
    if (VAR_20)
        FUNC_4(VAR_20);
    return VAR_11;
}

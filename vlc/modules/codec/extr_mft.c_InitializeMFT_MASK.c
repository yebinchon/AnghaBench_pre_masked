
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {scalar_t__ i_codec; size_t i_extra; int * p_extra; } ;
struct TYPE_10__ {TYPE_1__ fmt_in; TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_11__ {int is_async; int nal_length_size; int mft; int input_type; scalar_t__ input_stream_id; int output_type; scalar_t__ output_stream_id; int event_generator; } ;
typedef TYPE_3__ decoder_sys_t ;
typedef int ULONG_PTR ;
typedef int UINT32 ;
typedef int IMFAttributes ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int *,int*) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (int ,int **) ;
 scalar_t__ FUNC_5 (int ,int*,int*) ;
 scalar_t__ FUNC_6 (int ,int,scalar_t__*,int,scalar_t__*) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int *,void**) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_2__*,scalar_t__,int *) ;
 scalar_t__ FUNC_11 (TYPE_2__*,scalar_t__,int *) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *,size_t,size_t*,int *) ;
 scalar_t__ FUNC_14 (int *,size_t) ;
 int FUNC_15 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_16(decoder_t *VAR_11)
{
    decoder_sys_t *VAR_12 = VAR_11->p_sys;
    HRESULT VAR_13;

    IMFAttributes *VAR_14 = ((void*)0);
    VAR_13 = FUNC_4(VAR_12->mft, &VAR_14);
    if (VAR_13 != VAR_1 && FUNC_1(VAR_13))
        goto error;
    if (FUNC_9(VAR_13))
    {
        UINT32 VAR_15 = 0;
        VAR_13 = FUNC_2(VAR_14, &VAR_6, &VAR_15);
        if (VAR_13 != VAR_5 && FUNC_1(VAR_13))
            goto error;
        VAR_12->is_async = VAR_15;
        if (VAR_12->is_async)
        {
            VAR_13 = FUNC_3(VAR_14, &VAR_7, 1);
            if (FUNC_1(VAR_13))
                goto error;
            VAR_13 = FUNC_8(VAR_12->mft, &VAR_2, (void**)&VAR_12->event_generator);
            if (FUNC_1(VAR_13))
                goto error;
        }
    }

    DWORD VAR_16;
    DWORD VAR_17;
    VAR_13 = FUNC_5(VAR_12->mft, &VAR_16, &VAR_17);
    if (FUNC_1(VAR_13))
        goto error;
    if (VAR_16 != 1 || VAR_17 != 1)
    {
        FUNC_15(VAR_11, "MFT decoder should have 1 input stream and 1 output stream.");
        goto error;
    }

    VAR_13 = FUNC_6(VAR_12->mft, 1, &VAR_12->input_stream_id, 1, &VAR_12->output_stream_id);
    if (VAR_13 == VAR_1)
    {






        VAR_12->input_stream_id = 0;
        VAR_12->output_stream_id = 0;
    }
    else if (FUNC_1(VAR_13))
        goto error;

    if (FUNC_10(VAR_11, VAR_12->input_stream_id, &VAR_12->input_type))
        goto error;

    if (FUNC_11(VAR_11, VAR_12->output_stream_id, &VAR_12->output_type))
        goto error;





    if (!VAR_12->input_type)
        if (FUNC_10(VAR_11, VAR_12->input_stream_id, &VAR_12->input_type) || !VAR_12->input_type)
            goto error;


    VAR_13 = FUNC_7(VAR_12->mft, VAR_3, (ULONG_PTR)0);
    if (FUNC_1(VAR_13))
        goto error;


    VAR_13 = FUNC_7(VAR_12->mft, VAR_4, (ULONG_PTR)0);
    if (FUNC_1(VAR_13))
        goto error;

    if (VAR_11->fmt_in.i_codec == VAR_8)
    {

        FUNC_3(VAR_14, &VAR_0, 1);

        if (VAR_11->fmt_in.i_extra)
        {
            if (FUNC_14((uint8_t*)VAR_11->fmt_in.p_extra, VAR_11->fmt_in.i_extra))
            {
                size_t VAR_18;
                uint8_t *VAR_19 = FUNC_13(VAR_11->fmt_in.p_extra,
                                                       VAR_11->fmt_in.i_extra,
                                                      &VAR_18, &VAR_12->nal_length_size);
                if(VAR_19)
                {
                    FUNC_12(VAR_11->fmt_in.p_extra);
                    VAR_11->fmt_in.p_extra = VAR_19;
                    VAR_11->fmt_in.i_extra = VAR_18;
                }
            }
        }
    }
    return VAR_10;

error:
    FUNC_15(VAR_11, "Error in InitializeMFT()");
    FUNC_0(VAR_11);
    return VAR_9;
}

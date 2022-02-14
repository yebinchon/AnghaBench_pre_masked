
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ i_cat; } ;
struct TYPE_10__ {TYPE_1__ fmt_in; TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_13__ {int (* fptr_MFCreateMemoryBuffer ) (scalar_t__,int **) ;int (* fptr_MFCreateAlignedMemoryBuffer ) (scalar_t__,scalar_t__,int **) ;int (* fptr_MFCreateSample ) (int **) ;} ;
struct TYPE_11__ {int mft; TYPE_5__ mf_handle; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_12__ {int dwFlags; scalar_t__ cbSize; scalar_t__ cbAlignment; } ;
typedef TYPE_4__ MFT_OUTPUT_STREAM_INFO ;
typedef TYPE_5__ MFHandle ;
typedef int IMFSample ;
typedef int IMFMediaBuffer ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__,TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (scalar_t__,scalar_t__,int **) ;
 int FUNC_7 (scalar_t__,int **) ;

__attribute__((used)) static int FUNC_8(decoder_t *VAR_8, DWORD VAR_9, IMFSample **VAR_10)
{
    decoder_sys_t *VAR_11 = VAR_8->p_sys;
    MFHandle *VAR_12 = &VAR_11->mf_handle;
    HRESULT VAR_13;

    *VAR_10 = ((void*)0);

    IMFSample *VAR_14 = ((void*)0);

    MFT_OUTPUT_STREAM_INFO VAR_15;
    VAR_13 = FUNC_3(VAR_11->mft, VAR_9, &VAR_15);
    if (FUNC_0(VAR_13))
        goto error;

    if (VAR_15.dwFlags & (VAR_2 | VAR_0))
    {

        return VAR_7;
    }

    DWORD VAR_16 = 0;
    if (VAR_8->fmt_in.i_cat == VAR_5)
        VAR_16 |= VAR_4
                        | VAR_3
                        | VAR_1;
    if ((VAR_15.dwFlags & VAR_16) != VAR_16)
        goto error;

    VAR_13 = VAR_12->fptr_MFCreateSample(&VAR_14);
    if (FUNC_0(VAR_13))
        goto error;

    IMFMediaBuffer *VAR_17 = ((void*)0);
    DWORD VAR_18 = VAR_15.cbSize;
    DWORD VAR_19 = VAR_15.cbAlignment;
    if (VAR_19 > 0)
        VAR_13 = VAR_12->fptr_MFCreateAlignedMemoryBuffer(VAR_18, VAR_19 - 1, &VAR_17);
    else
        VAR_13 = VAR_12->fptr_MFCreateMemoryBuffer(VAR_18, &VAR_17);
    if (FUNC_0(VAR_13))
        goto error;

    VAR_13 = FUNC_1(VAR_14, VAR_17);
    if (FUNC_0(VAR_13))
        goto error;

    *VAR_10 = VAR_14;

    return VAR_7;

error:
    FUNC_4(VAR_8, "Error in AllocateOutputSample()");
    if (VAR_14)
        FUNC_2(VAR_14);
    return VAR_6;
}

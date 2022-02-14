
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_11__ {int (* fptr_MFCreateMemoryBuffer ) (int ,int **) ;int (* fptr_MFCreateSample ) (int **) ;} ;
struct TYPE_9__ {int mft; TYPE_4__ mf_handle; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_10__ {int cbSize; } ;
typedef TYPE_3__ MFT_INPUT_STREAM_INFO ;
typedef TYPE_4__ MFHandle ;
typedef int IMFSample ;
typedef int IMFMediaBuffer ;
typedef int HRESULT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (int **) ;
 int FUNC_8 (int ,int **) ;

__attribute__((used)) static int FUNC_9(decoder_t *VAR_2, DWORD VAR_3, IMFSample** VAR_4, DWORD VAR_5)
{
    decoder_sys_t *VAR_6 = VAR_2->p_sys;
    MFHandle *VAR_7 = &VAR_6->mf_handle;
    HRESULT VAR_8;

    *VAR_4 = ((void*)0);

    IMFSample *VAR_9 = ((void*)0);

    MFT_INPUT_STREAM_INFO VAR_10;
    VAR_8 = FUNC_4(VAR_6->mft, VAR_3, &VAR_10);
    if (FUNC_0(VAR_8))
        goto error;

    VAR_8 = VAR_7->fptr_MFCreateSample(&VAR_9);
    if (FUNC_0(VAR_8))
        goto error;

    IMFMediaBuffer *VAR_11 = ((void*)0);
    DWORD VAR_12 = FUNC_5(VAR_10.cbSize, VAR_5);
    VAR_8 = VAR_7->fptr_MFCreateMemoryBuffer(VAR_12, &VAR_11);
    if (FUNC_0(VAR_8))
        goto error;

    VAR_8 = FUNC_2(VAR_9, VAR_11);
    FUNC_1(VAR_11);
    if (FUNC_0(VAR_8))
        goto error;

    *VAR_4 = VAR_9;

    return VAR_1;

error:
    FUNC_6(VAR_2, "Error in AllocateInputSample()");
    if (VAR_9)
        FUNC_3(VAR_9);
    if (VAR_11)
        FUNC_1(VAR_11);
    return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_9__ {scalar_t__ i_codec; } ;
struct TYPE_10__ {TYPE_1__ fmt_in; TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_11__ {int mft; int nal_length_size; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_12__ {scalar_t__ i_pts; scalar_t__ i_dts; int i_buffer; int p_buffer; } ;
typedef TYPE_4__ block_t ;
typedef int IMFSample ;
typedef int IMFMediaBuffer ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ,int **,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int **,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int **) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,int ,int *,int ) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_14(decoder_t *VAR_4, DWORD VAR_5, block_t *VAR_6)
{
    decoder_sys_t *VAR_7 = VAR_4->p_sys;
    HRESULT VAR_8;
    IMFSample *VAR_9 = ((void*)0);

    if (FUNC_0(VAR_4, VAR_5, &VAR_9, VAR_6->i_buffer))
        goto error;

    IMFMediaBuffer *VAR_10 = ((void*)0);
    VAR_8 = FUNC_6(VAR_9, 0, &VAR_10);
    if (FUNC_1(VAR_8))
        goto error;

    BYTE *VAR_11;
    VAR_8 = FUNC_2(VAR_10, &VAR_11, ((void*)0), ((void*)0));
    if (FUNC_1(VAR_8))
        goto error;

    FUNC_12(VAR_11, VAR_6->p_buffer, VAR_6->i_buffer);

    if (VAR_4->fmt_in.i_codec == VAR_0)
    {

        FUNC_11(VAR_11, VAR_6->i_buffer, VAR_7->nal_length_size);
    }

    VAR_8 = FUNC_5(VAR_10);
    if (FUNC_1(VAR_8))
        goto error;

    VAR_8 = FUNC_4(VAR_10, VAR_6->i_buffer);
    if (FUNC_1(VAR_8))
        goto error;

    vlc_tick_t VAR_12 = VAR_6->i_pts == VAR_3 ? VAR_6->i_dts : VAR_6->i_pts;


    VAR_8 = FUNC_8(VAR_9, FUNC_10(VAR_12));
    if (FUNC_1(VAR_8))
        goto error;

    VAR_8 = FUNC_9(VAR_7->mft, VAR_5, VAR_9, 0);
    if (FUNC_1(VAR_8))
        goto error;

    FUNC_3(VAR_10);
    FUNC_7(VAR_9);

    return VAR_2;

error:
    FUNC_13(VAR_4, "Error in ProcessInputStream()");
    if (VAR_9)
        FUNC_7(VAR_9);
    return VAR_1;
}

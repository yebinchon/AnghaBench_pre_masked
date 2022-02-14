
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {int pf_decode; TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_9__ {scalar_t__ is_async; int output_sample; int mf_handle; } ;
typedef TYPE_2__ decoder_sys_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_6 (int,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_9(vlc_object_t *VAR_6)
{
    decoder_t *VAR_7 = (decoder_t *)VAR_6;
    decoder_sys_t *VAR_8;

    VAR_8 = VAR_7->p_sys = FUNC_6(1, sizeof(*VAR_8));
    if (!VAR_8)
        return VAR_4;

    if( FUNC_3(FUNC_2(((void*)0), VAR_0)) )
    {
        FUNC_7(VAR_8);
        return VAR_3;
    }

    if (FUNC_5(&VAR_8->mf_handle))
    {
        FUNC_8(VAR_7, "Failed to load MFT library.");
        goto error;
    }

    if (FUNC_4(VAR_7))
    {
        FUNC_8(VAR_7, "Could not find suitable MFT decoder");
        goto error;
    }


    if (FUNC_0(VAR_7, 0, &VAR_8->output_sample))
        goto error;

    VAR_7->pf_decode = VAR_8->is_async ? VAR_1 : VAR_2;

    return VAR_5;

error:
    FUNC_1(VAR_6);
    return VAR_3;
}

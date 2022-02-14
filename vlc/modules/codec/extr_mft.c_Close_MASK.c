
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_8__ {scalar_t__ mfplat_dll; } ;
struct TYPE_7__ {TYPE_3__ mf_handle; } ;
typedef TYPE_2__ decoder_sys_t ;
typedef TYPE_3__ MFHandle ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(vlc_object_t *VAR_0)
{
    decoder_t *VAR_1 = (decoder_t *)VAR_0;
    decoder_sys_t *VAR_2 = VAR_1->p_sys;
    MFHandle *VAR_3 = &VAR_2->mf_handle;

    FUNC_1(VAR_1);

    if (VAR_3->mfplat_dll)
        FUNC_2(VAR_3->mfplat_dll);

    FUNC_3(VAR_2);

    FUNC_0();
}

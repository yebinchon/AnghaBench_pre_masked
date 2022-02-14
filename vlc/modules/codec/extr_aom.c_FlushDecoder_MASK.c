
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_8__ {int ctx; } ;
typedef TYPE_2__ decoder_sys_t ;
typedef int aom_codec_ctx_t ;


 int FUNC_0 (TYPE_1__*,int *,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_3(decoder_t *VAR_2)
{
    decoder_sys_t *VAR_3 = VAR_2->p_sys;
    aom_codec_ctx_t *VAR_4 = &VAR_3->ctx;

    if(FUNC_2(VAR_2, ((void*)0)) != VAR_1)
        FUNC_0(VAR_2, VAR_4, "Failed to flush decoder");
    else
        FUNC_1(VAR_2, VAR_0);
}

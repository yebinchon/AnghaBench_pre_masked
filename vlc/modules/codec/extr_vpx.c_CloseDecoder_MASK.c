
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct vpx_image {TYPE_2__* user_priv; } ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_5__ {int ctx; } ;
typedef TYPE_2__ decoder_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 struct vpx_image* FUNC_2 (int *,void const**) ;

__attribute__((used)) static void FUNC_3(vlc_object_t *VAR_0)
{
    decoder_t *VAR_1 = (decoder_t *)VAR_0;
    decoder_sys_t *VAR_2 = VAR_1->p_sys;


    const void *VAR_3 = ((void*)0);
    for (;;) {
        struct vpx_image *VAR_4 = FUNC_2(&VAR_2->ctx, &VAR_3);
        if (!VAR_4)
            break;
        FUNC_0(VAR_4->user_priv);
    }

    FUNC_1(&VAR_2->ctx);

    FUNC_0(VAR_2);
}

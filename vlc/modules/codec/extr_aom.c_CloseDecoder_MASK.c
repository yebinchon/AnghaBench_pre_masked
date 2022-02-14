
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_6__ {int ctx; } ;
typedef TYPE_2__ decoder_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(vlc_object_t *VAR_0)
{
    decoder_t *VAR_1 = (decoder_t *)VAR_0;
    decoder_sys_t *VAR_2 = VAR_1->p_sys;


    FUNC_0(VAR_1);

    FUNC_1(VAR_0, &VAR_2->ctx);

    FUNC_2(VAR_2);
}

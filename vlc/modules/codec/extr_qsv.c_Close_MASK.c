
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ encoder_t ;
struct TYPE_5__ {scalar_t__ input_pool; int packets; int session; } ;
typedef TYPE_2__ encoder_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(vlc_object_t *VAR_0)
{
    encoder_t *VAR_1 = (encoder_t *)VAR_0;
    encoder_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_1(VAR_2->session);
    FUNC_0(VAR_2->session);


    FUNC_2(&VAR_2->packets);
    if (VAR_2->input_pool)
        FUNC_4(VAR_2->input_pool);
    FUNC_3(VAR_2);
}

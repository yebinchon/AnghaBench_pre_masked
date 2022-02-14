
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_5__ {int i_max_stop; } ;
typedef TYPE_2__ decoder_sys_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0( decoder_t *VAR_1 )
{
    decoder_sys_t *VAR_2 = VAR_1->p_sys;

    VAR_2->i_max_stop = VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_5__ {int b_atomic; } ;
typedef TYPE_2__ filter_sys_t ;
typedef int const commandparams_t ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1( filter_t *VAR_1,
                             const commandparams_t *VAR_2,
                             commandparams_t *VAR_3 )
{
    filter_sys_t *VAR_4 = VAR_1->p_sys;
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);

    VAR_4->b_atomic = 1;
    return VAR_0;
}

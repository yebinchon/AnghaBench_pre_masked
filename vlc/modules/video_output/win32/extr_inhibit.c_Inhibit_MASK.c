
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ vlc_inhibit_t ;
struct TYPE_5__ {unsigned int mask; int cond; int mutex; } ;
typedef TYPE_2__ vlc_inhibit_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3 (vlc_inhibit_t *VAR_0, unsigned VAR_1)
{
    vlc_inhibit_sys_t *VAR_2 = VAR_0->p_sys;
    FUNC_1(&VAR_2->mutex);
    VAR_2->mask = VAR_1;
    FUNC_2(&VAR_2->mutex);
    FUNC_0(&VAR_2->cond);
}

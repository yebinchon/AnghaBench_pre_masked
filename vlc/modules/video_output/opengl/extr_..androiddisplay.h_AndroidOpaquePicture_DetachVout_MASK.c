
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_6__ {int b_vd_ref; int lock; int p_dec; } ;
struct TYPE_8__ {TYPE_1__ hw; } ;
typedef TYPE_3__ picture_sys_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(picture_t *VAR_0)
{
    picture_sys_t *VAR_1 = VAR_0->p_sys;

    FUNC_2(&VAR_1->hw.lock);
    VAR_1->hw.b_vd_ref = 0;

    if (!VAR_1->hw.b_vd_ref && !VAR_1->hw.p_dec)
    {
        FUNC_3(&VAR_1->hw.lock);
        FUNC_1(&VAR_1->hw.lock);
        FUNC_0(VAR_1);
    }
    else
        FUNC_3(&VAR_1->hw.lock);
}

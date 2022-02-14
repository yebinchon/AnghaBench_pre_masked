
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_index; int lock; scalar_t__ p_dec; int (* pf_release ) (scalar_t__,unsigned int,int) ;} ;
struct TYPE_5__ {int b_locked; TYPE_1__ hw; } ;
typedef TYPE_2__ picture_sys_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,unsigned int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void
FUNC_4(picture_sys_t *VAR_0, bool VAR_1)
{
    if (!VAR_0->b_locked)
        return;
    FUNC_2(&VAR_0->hw.lock);
    if (VAR_0->hw.i_index >= 0)
    {
        FUNC_0(VAR_0->hw.pf_release && VAR_0->hw.p_dec);
        VAR_0->hw.pf_release(VAR_0->hw.p_dec,
                                (unsigned int) VAR_0->hw.i_index,
                                VAR_1);
        VAR_0->hw.i_index = -1;
    }
    FUNC_3(&VAR_0->hw.lock);
    VAR_0->b_locked = 0;
}

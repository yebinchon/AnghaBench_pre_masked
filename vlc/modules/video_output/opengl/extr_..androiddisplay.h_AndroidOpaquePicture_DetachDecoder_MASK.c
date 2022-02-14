
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_index; int lock; int * p_dec; int b_vd_ref; int (* pf_release ) (int *,unsigned int,int) ;} ;
struct TYPE_6__ {TYPE_1__ hw; } ;
typedef TYPE_2__ picture_sys_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,unsigned int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static inline void
FUNC_6(picture_sys_t *VAR_0)
{
    FUNC_4(&VAR_0->hw.lock);
    if (VAR_0->hw.i_index >= 0)
    {
        FUNC_0(VAR_0->hw.pf_release && VAR_0->hw.p_dec);
        VAR_0->hw.pf_release(VAR_0->hw.p_dec,
                                     (unsigned int) VAR_0->hw.i_index,
                                     0);
        VAR_0->hw.i_index = -1;
    }
    VAR_0->hw.pf_release = ((void*)0);
    VAR_0->hw.p_dec = ((void*)0);

    if (!VAR_0->hw.b_vd_ref && !VAR_0->hw.p_dec)
    {
        FUNC_5(&VAR_0->hw.lock);
        FUNC_3(&VAR_0->hw.lock);
        FUNC_1(VAR_0);
    }
    else
        FUNC_5(&VAR_0->hw.lock);
}

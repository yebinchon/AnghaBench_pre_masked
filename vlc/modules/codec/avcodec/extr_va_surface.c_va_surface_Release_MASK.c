
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int va_pool; int refcount; } ;
typedef TYPE_1__ vlc_va_surface_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;

void FUNC_2(vlc_va_surface_t *VAR_0)
{
    if (FUNC_0(&VAR_0->refcount, 1) != 1)
        return;

    FUNC_1(VAR_0->va_pool);
}

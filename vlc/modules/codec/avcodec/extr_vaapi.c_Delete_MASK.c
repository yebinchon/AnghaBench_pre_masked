
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vlc_va_t ;
struct TYPE_5__ {int va_pool; int vctx; } ;
typedef TYPE_2__ vlc_va_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(vlc_va_t *VAR_0)
{
    vlc_va_sys_t *VAR_1 = VAR_0->sys;

    FUNC_1(VAR_1->vctx);
    FUNC_0(VAR_1->va_pool);
}

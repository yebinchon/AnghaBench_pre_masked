
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int p_surface_handle; int (* pf_unlockAndPost ) (int ) ;} ;
typedef TYPE_1__ NativeSurface ;
typedef int ANativeWindow ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(ANativeWindow *VAR_0)
{
    NativeSurface *VAR_1 = (NativeSurface *)VAR_0;

    VAR_1->pf_unlockAndPost(VAR_1->p_surface_handle);
}

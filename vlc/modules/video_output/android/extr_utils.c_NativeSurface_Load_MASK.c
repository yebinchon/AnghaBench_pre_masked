
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pf_unlockAndPost; scalar_t__ pf_lock2; scalar_t__ pf_lock; } ;
typedef TYPE_1__ NativeSurface ;
typedef scalar_t__ AndroidSurface_unlockAndPost ;
typedef scalar_t__ AndroidSurface_lock2 ;
typedef scalar_t__ AndroidSurface_lock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (char const*,int ) ;
 scalar_t__ FUNC_2 (void*,int ) ;

__attribute__((used)) static inline void *
FUNC_3(const char *VAR_4, NativeSurface *VAR_5)
{
    void *VAR_6 = FUNC_1(VAR_4, VAR_3);
    if (!VAR_6)
        return ((void*)0);

    VAR_5->pf_lock = (AndroidSurface_lock)(FUNC_2(VAR_6, VAR_0));
    VAR_5->pf_lock2 = (AndroidSurface_lock2)(FUNC_2(VAR_6, VAR_1));
    VAR_5->pf_unlockAndPost =
        (AndroidSurface_unlockAndPost)(FUNC_2(VAR_6, VAR_2));

    if ((VAR_5->pf_lock || VAR_5->pf_lock2) && VAR_5->pf_unlockAndPost)
        return VAR_6;

    FUNC_0(VAR_6);
    return ((void*)0);
}

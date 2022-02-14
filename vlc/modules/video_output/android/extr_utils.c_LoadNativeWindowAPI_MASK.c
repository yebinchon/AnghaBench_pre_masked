
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* setBuffersGeometry; void* unlockAndPost; void* winLock; } ;
struct TYPE_6__ {void* p_anw_dl; TYPE_1__ anw_api; void* pf_winRelease; void* pf_winFromSurface; } ;
typedef TYPE_2__ AWindowHandler ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (char*,int ) ;
 void* FUNC_3 (void*,char*) ;

__attribute__((used)) static void
FUNC_4(AWindowHandler *VAR_1)
{
    void *VAR_2 = FUNC_2("libandroid.so", VAR_0);
    if (!VAR_2)
    {
        FUNC_0(VAR_1);
        return;
    }

    VAR_1->pf_winFromSurface = FUNC_3(VAR_2, "ANativeWindow_fromSurface");
    VAR_1->pf_winRelease = FUNC_3(VAR_2, "ANativeWindow_release");
    VAR_1->anw_api.winLock = FUNC_3(VAR_2, "ANativeWindow_lock");
    VAR_1->anw_api.unlockAndPost = FUNC_3(VAR_2, "ANativeWindow_unlockAndPost");
    VAR_1->anw_api.setBuffersGeometry = FUNC_3(VAR_2, "ANativeWindow_setBuffersGeometry");

    if (VAR_1->pf_winFromSurface && VAR_1->pf_winRelease
     && VAR_1->anw_api.winLock && VAR_1->anw_api.unlockAndPost
     && VAR_1->anw_api.setBuffersGeometry)
    {
        VAR_1->p_anw_dl = VAR_2;
    }
    else
    {
        FUNC_1(VAR_2);
        FUNC_0(VAR_1);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * setBuffersGeometry; int unlockAndPost; int winLock; } ;
struct TYPE_5__ {TYPE_1__ anw_api; int pf_winRelease; int pf_winFromSurface; } ;
typedef TYPE_2__ AWindowHandler ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0(AWindowHandler *VAR_4)
{
    VAR_4->pf_winFromSurface = VAR_0;
    VAR_4->pf_winRelease = VAR_2;
    VAR_4->anw_api.winLock = VAR_1;
    VAR_4->anw_api.unlockAndPost = VAR_3;
    VAR_4->anw_api.setBuffersGeometry = ((void*)0);
}

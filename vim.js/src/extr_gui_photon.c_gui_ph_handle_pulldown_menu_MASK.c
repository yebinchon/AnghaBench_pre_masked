
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int submenu_id; } ;
typedef TYPE_1__ vimmenu_T ;
typedef int PtWidget_t ;
typedef int PtCallbackInfo_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(
 PtWidget_t *VAR_1,
 void *VAR_2,
 PtCallbackInfo_t *VAR_3)
{
    if (VAR_2 != ((void*)0))
    {
 vimmenu_T *VAR_4 = (vimmenu_T *) VAR_2;

 FUNC_0(VAR_4->submenu_id, ((void*)0));
 FUNC_1(VAR_4->submenu_id);
    }

    return VAR_0;
}

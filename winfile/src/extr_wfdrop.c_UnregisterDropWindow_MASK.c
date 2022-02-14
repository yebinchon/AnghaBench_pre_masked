
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct IUnknown {int dummy; } ;
struct TYPE_6__ {TYPE_1__* lpVtbl; } ;
struct TYPE_5__ {int (* Release ) (TYPE_2__*) ;} ;
typedef TYPE_2__ IDropTarget ;
typedef int HWND ;


 int FUNC_0 (struct IUnknown*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(HWND VAR_2, IDropTarget *VAR_3)
{

 FUNC_1(VAR_2);


 FUNC_0((struct IUnknown*)VAR_3, VAR_0, VAR_1);


 VAR_3->lpVtbl->Release(VAR_3);
}

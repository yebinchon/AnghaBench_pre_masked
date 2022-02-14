
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int use_ex; int * hdll; int obj; } ;
typedef TYPE_1__ d3d9_handle_t ;
typedef int IDirect3DDevice9 ;
typedef int HRESULT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(d3d9_handle_t *VAR_2, IDirect3DDevice9 *VAR_3)
{
    HRESULT VAR_4 = FUNC_1(VAR_3, &VAR_2->obj);
    if (FUNC_2(FUNC_0(VAR_4)))
        return VAR_0;
    VAR_2->hdll = ((void*)0);
    VAR_2->use_ex = 0;
    return VAR_1;
}

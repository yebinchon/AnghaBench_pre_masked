
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int use_ex; int * hdll; int * obj; } ;
typedef TYPE_1__ d3d9_handle_t ;
typedef int IDirect3D9Ex ;
typedef int IDirect3D9 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,void**) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

void FUNC_4(d3d9_handle_t *VAR_1, IDirect3D9 *VAR_2)
{
    VAR_1->obj = VAR_2;
    FUNC_1( VAR_1->obj );
    VAR_1->hdll = ((void*)0);

    void *VAR_3 = ((void*)0);
    VAR_1->use_ex = FUNC_3(FUNC_2(VAR_2, &VAR_0, &VAR_3));
    if (VAR_1->use_ex && VAR_3)
        FUNC_0((IDirect3D9Ex*) VAR_3);
}

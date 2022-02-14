
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int filter_t ;
typedef int IDirect3DSurface9 ;
typedef int D3DSURFACE_DESC ;
typedef int D3DLOCKED_RECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *,int ) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(filter_t *VAR_1, IDirect3DSurface9 *VAR_2,
                    D3DLOCKED_RECT *VAR_3, D3DSURFACE_DESC *VAR_4)
{
    if (FUNC_4(FUNC_0( FUNC_1(VAR_2, VAR_4))))
        return 0;


    if (FUNC_0(FUNC_2(VAR_2, VAR_3, ((void*)0), VAR_0))) {
        FUNC_3(VAR_1, "Failed to lock surface");
        return 0;
    }

    return 1;
}

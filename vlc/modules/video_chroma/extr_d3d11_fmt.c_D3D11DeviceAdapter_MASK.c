
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IDXGIDevice ;
typedef int IDXGIAdapter ;
typedef int ID3D11Device ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

IDXGIAdapter *FUNC_4(ID3D11Device *VAR_1)
{
    IDXGIDevice *VAR_2 = ((void*)0);
    HRESULT VAR_3 = FUNC_1(VAR_1, &VAR_0, (void **)&VAR_2);
    if (FUNC_0(VAR_3)) {
        return ((void*)0);
    }

    IDXGIAdapter *VAR_4;
    VAR_3 = FUNC_2(VAR_2, &VAR_4);
    FUNC_3(VAR_2);
    if (FUNC_0(VAR_3)) {
        return ((void*)0);
    }
    return VAR_4;
}

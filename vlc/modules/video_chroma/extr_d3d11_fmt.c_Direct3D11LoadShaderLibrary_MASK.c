
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * HINSTANCE ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int,int ,int) ;

__attribute__((used)) static HINSTANCE FUNC_3(void)
{
    HINSTANCE VAR_0 = ((void*)0);

    for (int VAR_1 = 47; VAR_1 > 41; --VAR_1) {
        WCHAR VAR_2[19];
        FUNC_2(VAR_2, 19, FUNC_1("D3DCOMPILER_%d.dll"), VAR_1);
        VAR_0 = FUNC_0(VAR_2);
        if (VAR_0) break;
    }
    return VAR_0;
}

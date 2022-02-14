
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * HINSTANCE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,int ,int) ;

__attribute__((used)) static HINSTANCE FUNC_4(void)
{
    HINSTANCE VAR_0 = ((void*)0);
    for (int VAR_1 = 43; VAR_1 > 23; --VAR_1) {
        WCHAR VAR_2[16];
        FUNC_3(VAR_2, FUNC_0(VAR_2), FUNC_2("D3dx9_%d.dll"), VAR_1);
        VAR_0 = FUNC_1(VAR_2);
        if (VAR_0)
            break;
    }
    return VAR_0;
}

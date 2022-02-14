
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IMMEndpoint ;
typedef int IMMDevice ;
typedef int HRESULT ;
typedef scalar_t__ EDataFlow ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *,scalar_t__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_5(IMMDevice *VAR_3)
{
    void *VAR_4;

    if (FUNC_0(FUNC_2(VAR_3, &VAR_1, &VAR_4)))
        return 0;

    IMMEndpoint *VAR_5 = VAR_4;
    EDataFlow VAR_6;
    HRESULT VAR_7 = FUNC_3(VAR_5, &VAR_6);

    FUNC_4(VAR_5);
    if (FUNC_0(VAR_7) || VAR_6 != VAR_2)
        return 0;

    DWORD VAR_8;
    VAR_7 = FUNC_1(VAR_3, &VAR_8);
    return !FUNC_0(VAR_7) && VAR_8 == VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IMMEndpoint ;
typedef int IMMDevice ;
typedef int EDataFlow ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;

__attribute__((used)) static EDataFlow FUNC_5(IMMDevice *VAR_2)
{
    void *VAR_3;

    if (FUNC_0(FUNC_1(VAR_2, &VAR_0, &VAR_3)))
        return 0;

    IMMEndpoint *VAR_4 = VAR_3;
    EDataFlow VAR_5;

    if (FUNC_4(FUNC_2(VAR_4, &VAR_5)))
        VAR_5 = VAR_1;
    FUNC_3(VAR_4);
    return VAR_5;
}

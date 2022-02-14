
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pwszVal; } ;
typedef TYPE_1__ PROPVARIANT ;
typedef int IPropertyStore ;
typedef int IMMDevice ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int **) ;
 int FUNC_3 (int *,int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static char *FUNC_8(IMMDevice *VAR_2)
{
    IPropertyStore *VAR_3;
    PROPVARIANT VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_2(VAR_2, VAR_1, &VAR_3);
    if (FUNC_0(VAR_5))
        return ((void*)0);

    char *VAR_6 = ((void*)0);
    FUNC_6(&VAR_4);
    VAR_5 = FUNC_3(VAR_3, &VAR_0, &VAR_4);
    if (FUNC_7(VAR_5))
    {
        VAR_6 = FUNC_1(VAR_4.pwszVal);
        FUNC_5(&VAR_4);
    }

    FUNC_4(VAR_3);

    return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(vlc_object_t *VAR_1)
{
    HRESULT VAR_2 = FUNC_0(((void*)0), VAR_0);
    if (FUNC_3(FUNC_1(VAR_2)))
    {
        FUNC_2 (VAR_1, "cannot initialize COM (error 0x%lX)", VAR_2);
        return -1;
    }
    return 0;
}

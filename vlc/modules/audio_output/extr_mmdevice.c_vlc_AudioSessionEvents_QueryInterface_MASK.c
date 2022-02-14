
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int STDMETHODIMP ;
typedef int REFIID ;
typedef int IAudioSessionEvents ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static STDMETHODIMP
FUNC_2(IAudioSessionEvents *VAR_4, REFIID VAR_5,
                                      void **VAR_6)
{
    if (FUNC_1(VAR_5, &VAR_2)
     || FUNC_1(VAR_5, &VAR_1))
    {
        *VAR_6 = VAR_4;
        FUNC_0(VAR_4);
        return VAR_3;
    }
    else
    {
       *VAR_6 = ((void*)0);
        return VAR_0;
    }
}

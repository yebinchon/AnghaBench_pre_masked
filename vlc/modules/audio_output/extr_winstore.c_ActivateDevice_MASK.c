
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REFIID ;
typedef int PROPVARIANT ;
typedef int IAudioClient ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_2(void *VAR_4, REFIID VAR_5, PROPVARIANT *VAR_6,
                              void **restrict VAR_7)
{
    IAudioClient *VAR_8 = VAR_4;

    if (!FUNC_1(VAR_5, &VAR_2))
        return VAR_1;
    if (VAR_6 != ((void*)0) || VAR_8 == ((void*)0) )
        return VAR_0;

    FUNC_0(VAR_8);
    *VAR_7 = VAR_4;

    return VAR_3;
}

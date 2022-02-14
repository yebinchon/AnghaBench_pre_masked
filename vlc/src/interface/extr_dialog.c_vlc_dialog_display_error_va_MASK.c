
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int vlc_dialog_provider ;
typedef int va_list ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char const*,char const*,int ) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (int *,int ,char const*,int ) ;

int
FUNC_5(vlc_object_t *VAR_3, const char *VAR_4,
                            const char *VAR_5, va_list VAR_6)
{
    FUNC_0(VAR_3 != ((void*)0) && VAR_4 != ((void*)0) && VAR_5 != ((void*)0));
    int VAR_7;
    vlc_dialog_provider *VAR_8 = FUNC_2(VAR_3, 1);

    if (VAR_8 != ((void*)0))
        VAR_7 = FUNC_1(VAR_8, VAR_4, VAR_5, VAR_6);
    else
        VAR_7 = VAR_0;

    if (VAR_7 != VAR_2)
    {
        FUNC_3(VAR_3, "%s", VAR_4);
        FUNC_4(VAR_3, VAR_1, VAR_5, VAR_6);
    }
    return VAR_7;
}

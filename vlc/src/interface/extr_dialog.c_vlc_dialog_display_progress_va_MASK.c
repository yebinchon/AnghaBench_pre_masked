
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int vlc_dialog_provider ;
typedef int vlc_dialog_id ;
typedef int va_list ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int **,int,float,char const*,char const*,char const*,int ) ;
 int * FUNC_2 (int *,int) ;

vlc_dialog_id *
FUNC_3(vlc_object_t *VAR_1, bool VAR_2,
                               float VAR_3, const char *VAR_4,
                               const char *VAR_5, const char *VAR_6,
                               va_list VAR_7)
{
    FUNC_0(VAR_1 != ((void*)0) && VAR_5 != ((void*)0) && VAR_6 != ((void*)0));

    vlc_dialog_provider *VAR_8 = FUNC_2(VAR_1, 1);
    if (VAR_8 == ((void*)0))
        return ((void*)0);
    vlc_dialog_id *VAR_9;
    int VAR_10 = FUNC_1(VAR_8, &VAR_9, VAR_2,
                                    VAR_3, VAR_4, VAR_5, VAR_6,
                                    VAR_7);
    return VAR_10 == VAR_0 ? VAR_9 : ((void*)0);
}

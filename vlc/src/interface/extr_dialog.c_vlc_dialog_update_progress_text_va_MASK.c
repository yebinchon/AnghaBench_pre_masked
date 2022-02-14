
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int vlc_dialog_id ;
typedef int va_list ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,float,char*) ;
 int FUNC_2 (char**,char const*,int ) ;

int
FUNC_3(vlc_object_t *VAR_1, vlc_dialog_id *VAR_2,
                                   float VAR_3, const char *VAR_4,
                                   va_list VAR_5)
{
    FUNC_0(VAR_4 != ((void*)0));

    char *VAR_6;
    if (FUNC_2(&VAR_6, VAR_4, VAR_5) == -1)
        return VAR_0;
    return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_6);
}

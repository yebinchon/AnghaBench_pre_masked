
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_dialog_provider ;
typedef int vlc_dialog_id ;
typedef int va_list ;
struct TYPE_3__ {char* psz_username; char* psz_password; int b_store; } ;
struct TYPE_4__ {TYPE_1__ login; } ;
struct dialog_answer {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int **,char const*,int ,char const*,char const*,int ) ;
 int FUNC_2 (int *,int *,int ,struct dialog_answer*) ;
 int * FUNC_3 (int *,int) ;

int
FUNC_4(vlc_object_t *VAR_2, char **VAR_3,
                         char **VAR_4, bool *VAR_5,
                         const char *VAR_6,
                         const char *VAR_7, const char *VAR_8, va_list VAR_9)
{
    FUNC_0(VAR_2 != ((void*)0) && VAR_3 != ((void*)0) && VAR_4 != ((void*)0)
        && VAR_8 != ((void*)0) && VAR_7 != ((void*)0));

    vlc_dialog_provider *VAR_10 = FUNC_3(VAR_2, 1);
    if (VAR_10 == ((void*)0))
        return VAR_1;

    vlc_dialog_id *VAR_11;
    int VAR_12 = FUNC_1(VAR_10, &VAR_11, VAR_6,
                                        VAR_5 != ((void*)0), VAR_7, VAR_8, VAR_9);
    if (VAR_12 < 0 || VAR_11 == ((void*)0))
        return VAR_12;

    struct dialog_answer VAR_13;
    VAR_12 = FUNC_2(VAR_10, VAR_11, VAR_0, &VAR_13);
    if (VAR_12 <= 0)
        return VAR_12;

    *VAR_3 = VAR_13.u.login.psz_username;
    *VAR_4 = VAR_13.u.login.psz_password;
    if (VAR_5 != ((void*)0))
        *VAR_5 = VAR_13.u.login.b_store;

    return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_dialog_id ;
struct cb_answer {int * psz_username; scalar_t__ b_dismiss; } ;


 int FUNC_0 (char*,char const*,char const*,char const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,char*,int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, vlc_dialog_id *VAR_1, const char *VAR_2,
                 const char *VAR_3, const char *VAR_4,
                 bool VAR_5)
{
    struct cb_answer *VAR_6 = VAR_0;
    FUNC_0("login dialog: title: '%s', text: '%s', "
           "default_username: '%s', b_ask_store: %d\n",
           VAR_2, VAR_3, VAR_4, VAR_5);

    if (VAR_6->b_dismiss)
        FUNC_1(VAR_1);
    else if (VAR_6->psz_username != ((void*)0))
        FUNC_2(VAR_1, VAR_6->psz_username, "", 0);
}

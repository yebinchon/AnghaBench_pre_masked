
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
struct vlc_playlist_sort_criterion {int order; int key; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct vlc_playlist_sort_criterion*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char const*,int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static int FUNC_11( lua_State *VAR_3 )
{
    vlc_playlist_t *VAR_4 = FUNC_9(VAR_3);

    const char *VAR_5 = FUNC_0(VAR_3, 1);

    int VAR_6;
    if (!FUNC_3(VAR_5, "random"))
    {

        FUNC_4(VAR_4);
        FUNC_5(VAR_4);
        FUNC_7(VAR_4);
        VAR_6 = VAR_2;
    }
    else
    {
        struct vlc_playlist_sort_criterion VAR_7;
        if (!FUNC_8(VAR_5, &VAR_7.key))
            return FUNC_1(VAR_3, "Invalid search key.");
        VAR_7.order = FUNC_2(VAR_3, 2, 0)
                        ? VAR_1
                        : VAR_0;

        FUNC_4(VAR_4);
        VAR_6 = FUNC_6(VAR_4, &VAR_7, 1);
        FUNC_7(VAR_4);
    }
    return FUNC_10(VAR_3, VAR_6);
}

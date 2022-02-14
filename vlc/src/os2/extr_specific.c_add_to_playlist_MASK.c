
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int input_item_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char const* const*,int ) ;
 int * FUNC_1 (char const*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(vlc_playlist_t *VAR_1, const char *VAR_2,
                            bool VAR_3, int VAR_4,
                            const char *const *VAR_5)
{
    input_item_t *VAR_6 = FUNC_1(VAR_2, ((void*)0));
    if (!VAR_6)
        return;
    FUNC_0(VAR_6, VAR_4, VAR_5,
                          VAR_0);

    FUNC_4(VAR_1);
    FUNC_3(VAR_1, VAR_6);
    if (VAR_3)
        FUNC_5(VAR_1);
    FUNC_6(VAR_1);
    FUNC_2(VAR_6);
}

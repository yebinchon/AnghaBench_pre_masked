
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int vlc_object_t ;
typedef int lua_State ;
typedef int input_item_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,size_t) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 int * FUNC_14 (int *,int *) ;

__attribute__((used)) static int FUNC_15(lua_State *VAR_1, bool VAR_2)
{
    vlc_object_t *VAR_3 = FUNC_13(VAR_1);
    vlc_playlist_t *VAR_4 = FUNC_12(VAR_1);
    int VAR_5 = 0;


    if (!FUNC_1(VAR_1, -1))
    {
        FUNC_6(VAR_3, "Playlist should be a table.");
        return 0;
    }

    FUNC_5(VAR_1);

    FUNC_9(VAR_4);


    while (FUNC_2(VAR_1, -2))
    {
        input_item_t *VAR_6 = FUNC_14(VAR_3, VAR_1);
        if (VAR_6 != ((void*)0))
        {
            int VAR_7 = FUNC_7(VAR_4, VAR_6);
            if (VAR_7 == VAR_0)
            {
                VAR_5++;
                if (VAR_2)
                {
                    size_t VAR_8 = FUNC_8(VAR_4) - 1;
                    FUNC_10(VAR_4, VAR_8);
                }
            }
            FUNC_0(VAR_6);
        }

        FUNC_3(VAR_1, 1);
    }


    FUNC_11(VAR_4);

    FUNC_4(VAR_1, VAR_5);
    return 1;
}

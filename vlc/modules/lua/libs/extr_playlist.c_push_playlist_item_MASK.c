
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_playlist_item_t ;
typedef int lua_State ;
struct TYPE_5__ {char* psz_uri; scalar_t__ i_duration; } ;
typedef TYPE_1__ input_item_t ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int,char*) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;
 TYPE_1__* FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(lua_State *VAR_0, vlc_playlist_item_t *VAR_1)
{
    FUNC_2(VAR_0);

    FUNC_3(VAR_0, FUNC_9(VAR_1));
    FUNC_6(VAR_0, -2, "id");

    input_item_t *VAR_2 = FUNC_10(VAR_1);



    char *VAR_3 = FUNC_1(VAR_2);
    FUNC_5(VAR_0, VAR_3);
    FUNC_0(VAR_3);
    FUNC_6(VAR_0, -2, "name");

    FUNC_5(VAR_0, VAR_2->psz_uri);
    FUNC_6(VAR_0, -2, "path");

    if( VAR_2->i_duration < 0 )
        FUNC_4(VAR_0, -1);
    else
        FUNC_4(VAR_0, FUNC_8(VAR_2->i_duration));
    FUNC_6(VAR_0, -2, "duration");

    FUNC_7(VAR_0, VAR_2);
}

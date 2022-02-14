
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
struct vlc_player_input {int dummy; } ;


 int VAR_0 ;
 struct vlc_player_input* FUNC_0 (int *) ;
 int FUNC_1 (struct vlc_player_input*) ;
 int FUNC_2 (struct vlc_player_input*) ;
 int FUNC_3 (int *,struct vlc_player_input*,int ,int ,int ) ;

void
FUNC_4(vlc_player_t *VAR_1)
{
    struct vlc_player_input *VAR_2 = FUNC_0(VAR_1);
    if (!VAR_2)
        return;
    FUNC_3(VAR_1, VAR_2,
                                FUNC_2(VAR_2),
                                FUNC_1(VAR_2),
                                VAR_0);
}

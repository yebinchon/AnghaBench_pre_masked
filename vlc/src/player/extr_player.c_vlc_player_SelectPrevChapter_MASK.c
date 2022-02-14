
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
struct vlc_player_input {int thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int *) ;
 struct vlc_player_input* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

void
FUNC_4(vlc_player_t *VAR_2)
{
    struct vlc_player_input *VAR_3 = FUNC_2(VAR_2);
    if (!VAR_3)
        return;
    int VAR_4 = FUNC_1(VAR_3->thread, VAR_0,
                                ((void*)0));
    if (VAR_4 == VAR_1)
        FUNC_3(VAR_2, FUNC_0("Previous chapter"));
}

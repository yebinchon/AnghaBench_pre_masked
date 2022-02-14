
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
typedef int vlc_object_t ;
struct vlc_player_input {scalar_t__ thread; } ;


 scalar_t__ FUNC_0 (scalar_t__,char*) ;
 struct vlc_player_input* FUNC_1 (int *) ;

vlc_object_t *
FUNC_2(vlc_player_t *VAR_0)
{
    struct vlc_player_input *VAR_1 = FUNC_1(VAR_0);
    return VAR_1 && FUNC_0(VAR_1->thread, "controls") != 0 ?
           (vlc_object_t*) VAR_1->thread : ((void*)0);
}

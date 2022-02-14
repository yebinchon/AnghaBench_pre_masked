
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
struct vlc_player_title {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *,struct vlc_player_title const*) ;
 int FUNC_1 (int *,int) ;

void
FUNC_2(vlc_player_t *VAR_0,
                       const struct vlc_player_title *VAR_1)
{
    ssize_t VAR_2 = FUNC_0(VAR_0, VAR_1);
    if (VAR_2 != -1)
        FUNC_1(VAR_0, VAR_2);
}

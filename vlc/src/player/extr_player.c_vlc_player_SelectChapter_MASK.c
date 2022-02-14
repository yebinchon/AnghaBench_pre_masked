
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
struct vlc_player_title {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct vlc_player_title const*) ;
 int FUNC_2 (int *,size_t) ;

void
FUNC_3(vlc_player_t *VAR_0,
                         const struct vlc_player_title *VAR_1,
                         size_t VAR_2)
{
    ssize_t VAR_3 = FUNC_1(VAR_0, VAR_1);
    if (VAR_3 != -1 && VAR_3 == FUNC_0(VAR_0))
        FUNC_2(VAR_0, VAR_2);
}

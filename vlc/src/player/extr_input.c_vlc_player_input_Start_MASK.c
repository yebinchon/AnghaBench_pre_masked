
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_player_input {int started; int thread; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

int
FUNC_1(struct vlc_player_input *VAR_1)
{
    int VAR_2 = FUNC_0(VAR_1->thread);
    if (VAR_2 != VAR_0)
        return VAR_2;
    VAR_1->started = 1;
    return VAR_2;
}

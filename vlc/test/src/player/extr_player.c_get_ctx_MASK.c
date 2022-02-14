
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
struct ctx {int * player; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static struct ctx *
FUNC_1(vlc_player_t *VAR_0, void *VAR_1)
{
    FUNC_0(VAR_1);
    struct ctx *VAR_2 = VAR_1;
    FUNC_0(VAR_0 == VAR_2->player);
    return VAR_2;
}

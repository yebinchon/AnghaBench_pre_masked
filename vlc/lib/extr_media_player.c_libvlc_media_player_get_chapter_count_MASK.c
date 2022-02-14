
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_player_t ;
struct vlc_player_title {scalar_t__ chapter_count; } ;
struct TYPE_3__ {int * player; } ;
typedef TYPE_1__ libvlc_media_player_t ;


 struct vlc_player_title* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3( libvlc_media_player_t *VAR_0 )
{
    vlc_player_t *VAR_1 = VAR_0->player;
    FUNC_1(VAR_1);

    const struct vlc_player_title *VAR_2 = FUNC_0(VAR_1);
    int VAR_3 = VAR_2 ? (int) VAR_2->chapter_count : -1;

    FUNC_2(VAR_1);
    return VAR_3;
}

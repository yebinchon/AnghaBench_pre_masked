
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_player_t ;
struct vlc_player_title {char* name; } ;
struct TYPE_6__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ intf_thread_t ;
struct TYPE_5__ {int playlist; } ;


 int FUNC_0 (TYPE_2__*,char*,char*) ;
 struct vlc_player_title* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(intf_thread_t *VAR_0)
{
    vlc_player_t *VAR_1 = FUNC_4(VAR_0->p_sys->playlist);
    const struct vlc_player_title *VAR_2;

    FUNC_2(VAR_1);
    VAR_2 = FUNC_1(VAR_1);
    FUNC_0(VAR_0, "%s", (VAR_2 != ((void*)0)) ? VAR_2->name : "");
    FUNC_3(VAR_1);
}

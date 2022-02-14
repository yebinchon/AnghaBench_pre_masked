
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_playlist_t ;
typedef int vlc_player_t ;
struct TYPE_6__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ intf_thread_t ;
struct TYPE_5__ {int * playlist; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (float,float) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,float) ;
 float FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(intf_thread_t *VAR_1)
{
    vlc_playlist_t *VAR_2 = VAR_1->p_sys->playlist;
    vlc_player_t *VAR_3 = FUNC_8(VAR_2);

    FUNC_6(VAR_3);
    if (FUNC_3(VAR_3))
    {
        float VAR_4 = FUNC_5(VAR_3);
        FUNC_4(VAR_3, FUNC_0(VAR_4, 0.f) ? VAR_4 * 2.f : -VAR_4);
    }
    else
        FUNC_1(FUNC_2(VAR_1), "key-action",
                       VAR_0);
    FUNC_7(VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_playlist_t ;
struct TYPE_7__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ intf_thread_t ;
struct TYPE_6__ {int * playlist; } ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(intf_thread_t *VAR_0)
{
    vlc_playlist_t *VAR_1 = VAR_0->p_sys->playlist;

    FUNC_0(VAR_0, "+----[ Playlist ]");
    FUNC_2(VAR_1);
    FUNC_1(VAR_0, VAR_1);
    FUNC_3(VAR_1);
    FUNC_0(VAR_0, "+----[ End of playlist ]");
}

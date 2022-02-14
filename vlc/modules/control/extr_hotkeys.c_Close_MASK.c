
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_player_t ;
typedef int vlc_object_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_7__ {int player_listener; int playlist; } ;
typedef TYPE_2__ intf_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(vlc_object_t *VAR_1)
{
    intf_thread_t *VAR_2 = (intf_thread_t *)VAR_1;
    intf_sys_t *VAR_3 = VAR_2->p_sys;
    vlc_player_t *VAR_4 = FUNC_6(VAR_3->playlist);
    FUNC_3(VAR_4);
    FUNC_4(VAR_4, VAR_3->player_listener);
    FUNC_5(VAR_4);
    FUNC_1(FUNC_2(VAR_2), "key-action", VAR_0, VAR_2);
    FUNC_0(VAR_3);
}

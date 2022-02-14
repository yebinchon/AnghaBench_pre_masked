
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_playlist_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_5__ {int * playlist; } ;
typedef TYPE_2__ intf_sys_t ;
typedef int input_item_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (char*,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 char* FUNC_4 (char const*,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(intf_thread_t *VAR_0, const char *VAR_1)
{
    char *VAR_2 = FUNC_4(VAR_1, ((void*)0));
    if (VAR_2 == ((void*)0))
        return;

    input_item_t *VAR_3 = FUNC_1(VAR_2, ((void*)0));
    FUNC_0(VAR_2);
    if (FUNC_3(VAR_3 == ((void*)0)))
        return;

    intf_sys_t *VAR_4 = VAR_0->p_sys;
    vlc_playlist_t *VAR_5 = VAR_4->playlist;
    FUNC_6(VAR_5);
    FUNC_5(VAR_5, VAR_3);
    FUNC_7(VAR_5);

    FUNC_2(VAR_3);
}

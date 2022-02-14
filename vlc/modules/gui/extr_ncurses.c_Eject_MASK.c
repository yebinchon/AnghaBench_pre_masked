
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_player_t ;
typedef int intf_thread_t ;
struct TYPE_3__ {char* psz_name; } ;
typedef TYPE_1__ input_item_t ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(intf_thread_t *VAR_0, vlc_player_t *VAR_1)
{
    char *VAR_2, *VAR_3;


    FUNC_5(VAR_1);
    bool VAR_4 = FUNC_4(VAR_1);
    FUNC_6(VAR_1);
    if (VAR_4)
        return;

    FUNC_5(VAR_1);
    input_item_t *VAR_5 = FUNC_3(VAR_1);
    FUNC_6(VAR_1);
    if (!VAR_5)
        return;
    VAR_3 = VAR_5->psz_name;
    VAR_2 = VAR_3 ? FUNC_0(VAR_3) : ((void*)0);

    if (VAR_2) {
        FUNC_2(VAR_0, VAR_2);
        FUNC_1(VAR_2);
    }
}

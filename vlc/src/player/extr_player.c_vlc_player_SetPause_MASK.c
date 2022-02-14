
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_int; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int vlc_player_t ;
struct vlc_player_input {int thread; int started; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;
 struct vlc_player_input* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(vlc_player_t *VAR_6, bool VAR_7)
{
    struct vlc_player_input *VAR_8 = FUNC_1(VAR_6);

    if (!VAR_8 || !VAR_8->started)
        return;

    vlc_value_t VAR_9 = { .i_int = VAR_7 ? VAR_3 : VAR_4 };
    int VAR_10 = FUNC_0(VAR_8->thread, VAR_0,
                                      &VAR_9);

    if (VAR_10 == VAR_5)
        FUNC_2(VAR_6, VAR_7 ? VAR_1 : VAR_2);
}

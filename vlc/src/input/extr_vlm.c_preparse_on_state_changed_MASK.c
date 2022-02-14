
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_2__ {int p_sem; } ;
typedef TYPE_1__ preparse_data_t ;
typedef enum vlc_player_state { ____Placeholder_vlc_player_state } vlc_player_state ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(vlc_player_t *VAR_1,
                                      enum vlc_player_state VAR_2, void *VAR_3)
{
    FUNC_0(VAR_1);
    preparse_data_t *VAR_4 = VAR_3;

    if (VAR_2 == VAR_0)
        FUNC_1(VAR_4->p_sem);
}

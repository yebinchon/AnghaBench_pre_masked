
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_2__ {int p_sem; scalar_t__ b_mux; } ;
typedef TYPE_1__ preparse_data_t ;
typedef int input_item_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(vlc_player_t *VAR_0,
                                           input_item_t *VAR_1, void *VAR_2)
{
    FUNC_0(VAR_0); FUNC_0(VAR_1);
    preparse_data_t *VAR_3 = VAR_2;

    if (VAR_3->b_mux)
        FUNC_1(VAR_3->p_sem);
}

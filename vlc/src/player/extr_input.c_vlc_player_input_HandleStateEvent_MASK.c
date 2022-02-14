
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
struct vlc_player_input {int error; int player; int started; } ;
typedef int input_state_e ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,struct vlc_player_input*) ;
 int FUNC_3 (struct vlc_player_input*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct vlc_player_input *VAR_7,
                                  input_state_e VAR_8, vlc_tick_t VAR_9)
{
    switch (VAR_8)
    {
        case 130:
            FUNC_3(VAR_7, VAR_3,
                                         VAR_5);
            break;
        case 128:
            FUNC_3(VAR_7, VAR_2,
                                         VAR_9);
            break;
        case 129:
            FUNC_3(VAR_7, VAR_1,
                                         VAR_9);
            break;
        case 132:
            FUNC_3(VAR_7, VAR_4,
                                         VAR_5);
            FUNC_2(VAR_7->player, VAR_7);
            break;
        case 131:

            if (VAR_7->started)
            {

                VAR_7->error = VAR_0;
                FUNC_1(VAR_7->player, VAR_6, VAR_7->error);
            }
            break;
        default:
            FUNC_0();
    }
}

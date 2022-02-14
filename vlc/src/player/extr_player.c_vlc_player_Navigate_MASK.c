
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
struct vlc_player_input {int thread; } ;
typedef enum vlc_player_nav { ____Placeholder_vlc_player_nav } vlc_player_nav ;
typedef enum input_control_e { ____Placeholder_input_control_e } input_control_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 int FUNC_0 (int ,int,int *) ;
 int FUNC_1 () ;
 struct vlc_player_input* FUNC_2 (int *) ;

void
FUNC_3(vlc_player_t *VAR_7, enum vlc_player_nav VAR_8)
{
    struct vlc_player_input *VAR_9 = FUNC_2(VAR_7);

    if (!VAR_9)
        return;

    enum input_control_e VAR_10;
    switch (VAR_8)
    {
        case 134:
            VAR_10 = VAR_0;
            break;
        case 128:
            VAR_10 = VAR_6;
            break;
        case 133:
            VAR_10 = VAR_1;
            break;
        case 132:
            VAR_10 = VAR_2;
            break;
        case 129:
            VAR_10 = VAR_5;
            break;
        case 130:
            VAR_10 = VAR_4;
            break;
        case 131:
            VAR_10 = VAR_3;
            break;
        default:
            FUNC_1();
    }
    FUNC_0(VAR_9->thread, VAR_10, ((void*)0));
}

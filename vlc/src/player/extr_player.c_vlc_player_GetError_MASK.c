
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
struct vlc_player_input {int error; } ;
typedef enum vlc_player_error { ____Placeholder_vlc_player_error } vlc_player_error ;


 int VAR_0 ;
 struct vlc_player_input* FUNC_0 (int *) ;

enum vlc_player_error
FUNC_1(vlc_player_t *VAR_1)
{
    struct vlc_player_input *VAR_2 = FUNC_0(VAR_1);
    return VAR_2 ? VAR_2->error : VAR_0;
}

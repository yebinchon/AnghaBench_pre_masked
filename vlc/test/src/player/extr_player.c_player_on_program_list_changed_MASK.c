
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
struct vlc_player_program {int dummy; } ;
struct report_program_list {int action; int prgm; } ;
struct ctx {int dummy; } ;
typedef enum vlc_player_list_action { ____Placeholder_vlc_player_list_action } vlc_player_list_action ;


 int FUNC_0 (int ,struct report_program_list) ;
 int FUNC_1 (int ) ;
 struct ctx* FUNC_2 (int *,void*) ;
 int VAR_0 ;
 int FUNC_3 (struct vlc_player_program const*) ;

__attribute__((used)) static void
FUNC_4(vlc_player_t *VAR_1,
                               enum vlc_player_list_action VAR_2,
                               const struct vlc_player_program *VAR_3,
                               void *VAR_4)
{
    struct ctx *VAR_5 = FUNC_2(VAR_1, VAR_4);
    struct report_program_list VAR_6 = {
        .action = VAR_2,
        .prgm = FUNC_3(VAR_3)
    };
    FUNC_1(VAR_6.prgm);
    FUNC_0(VAR_0, VAR_6);
}

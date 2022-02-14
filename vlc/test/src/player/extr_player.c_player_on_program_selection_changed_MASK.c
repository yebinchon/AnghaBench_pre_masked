
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
struct report_program_selection {int unselected_id; int selected_id; } ;
struct ctx {int dummy; } ;


 int FUNC_0 (int ,struct report_program_selection) ;
 struct ctx* FUNC_1 (int *,void*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(vlc_player_t *VAR_1,
                                    int VAR_2, int VAR_3,
                                    void *VAR_4)
{
    struct ctx *VAR_5 = FUNC_1(VAR_1, VAR_4);
    struct report_program_selection VAR_6 = {
        .unselected_id = VAR_2,
        .selected_id = VAR_3,
    };
    FUNC_0(VAR_0, VAR_6);
}

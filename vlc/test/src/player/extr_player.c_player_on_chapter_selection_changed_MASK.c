
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
struct vlc_player_title {int dummy; } ;
struct vlc_player_chapter {int dummy; } ;
struct report_chapter_selection {size_t title_idx; size_t chapter_idx; } ;
struct ctx {int dummy; } ;


 int FUNC_0 (int ,struct report_chapter_selection) ;
 struct ctx* FUNC_1 (int *,void*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(vlc_player_t *VAR_1,
                                    const struct vlc_player_title *VAR_2,
                                    size_t VAR_3,
                                    const struct vlc_player_chapter *VAR_4,
                                    size_t VAR_5, void *VAR_6)
{
    struct ctx *VAR_7 = FUNC_1(VAR_1, VAR_6);
    struct report_chapter_selection VAR_8 = {
        .title_idx = VAR_3,
        .chapter_idx = VAR_5,
    };
    FUNC_0(VAR_0, VAR_8);
    (void) VAR_2;
    (void) VAR_4;
}

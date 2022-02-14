
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
struct items_moved_report {size_t index; size_t count; size_t target; int state; } ;
struct callback_ctx {int vec_items_moved; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,struct items_moved_report) ;

__attribute__((used)) static void
FUNC_2(vlc_playlist_t *VAR_0, size_t VAR_1, size_t VAR_2,
                        size_t VAR_3, void *VAR_4)
{
    struct callback_ctx *VAR_5 = VAR_4;

    struct items_moved_report VAR_6;
    VAR_6.index = VAR_1;
    VAR_6.count = VAR_2;
    VAR_6.target = VAR_3;
    FUNC_0(&VAR_6.state, VAR_0);
    FUNC_1(&VAR_5->vec_items_moved, VAR_6);
}

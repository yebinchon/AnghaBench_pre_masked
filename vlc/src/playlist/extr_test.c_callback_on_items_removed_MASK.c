
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
struct items_removed_report {size_t index; size_t count; int state; } ;
struct callback_ctx {int vec_items_removed; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,struct items_removed_report) ;

__attribute__((used)) static void
FUNC_2(vlc_playlist_t *VAR_0, size_t VAR_1, size_t VAR_2,
                          void *VAR_3)
{
    struct callback_ctx *VAR_4 = VAR_3;

    struct items_removed_report VAR_5;
    VAR_5.index = VAR_1;
    VAR_5.count = VAR_2;
    FUNC_0(&VAR_5.state, VAR_0);
    FUNC_1(&VAR_4->vec_items_removed, VAR_5);
}

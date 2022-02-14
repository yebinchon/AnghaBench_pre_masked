
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int vlc_playlist_item_t ;
struct items_added_report {size_t index; size_t count; int state; } ;
struct callback_ctx {int vec_items_added; } ;


 int FUNC_0 (int * const*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,struct items_added_report) ;

__attribute__((used)) static void
FUNC_3(vlc_playlist_t *VAR_0, size_t VAR_1,
                        vlc_playlist_item_t *const VAR_2[], size_t VAR_3,
                        void *VAR_4)
{
    FUNC_0(VAR_2);
    struct callback_ctx *VAR_5 = VAR_4;

    struct items_added_report VAR_6;
    VAR_6.index = VAR_1;
    VAR_6.count = VAR_3;
    FUNC_1(&VAR_6.state, VAR_0);
    FUNC_2(&VAR_5->vec_items_added, VAR_6);
}

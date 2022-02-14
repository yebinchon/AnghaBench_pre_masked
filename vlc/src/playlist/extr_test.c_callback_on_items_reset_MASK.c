
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int vlc_playlist_item_t ;
struct items_reset_report {size_t count; int state; } ;
struct callback_ctx {int vec_items_reset; } ;


 int FUNC_0 (int * const*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,struct items_reset_report) ;

__attribute__((used)) static void
FUNC_3(vlc_playlist_t *VAR_0,
                        vlc_playlist_item_t *const VAR_1[], size_t VAR_2,
                        void *VAR_3)
{
    FUNC_0(VAR_1);
    struct callback_ctx *VAR_4 = VAR_3;

    struct items_reset_report VAR_5;
    VAR_5.count = VAR_2;
    FUNC_1(&VAR_5.state, VAR_0);
    FUNC_2(&VAR_4->vec_items_reset, VAR_5);
}

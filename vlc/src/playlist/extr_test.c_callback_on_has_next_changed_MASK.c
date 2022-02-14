
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
struct has_next_changed_report {int has_next; } ;
struct callback_ctx {int vec_has_next_changed; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct has_next_changed_report) ;

__attribute__((used)) static void
FUNC_2(vlc_playlist_t *VAR_0, bool VAR_1,
                             void *VAR_2)
{
    FUNC_0(VAR_0);
    struct callback_ctx *VAR_3 = VAR_2;

    struct has_next_changed_report VAR_4;
    VAR_4.has_next = VAR_1;
    FUNC_1(&VAR_3->vec_has_next_changed, VAR_4);
}

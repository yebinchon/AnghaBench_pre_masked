
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int has_next; int has_prev; int current; } ;
typedef TYPE_1__ vlc_playlist_t ;
struct vlc_playlist_state {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,struct vlc_playlist_state*) ;
 int FUNC_3 (TYPE_1__*,struct vlc_playlist_state*) ;

__attribute__((used)) static void
FUNC_4(vlc_playlist_t *VAR_0, ssize_t VAR_1)
{
    struct vlc_playlist_state VAR_2;
    FUNC_3(VAR_0, &VAR_2);

    VAR_0->current = VAR_1;
    VAR_0->has_prev = FUNC_1(VAR_0);
    VAR_0->has_next = FUNC_0(VAR_0);

    FUNC_2(VAR_0, &VAR_2);
}

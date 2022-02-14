
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int has_next; int has_prev; int current; } ;
typedef TYPE_1__ vlc_playlist_t ;
struct vlc_playlist_state {int has_next; int has_prev; int current; } ;



void
FUNC_0(vlc_playlist_t *VAR_0,
                        struct vlc_playlist_state *VAR_1)
{
    VAR_1->current = VAR_0->current;
    VAR_1->has_prev = VAR_0->has_prev;
    VAR_1->has_next = VAR_0->has_next;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ current; scalar_t__ has_prev; scalar_t__ has_next; } ;
typedef TYPE_1__ vlc_playlist_t ;
struct vlc_playlist_state {scalar_t__ current; scalar_t__ has_prev; scalar_t__ has_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,scalar_t__) ;

void
FUNC_1(vlc_playlist_t *VAR_3,
                                 struct vlc_playlist_state *VAR_4)
{
    if (VAR_4->current != VAR_3->current)
        FUNC_0(VAR_3, VAR_0, VAR_3->current);
    if (VAR_4->has_prev != VAR_3->has_prev)
        FUNC_0(VAR_3, VAR_2, VAR_3->has_prev);
    if (VAR_4->has_next != VAR_3->has_next)
        FUNC_0(VAR_3, VAR_1, VAR_3->has_next);
}

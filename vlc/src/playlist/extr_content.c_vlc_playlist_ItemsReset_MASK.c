
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int size; int data; } ;
struct TYPE_10__ {scalar_t__ order; int current; TYPE_1__ items; int has_next; int has_prev; int randomizer; } ;
typedef TYPE_2__ vlc_playlist_t ;
struct vlc_playlist_state {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*,struct vlc_playlist_state*) ;
 int FUNC_5 (TYPE_2__*,struct vlc_playlist_state*) ;

__attribute__((used)) static void
FUNC_6(vlc_playlist_t *VAR_2)
{
    if (VAR_2->order == VAR_0)
        FUNC_0(&VAR_2->randomizer);

    struct vlc_playlist_state VAR_3;
    FUNC_5(VAR_2, &VAR_3);

    VAR_2->current = -1;
    VAR_2->has_prev = FUNC_2(VAR_2);
    VAR_2->has_next = FUNC_1(VAR_2);

    FUNC_3(VAR_2, VAR_1, VAR_2->items.data,
                   VAR_2->items.size);
    FUNC_4(VAR_2, &VAR_3);
}

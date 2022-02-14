
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__** data; } ;
struct TYPE_14__ {scalar_t__ order; scalar_t__ current; TYPE_1__ items; int has_next; int has_prev; int randomizer; } ;
typedef TYPE_2__ vlc_playlist_t ;
struct TYPE_15__ {int media; } ;
typedef TYPE_3__ vlc_playlist_item_t ;
struct vlc_playlist_state {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_3__**,size_t) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,size_t,TYPE_3__**,size_t) ;
 int FUNC_5 (TYPE_2__*,struct vlc_playlist_state*) ;
 int FUNC_6 (TYPE_2__*,struct vlc_playlist_state*) ;

__attribute__((used)) static void
FUNC_7(vlc_playlist_t *VAR_2, size_t VAR_3, size_t VAR_4)
{
    if (VAR_2->order == VAR_0)
        FUNC_0(&VAR_2->randomizer,
                       &VAR_2->items.data[VAR_3], VAR_4);

    struct vlc_playlist_state VAR_5;
    FUNC_6(VAR_2, &VAR_5);

    if (VAR_2->current >= (ssize_t) VAR_3)
        VAR_2->current += VAR_4;
    VAR_2->has_prev = FUNC_3(VAR_2);
    VAR_2->has_next = FUNC_2(VAR_2);

    vlc_playlist_item_t **VAR_6 = &VAR_2->items.data[VAR_3];
    FUNC_4(VAR_2, VAR_1, VAR_3, VAR_6, VAR_4);
    FUNC_5(VAR_2, &VAR_5);

    for (size_t VAR_7 = VAR_3; VAR_7 < VAR_3 + VAR_4; ++VAR_7)
    {
        vlc_playlist_item_t *VAR_8 = VAR_2->items.data[VAR_7];
        FUNC_1(VAR_2, VAR_8->media);
    }
}

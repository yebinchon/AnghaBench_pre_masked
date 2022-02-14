
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_6__** data; } ;
struct TYPE_12__ {TYPE_1__ items; int has_next; int has_prev; } ;
typedef TYPE_2__ vlc_playlist_t ;
struct vlc_playlist_state {int dummy; } ;
struct TYPE_13__ {int media; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,size_t,TYPE_6__**,int) ;
 int FUNC_4 (TYPE_2__*,struct vlc_playlist_state*) ;
 int FUNC_5 (TYPE_2__*,struct vlc_playlist_state*) ;

__attribute__((used)) static void
FUNC_6(vlc_playlist_t *VAR_1, size_t VAR_2)
{
    struct vlc_playlist_state VAR_3;
    FUNC_5(VAR_1, &VAR_3);

    VAR_1->has_prev = FUNC_2(VAR_1);
    VAR_1->has_next = FUNC_1(VAR_1);

    FUNC_3(VAR_1, VAR_0, VAR_2,
                        &VAR_1->items.data[VAR_2], 1);
    FUNC_4(VAR_1, &VAR_3);

    FUNC_0(VAR_1, VAR_1->items.data[VAR_2]->media);
}

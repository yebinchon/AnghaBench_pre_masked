
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t size; } ;
struct TYPE_10__ {int current; int has_next; int has_prev; TYPE_1__ items; } ;
typedef TYPE_2__ vlc_playlist_t ;
struct vlc_playlist_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,size_t,size_t) ;
 int FUNC_3 (TYPE_2__*,struct vlc_playlist_state*) ;
 int FUNC_4 (TYPE_2__*,struct vlc_playlist_state*) ;

__attribute__((used)) static bool
FUNC_5(vlc_playlist_t *VAR_1, size_t VAR_2, size_t VAR_3)
{
    struct vlc_playlist_state VAR_4;
    FUNC_4(VAR_1, &VAR_4);

    bool VAR_5 = 0;
    if (VAR_1->current != -1) {
        size_t VAR_6 = (size_t) VAR_1->current;
        if (VAR_6 >= VAR_2 && VAR_6 < VAR_2 + VAR_3) {

            if (VAR_2 + VAR_3 < VAR_1->items.size) {

                VAR_1->current = VAR_2;
            } else {

                VAR_1->current = -1;
            }
            VAR_5 = 1;
        } else if (VAR_6 >= VAR_2 + VAR_3) {
            VAR_1->current -= VAR_3;
        }
    }
    VAR_1->has_prev = FUNC_1(VAR_1);
    VAR_1->has_next = FUNC_0(VAR_1);

    FUNC_2(VAR_1, VAR_0, VAR_2, VAR_3);
    FUNC_3(VAR_1, &VAR_4);

    return VAR_5;
}

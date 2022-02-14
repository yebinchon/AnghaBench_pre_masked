
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int current; int has_next; int has_prev; } ;
typedef TYPE_1__ vlc_playlist_t ;
struct vlc_playlist_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,size_t,size_t,size_t) ;
 int FUNC_3 (TYPE_1__*,struct vlc_playlist_state*) ;
 int FUNC_4 (TYPE_1__*,struct vlc_playlist_state*) ;

__attribute__((used)) static void
FUNC_5(vlc_playlist_t *VAR_1, size_t VAR_2, size_t VAR_3,
                        size_t VAR_4)
{
    struct vlc_playlist_state VAR_5;
    FUNC_4(VAR_1, &VAR_5);

    if (VAR_1->current != -1) {
        size_t VAR_6 = (size_t) VAR_1->current;
        if (VAR_2 < VAR_4)
        {
            if (VAR_6 >= VAR_2 && VAR_6 < VAR_2 + VAR_3)

                VAR_1->current += VAR_4 - VAR_2;
            else if (VAR_6 >= VAR_2 + VAR_3 && VAR_6 < VAR_4 + VAR_3)

                VAR_1->current -= VAR_3;

        }
        else
        {
            if (VAR_6 >= VAR_2 && VAR_6 < VAR_2 + VAR_3)

                VAR_1->current -= VAR_2 - VAR_4;
            else if (VAR_6 >= VAR_4 && VAR_6 < VAR_2)

                VAR_1->current += VAR_3;

        }
    }

    VAR_1->has_prev = FUNC_1(VAR_1);
    VAR_1->has_next = FUNC_0(VAR_1);

    FUNC_2(VAR_1, VAR_0, VAR_2, VAR_3, VAR_4);
    FUNC_3(VAR_1, &VAR_5);
}

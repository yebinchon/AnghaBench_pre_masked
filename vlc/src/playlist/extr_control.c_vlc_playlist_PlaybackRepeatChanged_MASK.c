
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ order; int repeat; int player; int has_next; int has_prev; int randomizer; } ;
typedef TYPE_1__ vlc_playlist_t ;
struct vlc_playlist_state {int dummy; } ;


 char* FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;



 int FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (TYPE_1__*,struct vlc_playlist_state*) ;
 int FUNC_10 (TYPE_1__*,struct vlc_playlist_state*) ;

__attribute__((used)) static void
FUNC_11(vlc_playlist_t *VAR_2)
{
    if (VAR_2->order == VAR_0)
    {
        bool VAR_3 = VAR_2->repeat == 130;
        FUNC_3(&VAR_2->randomizer, VAR_3);
    }

    struct vlc_playlist_state VAR_4;
    FUNC_10(VAR_2, &VAR_4);

    VAR_2->has_prev = FUNC_7(VAR_2);
    VAR_2->has_next = FUNC_6(VAR_2);

    FUNC_8(VAR_2, VAR_1, VAR_2->repeat);
    FUNC_9(VAR_2, &VAR_4);

    char const *VAR_5 = ((void*)0);
    switch (VAR_2->repeat)
    {
        case 128:
            VAR_5 = FUNC_0("Off");
            break;
        case 130:
            VAR_5 = FUNC_0("All");
            break;
        case 129:
            VAR_5 = FUNC_0("One");
            break;
    }
    FUNC_5(VAR_2->player,
                           FUNC_2("Loop: %s"), FUNC_4(VAR_5));

    FUNC_1(VAR_5);
}

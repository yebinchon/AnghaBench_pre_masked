
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int size; int data; } ;
struct TYPE_10__ {int order; scalar_t__ repeat; int player; int has_next; int has_prev; int randomizer; TYPE_1__ items; } ;
typedef TYPE_2__ vlc_playlist_t ;
struct vlc_playlist_state {int dummy; } ;


 char* FUNC_0 (char*) ;


 scalar_t__ VAR_0 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int ,int) ;
 int FUNC_13 (TYPE_2__*,struct vlc_playlist_state*) ;
 int FUNC_14 (TYPE_2__*,struct vlc_playlist_state*) ;

__attribute__((used)) static void
FUNC_15(vlc_playlist_t *VAR_2)
{
    if (VAR_2->order == 128)
    {

        FUNC_3(FUNC_6(&VAR_2->randomizer) == 0);
        FUNC_4(&VAR_2->randomizer, VAR_2->items.data,
                       VAR_2->items.size);

        bool VAR_3 = VAR_2->repeat == VAR_0;
        FUNC_7(&VAR_2->randomizer, VAR_3);
    }
    else

        FUNC_5(&VAR_2->randomizer);

    struct vlc_playlist_state VAR_4;
    FUNC_14(VAR_2, &VAR_4);

    VAR_2->has_prev = FUNC_11(VAR_2);
    VAR_2->has_next = FUNC_10(VAR_2);

    FUNC_12(VAR_2, VAR_1, VAR_2->order);
    FUNC_13(VAR_2, &VAR_4);

    char const *VAR_5 = ((void*)0);
    switch (VAR_2->order)
    {
        case 129:
            VAR_5 = FUNC_0("Off");
            break;
        case 128:
            VAR_5 = FUNC_0("On");
            break;
    }
    FUNC_9(VAR_2->player,
                           FUNC_2("Random: %s"), FUNC_8(VAR_5));

    FUNC_1(VAR_5);
}

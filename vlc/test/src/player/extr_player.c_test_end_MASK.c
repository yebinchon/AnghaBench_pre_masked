
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_4__ {int error; } ;
struct TYPE_3__ {int on_state_changed; } ;
struct ctx {TYPE_2__ params; TYPE_1__ report; int * player; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ctx*) ;
 int FUNC_3 (struct ctx*,float) ;
 int FUNC_4 (struct ctx*) ;
 int FUNC_5 (struct ctx*) ;
 int FUNC_6 (struct ctx*) ;
 int FUNC_7 (struct ctx*) ;
 int FUNC_8 (struct ctx*) ;
 int FUNC_9 (struct ctx*) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct ctx*,scalar_t__) ;

__attribute__((used)) static void
FUNC_14(struct ctx *VAR_1)
{
    vlc_player_t *VAR_2 = VAR_1->player;


    const bool VAR_3 =
        FUNC_0(&VAR_1->report.on_state_changed) != VAR_0;

    FUNC_12(VAR_2);
    FUNC_1(FUNC_10(VAR_2) != ((void*)0));
    if (VAR_3)
        FUNC_13(VAR_1, VAR_0);

    if (!VAR_1->params.error)
    {
        FUNC_6(VAR_1);
        FUNC_8(VAR_1);
        FUNC_5(VAR_1);
        FUNC_7(VAR_1);
        FUNC_9(VAR_1);
    }
    FUNC_4(VAR_1);

    FUNC_3(VAR_1, 1.0f);
    FUNC_11(VAR_2, 0);

    FUNC_2(VAR_1);
}

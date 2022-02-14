
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_4__ {scalar_t__ size; } ;
typedef TYPE_2__ vec_on_capabilities_changed ;
struct media_params {int can_pause; } ;
struct TYPE_3__ {TYPE_2__ on_capabilities_changed; } ;
struct ctx {int wait; TYPE_1__ report; int * player; } ;


 struct media_params FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ctx*) ;
 int FUNC_3 (struct ctx*,char*,struct media_params*) ;
 int FUNC_4 (struct ctx*) ;
 int FUNC_5 (struct ctx*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct ctx*) ;
 int FUNC_8 (int *,float) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct ctx*,int ) ;

__attribute__((used)) static void
FUNC_12(struct ctx *VAR_1)
{
    FUNC_6("capabilites_pause\n");
    vlc_player_t *VAR_2 = VAR_1->player;

    struct media_params VAR_3 = FUNC_0(FUNC_1(1));
    VAR_3.can_pause = 0;
    FUNC_3(VAR_1, "media1", &VAR_3);

    FUNC_4(VAR_1);

    {
        vec_on_capabilities_changed *VAR_4 = &VAR_1->report.on_capabilities_changed;
        while (VAR_4->size == 0)
            FUNC_9(VAR_2, &VAR_1->wait);
    }


    FUNC_10(VAR_2);
    FUNC_8(VAR_2, 32.f);

    FUNC_7(VAR_1);

    FUNC_11(VAR_1, VAR_0);
    FUNC_2(VAR_1);

    FUNC_5(VAR_1);
}

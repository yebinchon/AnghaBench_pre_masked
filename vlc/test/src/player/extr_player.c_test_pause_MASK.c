
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_6__ {int size; scalar_t__* data; } ;
typedef TYPE_2__ vec_on_state_changed ;
struct TYPE_7__ {scalar_t__ size; } ;
typedef TYPE_3__ vec_on_position_changed ;
struct media_params {int dummy; } ;
struct TYPE_5__ {TYPE_2__ on_state_changed; TYPE_3__ on_position_changed; } ;
struct ctx {int wait; TYPE_1__ report; int * player; } ;


 struct media_params FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ctx*,char*,struct media_params*) ;
 int FUNC_5 (struct ctx*) ;
 int FUNC_6 (struct ctx*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static void
FUNC_12(struct ctx *VAR_3)
{
    FUNC_7("pause\n");
    vlc_player_t *VAR_4 = VAR_3->player;

    struct media_params VAR_5 = FUNC_0(FUNC_2(10));
    FUNC_4(VAR_3, "media1", &VAR_5);


    FUNC_11(VAR_4, 1);
    FUNC_5(VAR_3);
    {
        vec_on_state_changed *VAR_6 = &VAR_3->report.on_state_changed;
        while (VAR_6->size == 0 || FUNC_1(VAR_6) != VAR_0)
            FUNC_8(VAR_4, &VAR_3->wait);
        FUNC_3(VAR_6->size == 3);
        FUNC_3(VAR_6->data[0] == VAR_2);
        FUNC_3(VAR_6->data[1] == VAR_1);
        FUNC_3(VAR_6->data[2] == VAR_0);
    }

    {
        vec_on_position_changed *VAR_7 = &VAR_3->report.on_position_changed;
        FUNC_3(VAR_7->size == 0);
    }


    FUNC_10(VAR_4);

    {
        vec_on_state_changed *VAR_8 = &VAR_3->report.on_state_changed;
        while (FUNC_1(VAR_8) != VAR_1)
            FUNC_8(VAR_4, &VAR_3->wait);
        FUNC_3(VAR_8->size == 4);
    }

    {
        vec_on_position_changed *VAR_9 = &VAR_3->report.on_position_changed;
        while (VAR_9->size == 0)
            FUNC_8(VAR_4, &VAR_3->wait);
    }


    FUNC_9(VAR_4);

    {
        vec_on_state_changed *VAR_10 = &VAR_3->report.on_state_changed;
        while (FUNC_1(VAR_10) != VAR_0)
            FUNC_8(VAR_4, &VAR_3->wait);
        FUNC_3(VAR_10->size == 5);
    }

    FUNC_6(VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_5__ {scalar_t__ size; } ;
typedef TYPE_2__ vec_on_error_changed ;
struct media_params {int error; } ;
struct TYPE_4__ {TYPE_2__ on_error_changed; } ;
struct ctx {int wait; TYPE_1__ report; int * player; } ;


 struct media_params FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ctx*,char*,struct media_params*) ;
 int FUNC_4 (struct ctx*) ;
 int FUNC_5 (struct ctx*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct ctx*,int ) ;

__attribute__((used)) static void
FUNC_9(struct ctx *VAR_2)
{
    FUNC_6("error\n");
    vlc_player_t *VAR_3 = VAR_2->player;

    struct media_params VAR_4 = FUNC_0(FUNC_2(1));
    VAR_4.error = 1;
    FUNC_3(VAR_2, "media1", &VAR_4);

    FUNC_4(VAR_2);

    {
        vec_on_error_changed *VAR_5 = &VAR_2->report.on_error_changed;
        while (VAR_5->size == 0 || FUNC_1(VAR_5) == VAR_0)
            FUNC_7(VAR_3, &VAR_2->wait);
    }
    FUNC_8(VAR_2, VAR_1);

    FUNC_5(VAR_2);
}

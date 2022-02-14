
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_4__ {scalar_t__ size; } ;
typedef TYPE_2__ vec_on_vout_changed ;
struct media_params {int dummy; } ;
struct TYPE_3__ {TYPE_2__ on_vout_changed; } ;
struct ctx {TYPE_1__ report; int * player; } ;
typedef int audio_output_t ;


 struct media_params FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ctx*,char*,struct media_params*,int) ;
 int FUNC_4 (struct ctx*) ;
 int FUNC_5 (struct ctx*) ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (struct ctx*,int ) ;

__attribute__((used)) static void
FUNC_9(struct ctx *VAR_1)
{
    FUNC_6("test_no_outputs\n");
    vlc_player_t *VAR_2 = VAR_1->player;

    struct media_params VAR_3 = FUNC_0(FUNC_1(10));
    FUNC_3(VAR_1, "media1", &VAR_3, 0);
    FUNC_4(VAR_1);

    FUNC_8(VAR_1, VAR_0);
    {
        vec_on_vout_changed *VAR_4 = &VAR_1->report.on_vout_changed;
        FUNC_2(VAR_4->size == 0);
    }

    audio_output_t *VAR_5 = FUNC_7(VAR_2);
    FUNC_2(!VAR_5);

    FUNC_5(VAR_1);
}

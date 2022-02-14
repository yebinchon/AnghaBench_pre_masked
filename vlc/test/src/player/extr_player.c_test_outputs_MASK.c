
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vout_thread_t ;
typedef int vlc_player_t ;
struct TYPE_6__ {int size; TYPE_2__* data; } ;
typedef TYPE_3__ vec_on_vout_changed ;
struct media_params {int dummy; } ;
struct TYPE_4__ {TYPE_3__ on_vout_changed; } ;
struct ctx {TYPE_1__ report; int * player; } ;
typedef int audio_output_t ;
struct TYPE_5__ {scalar_t__ action; int * vout; } ;


 struct media_params FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (struct ctx*,char*,struct media_params*,int) ;
 int FUNC_6 (struct ctx*) ;
 int FUNC_7 (struct ctx*) ;
 int FUNC_8 (char*) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int ** FUNC_11 (int *,size_t*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct ctx*,int ) ;

__attribute__((used)) static void
FUNC_14(struct ctx *VAR_2)
{
    FUNC_8("test_outputs\n");
    vlc_player_t *VAR_3 = VAR_2->player;



    audio_output_t *VAR_4 = FUNC_9(VAR_3);
    FUNC_3(*VAR_4);

    vout_thread_t *VAR_5 = FUNC_10(VAR_3);
    FUNC_3(*VAR_5);

    size_t VAR_6;
    vout_thread_t **VAR_7 = FUNC_11(VAR_3, &VAR_6);
    FUNC_3(VAR_6 == 1 && VAR_7[0] == VAR_5);
    FUNC_12(VAR_7[0]);
    FUNC_4(VAR_7);
    FUNC_12(VAR_5);


    struct media_params VAR_8 = FUNC_0(FUNC_1(10));

    FUNC_5(VAR_2, "media1", &VAR_8, 0);
    FUNC_6(VAR_2);

    FUNC_13(VAR_2, VAR_0);

    {
        vec_on_vout_changed *VAR_9 = &VAR_2->report.on_vout_changed;
        FUNC_3(VAR_9->size >= 1);
        FUNC_3(VAR_9->data[0].action == VAR_1);

        vout_thread_t *VAR_10 = FUNC_10(VAR_3);
        FUNC_3(VAR_9->data[0].vout == VAR_10);
        FUNC_12(VAR_10);
    }

    audio_output_t *VAR_11 = FUNC_9(VAR_3);
    FUNC_3(VAR_11 == VAR_4);
    FUNC_2(VAR_11);

    FUNC_2(VAR_4);
    FUNC_7(VAR_2);
}

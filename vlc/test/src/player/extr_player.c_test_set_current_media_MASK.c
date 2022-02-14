
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_5__ {int size; } ;
typedef TYPE_2__ vec_on_current_media_changed ;
struct media_params {int dummy; } ;
struct TYPE_4__ {TYPE_2__ on_current_media_changed; } ;
struct ctx {TYPE_2__ played_medias; int extra_start_count; int wait; TYPE_1__ report; int * player; } ;
typedef int input_item_t ;


 size_t FUNC_0 (char const**) ;
 struct media_params FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (struct ctx*) ;
 int FUNC_7 (struct ctx*,char const*,struct media_params*,int) ;
 int FUNC_8 (struct ctx*) ;
 int FUNC_9 (struct ctx*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct ctx*) ;
 int FUNC_12 (int *,int *) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (struct ctx*,int ) ;

__attribute__((used)) static void
FUNC_15(struct ctx *VAR_3)
{
    FUNC_10("current_media\n");
    const char *VAR_4[] = { "media1", "media2", "media3" };
    const size_t VAR_5 = FUNC_0(VAR_4);

    vlc_player_t *VAR_6 = VAR_3->player;
    struct media_params VAR_7 = FUNC_1(FUNC_3(100));

    FUNC_7(VAR_3, VAR_4[0], &VAR_7, 0);
    FUNC_8(VAR_3);

    FUNC_14(VAR_3, VAR_0);



    {
        vec_on_current_media_changed *VAR_8 = &VAR_3->report.on_current_media_changed;
        FUNC_4(VAR_8->size == 1);
        for (size_t VAR_9 = 1; VAR_9 <= VAR_5; ++VAR_9)
        {
            while (VAR_8->size != VAR_9)
                FUNC_12(VAR_6, &VAR_3->wait);

            input_item_t *VAR_10 = FUNC_2(VAR_8);
            FUNC_4(*VAR_10);
            FUNC_4(VAR_10 == FUNC_13(VAR_6));
            FUNC_4(VAR_10 == FUNC_2(&VAR_3->played_medias));
            FUNC_5(VAR_10, VAR_4[VAR_9 - 1]);

            if (VAR_9 < VAR_5)
            {



                FUNC_7(VAR_3, "ignored", &VAR_7, 1);
                FUNC_4(FUNC_13(VAR_6) == VAR_10);


                FUNC_7(VAR_3, VAR_4[VAR_9], &VAR_7, 0);
            }
        }
    }

    FUNC_11(VAR_3);
    FUNC_14(VAR_3, VAR_2);
    FUNC_6(VAR_3);


    FUNC_8(VAR_3);
    VAR_3->extra_start_count++;


    FUNC_14(VAR_3, VAR_1);
    FUNC_14(VAR_3, VAR_2);

    FUNC_6(VAR_3);


    FUNC_7(VAR_3, VAR_4[0], &VAR_7, 0);
    FUNC_4(FUNC_13(VAR_6) == FUNC_2(&VAR_3->played_medias));

    FUNC_8(VAR_3);

    FUNC_14(VAR_3, VAR_1);
    FUNC_14(VAR_3, VAR_2);

    FUNC_9(VAR_3);
}

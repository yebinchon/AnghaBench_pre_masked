
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int vlc_playlist_listener_id ;
struct vlc_playlist_callbacks {int on_has_next_changed; int on_has_prev_changed; int on_current_index_changed; } ;
struct callback_ctx {int dummy; } ;
typedef int ssize_t ;
typedef int selected ;
typedef int input_item_t ;


 struct callback_ctx VAR_0 ;
 int FUNC_0 (int **,int) ;
 int FUNC_1 (int **,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct callback_ctx*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int*,int ,int) ;
 int * FUNC_5 (int *,struct vlc_playlist_callbacks*,struct callback_ctx*,int) ;
 int FUNC_6 (int *,int **,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ) ;

__attribute__((used)) static void
FUNC_19(void)
{
    vlc_playlist_t *VAR_7 = FUNC_12(((void*)0));
    FUNC_2(*VAR_7);

    input_item_t *VAR_8[6];
    FUNC_0(VAR_8, 6);


    int VAR_9 = FUNC_6(VAR_7, VAR_8, 5);
    FUNC_2(VAR_9 == VAR_3);

    struct vlc_playlist_callbacks VAR_10 = {
        .on_current_index_changed = VAR_4,
        .on_has_prev_changed = VAR_6,
        .on_has_next_changed = VAR_5,
    };

    struct callback_ctx VAR_11 = VAR_0;
    vlc_playlist_listener_id *VAR_12 =
            FUNC_5(VAR_7, &VAR_10, &VAR_11, 0);
    FUNC_2(*VAR_12);

    FUNC_2(!FUNC_11(VAR_7));
    FUNC_2(FUNC_10(VAR_7));

    for (int VAR_13 = 0; VAR_13 < 3; ++VAR_13)
    {
        FUNC_2(FUNC_10(VAR_7));
        VAR_9 = FUNC_13(VAR_7);
        FUNC_2(VAR_9 == VAR_3);
    }

    FUNC_2(FUNC_11(VAR_7));
    FUNC_17(VAR_7, VAR_1);


    FUNC_2(!FUNC_11(VAR_7));

    bool VAR_14[5] = {};
    for (int VAR_15 = 0; VAR_15 < 5; ++VAR_15)
    {
        FUNC_2(FUNC_10(VAR_7));
        VAR_9 = FUNC_13(VAR_7);
        FUNC_2(VAR_9 == VAR_3);
        ssize_t VAR_16 = FUNC_9(VAR_7);
        FUNC_2(VAR_16 != -1);
        FUNC_2(!VAR_14[VAR_16]);
        VAR_14[VAR_16] = 1;
    }

    FUNC_2(!FUNC_10(VAR_7));


    VAR_9 = FUNC_7(VAR_7, VAR_8[5]);
    FUNC_2(VAR_9 == VAR_3);
    FUNC_2(FUNC_10(VAR_7));

    VAR_9 = FUNC_13(VAR_7);
    FUNC_2(VAR_9 == VAR_3);

    FUNC_2(FUNC_9(VAR_7) == 5);
    FUNC_2(!FUNC_10(VAR_7));

    FUNC_16(VAR_7, 5);


    FUNC_18(VAR_7, VAR_2);


    FUNC_2(FUNC_10(VAR_7));


    FUNC_4(VAR_14, 0, sizeof(VAR_14));
    for (int VAR_17 = 0; VAR_17 < 5; ++VAR_17)
    {
        FUNC_2(FUNC_10(VAR_7));
        VAR_9 = FUNC_13(VAR_7);
        FUNC_2(VAR_9 == VAR_3);
        ssize_t VAR_18 = FUNC_9(VAR_7);
        FUNC_2(VAR_18 != -1);
        FUNC_2(!VAR_14[VAR_18]);
        VAR_14[VAR_18] = 1;
    }


    FUNC_2(FUNC_10(VAR_7));


    for (int VAR_19 = 0; VAR_19 < 3; ++VAR_19)
    {
        FUNC_2(FUNC_10(VAR_7));
        VAR_9 = FUNC_13(VAR_7);
        FUNC_2(VAR_9 == VAR_3);
    }

    FUNC_4(VAR_14, 0, sizeof(VAR_14));
    int VAR_20[5];

    ssize_t VAR_21 = FUNC_9(VAR_7);
    FUNC_2(VAR_21 != -1);
    VAR_20[4] = VAR_21;

    for (int VAR_22 = 3; VAR_22 >= 0; --VAR_22)
    {
        FUNC_2(FUNC_11(VAR_7));
        VAR_9 = FUNC_14(VAR_7);
        FUNC_2(VAR_9 == VAR_3);
        ssize_t VAR_23 = FUNC_9(VAR_7);
        FUNC_2(VAR_23 != -1);
        VAR_20[VAR_22] = VAR_23;
        FUNC_2(!VAR_14[VAR_23]);
        VAR_14[VAR_23] = 1;
    }


    FUNC_2(!FUNC_11(VAR_7));


    for (int VAR_24 = 1; VAR_24 < 5; ++VAR_24)
    {
        FUNC_2(FUNC_10(VAR_7));
        VAR_9 = FUNC_13(VAR_7);
        FUNC_2(VAR_9 == VAR_3);
        ssize_t VAR_25 = FUNC_9(VAR_7);
        FUNC_2(VAR_25 != -1);
        FUNC_2(VAR_25 == VAR_20[VAR_24]);
    }


    FUNC_2(FUNC_10(VAR_7));

    FUNC_3(&VAR_11);
    FUNC_15(VAR_7, VAR_12);
    FUNC_1(VAR_8, 6);
    FUNC_8(VAR_7);
}

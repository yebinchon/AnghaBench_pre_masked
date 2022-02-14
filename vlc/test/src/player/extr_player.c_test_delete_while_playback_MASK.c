
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
typedef int vlc_object_t ;
struct media_params {int dummy; } ;
typedef int input_item_t ;


 struct media_params FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (char*,struct media_params*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int ,int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(vlc_object_t *VAR_2, bool VAR_3)
{
    FUNC_5("delete_while_playback (start: %d)\n", VAR_3);
    vlc_player_t *VAR_4 = FUNC_8(VAR_2, VAR_0,
                                          ((void*)0), ((void*)0));

    struct media_params VAR_5 = FUNC_0(FUNC_1(10));
    input_item_t *VAR_6 = FUNC_3("media1", &VAR_5);
    FUNC_2(*VAR_6);

    FUNC_7(VAR_4);
    int VAR_7 = FUNC_9(VAR_4, VAR_6);
    FUNC_2(VAR_7 == VAR_1);
    FUNC_4(VAR_6);

    if (VAR_3)
    {
        VAR_7 = FUNC_10(VAR_4);
        FUNC_2(VAR_7 == VAR_1);
    }

    FUNC_11(VAR_4);

    FUNC_6(VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int vlc_playlist_item_t ;
typedef int input_item_t ;


 int FUNC_0 (int **,int) ;
 int FUNC_1 (int **,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int **,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(void)
{
    vlc_playlist_t *VAR_1 = FUNC_8(((void*)0));
    FUNC_2(*VAR_1);

    input_item_t *VAR_2[10];
    FUNC_0(VAR_2, 10);


    int VAR_3 = FUNC_3(VAR_1, VAR_2, 9);
    FUNC_2(VAR_3 == VAR_0);

    FUNC_2(FUNC_7(VAR_1, VAR_2[4]) == 4);

    FUNC_2(FUNC_7(VAR_1, VAR_2[9]) == -1);

    vlc_playlist_item_t *VAR_4 = FUNC_5(VAR_1, 4);
    FUNC_2(FUNC_6(VAR_1, VAR_4) == 4);

    FUNC_10(VAR_4);
    FUNC_9(VAR_1, 4);
    FUNC_2(FUNC_6(VAR_1, VAR_4) == -1);
    FUNC_11(VAR_4);

    FUNC_1(VAR_2, 10);
    FUNC_4(VAR_1);
}

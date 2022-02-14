
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int input_item_t ;


 int FUNC_0 (int **,int) ;
 int FUNC_1 (int **,int) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int **,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static void
FUNC_10(void)
{
    vlc_playlist_t *VAR_1 = FUNC_7(((void*)0));
    FUNC_3(*VAR_1);

    input_item_t *VAR_2[10];
    FUNC_0(VAR_2, 10);


    int VAR_3 = FUNC_4(VAR_1, VAR_2, 10);
    FUNC_3(VAR_3 == VAR_0);


    for (int VAR_4 = 0; VAR_4 < 3; ++VAR_4)
        FUNC_9(VAR_1, 2);


    FUNC_8(VAR_1, 3, 2);

    FUNC_3(FUNC_5(VAR_1) == 5);
    FUNC_2(0, 0);
    FUNC_2(1, 1);
    FUNC_2(2, 5);
    FUNC_2(3, 8);
    FUNC_2(4, 9);

    FUNC_1(VAR_2, 10);
    FUNC_6(VAR_1);
}

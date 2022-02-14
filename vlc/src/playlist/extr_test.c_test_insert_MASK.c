
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
 int FUNC_7 (int *,int,int **,int) ;
 int FUNC_8 (int *,int,int *) ;
 int * FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(void)
{
    vlc_playlist_t *VAR_1 = FUNC_9(((void*)0));
    FUNC_3(*VAR_1);

    input_item_t *VAR_2[15];
    FUNC_0(VAR_2, 15);


    int VAR_3 = FUNC_4(VAR_1, VAR_2, 5);
    FUNC_3(VAR_3 == VAR_0);


    for (int VAR_4 = 0; VAR_4 < 5; ++VAR_4)
    {
        VAR_3 = FUNC_8(VAR_1, 2, VAR_2[VAR_4 + 5]);
        FUNC_3(VAR_3 == VAR_0);
    }


    VAR_3 = FUNC_7(VAR_1, 6, &VAR_2[10], 5);
    FUNC_3(VAR_3 == VAR_0);

    FUNC_3(FUNC_5(VAR_1) == 15);

    FUNC_2(0, 0);
    FUNC_2(1, 1);

    FUNC_2(2, 9);
    FUNC_2(3, 8);
    FUNC_2(4, 7);
    FUNC_2(5, 6);

    FUNC_2(6, 10);
    FUNC_2(7, 11);
    FUNC_2(8, 12);
    FUNC_2(9, 13);
    FUNC_2(10, 14);

    FUNC_2(11, 5);
    FUNC_2(12, 2);
    FUNC_2(13, 3);
    FUNC_2(14, 4);

    FUNC_1(VAR_2, 15);
    FUNC_6(VAR_1);
}

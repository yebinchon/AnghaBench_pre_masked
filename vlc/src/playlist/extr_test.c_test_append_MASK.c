
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
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(void)
{
    vlc_playlist_t *VAR_1 = FUNC_8(((void*)0));
    FUNC_3(*VAR_1);

    input_item_t *VAR_2[10];
    FUNC_0(VAR_2, 10);


    for (int VAR_3 = 0; VAR_3 < 5; ++VAR_3)
    {
        int VAR_4 = FUNC_5(VAR_1, VAR_2[VAR_3]);
        FUNC_3(VAR_4 == VAR_0);
    }


    int VAR_5 = FUNC_4(VAR_1, &VAR_2[5], 5);
    FUNC_3(VAR_5 == VAR_0);

    FUNC_3(FUNC_6(VAR_1) == 10);
    FUNC_2(0, 0);
    FUNC_2(1, 1);
    FUNC_2(2, 2);
    FUNC_2(3, 3);
    FUNC_2(4, 4);
    FUNC_2(5, 5);
    FUNC_2(6, 6);
    FUNC_2(7, 7);
    FUNC_2(8, 8);
    FUNC_2(9, 9);

    FUNC_1(VAR_2, 10);
    FUNC_7(VAR_1);
}

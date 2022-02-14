
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int ,int,int,int,int,int,int) ;

int FUNC_7(void)
{
    FUNC_6(&VAR_2, VAR_1, 320, 200, 320, 200, 1, 1);

    VAR_3 = FUNC_2(&VAR_2, VAR_0);
    FUNC_0(VAR_3 != ((void*)0));
    FUNC_0(FUNC_1(VAR_3) == VAR_0);

    VAR_4 = FUNC_4(VAR_3, VAR_0 / 2);
    FUNC_0(VAR_4 != ((void*)0));

    FUNC_3(VAR_4);
    FUNC_3(VAR_3);

    FUNC_5(0);
    FUNC_5(1);

    return 0;
}

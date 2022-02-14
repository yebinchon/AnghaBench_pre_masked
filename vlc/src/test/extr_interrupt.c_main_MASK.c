
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_thread_t ;
typedef int vlc_interrupt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int *,int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,void**) ;
 scalar_t__ FUNC_9 (void**) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int *,int ,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int ,int ,int ,int *,int) ;

int FUNC_21 (void)
{
    vlc_interrupt_t *VAR_9;
    vlc_thread_t VAR_10;

    FUNC_0(2);

    VAR_9 = FUNC_6();
    FUNC_1(VAR_9 != ((void*)0));
    FUNC_7(VAR_9);

    FUNC_17(&VAR_4, 0);
    VAR_9 = FUNC_6();
    FUNC_1(VAR_9 != ((void*)0));

    FUNC_1(FUNC_20(VAR_0, VAR_1, 0, VAR_3, 0) == 0);

    FUNC_2(VAR_9);

    FUNC_1(!FUNC_4(&VAR_10, VAR_7, VAR_9, VAR_2));
    FUNC_10(VAR_9);
    FUNC_18(&VAR_4);
    FUNC_18(&VAR_4);
    FUNC_13(VAR_10, ((void*)0));

    FUNC_1(!FUNC_4(&VAR_10, VAR_6, VAR_9, VAR_2));
    FUNC_13(VAR_10, ((void*)0));

    FUNC_1(!FUNC_4(&VAR_10, VAR_5, VAR_9, VAR_2));
    FUNC_3(VAR_10);
    FUNC_13(VAR_10, ((void*)0));

    FUNC_7(VAR_9);


    FUNC_18(&VAR_4);
    FUNC_1(FUNC_19(&VAR_4) == 0);
    FUNC_1(FUNC_14(1) == 0);
    FUNC_1(FUNC_15(((void*)0), 0, 1) == 0);

    FUNC_11(VAR_8, ((void*)0));
    FUNC_12();

    void *VAR_11[2];
    FUNC_8(VAR_9, VAR_11);
    FUNC_1(FUNC_9(VAR_11) == 0);

    FUNC_5(VAR_3[1]);
    FUNC_5(VAR_3[0]);
    FUNC_16(&VAR_4);
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_interrupt_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int *,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int ,char*,int,int ,int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int ,char*,int,int ,int *,int ) ;
 int FUNC_14 (int ,char*,int) ;

__attribute__((used)) static void FUNC_15(vlc_interrupt_t *VAR_6)
{
    vlc_interrupt_t *VAR_7;
    char VAR_8;

    FUNC_4(VAR_6);
    VAR_7 = FUNC_4(((void*)0));
    FUNC_0(VAR_7 == VAR_6);
    VAR_7 = FUNC_4(VAR_6);
    FUNC_0(VAR_7 == ((void*)0));
    VAR_7 = FUNC_4(VAR_6);
    FUNC_0(VAR_7 == VAR_6);

    FUNC_3(VAR_4, &VAR_5);
    FUNC_2(VAR_6);
    FUNC_11(&VAR_5);
    FUNC_5();




    FUNC_10(&VAR_5);
    FUNC_0(FUNC_12(&VAR_5) == 0);

    FUNC_2(VAR_6);
    FUNC_0(FUNC_12(&VAR_5) == VAR_1);

    FUNC_10(&VAR_5);
    FUNC_2(VAR_6);
    FUNC_0(FUNC_12(&VAR_5) == VAR_1);
    FUNC_0(FUNC_12(&VAR_5) == 0);

    FUNC_2(VAR_6);
    FUNC_10(&VAR_5);
    FUNC_0(FUNC_12(&VAR_5) == VAR_1);
    FUNC_0(FUNC_12(&VAR_5) == 0);

    FUNC_0(FUNC_6(1) == 0);
    FUNC_2(VAR_6);
    FUNC_0(FUNC_6(VAR_0 * 10000000) == VAR_1);

    FUNC_0(FUNC_7(((void*)0), 0, 1) == 0);
    FUNC_2(VAR_6);
    FUNC_0(FUNC_7(((void*)0), 0, 1000000000) == -1);
    FUNC_0(VAR_2 == VAR_1);

    VAR_8 = 12;
    FUNC_0(FUNC_14(VAR_3[0], &VAR_8, 1) == 1);
    VAR_8 = 0;
    FUNC_0(FUNC_8(VAR_3[1], &VAR_8, 1) == 1 && VAR_8 == 12);
    FUNC_2(VAR_6);
    FUNC_0(FUNC_8(VAR_3[1], &VAR_8, 1) == -1);
    FUNC_0(VAR_2 == VAR_1);

    VAR_8 = 42;
    FUNC_0(FUNC_13(VAR_3[0], &VAR_8, 1, 0, ((void*)0), 0) == 1);
    VAR_8 = 0;
    FUNC_0(FUNC_9(VAR_3[1], &VAR_8, 1, 0, ((void*)0), 0) == 1 && VAR_8 == 42);
    FUNC_2(VAR_6);
    FUNC_0(FUNC_9(VAR_3[1], &VAR_8, 1, 0, ((void*)0), 0) == -1);
    FUNC_0(VAR_2 == VAR_1);

    FUNC_2(VAR_6);
    FUNC_0(FUNC_1(VAR_3[1], ((void*)0), ((void*)0), 1) < 0);

    VAR_7 = FUNC_4(((void*)0));
    FUNC_0(VAR_7 == VAR_6);
    VAR_7 = FUNC_4(((void*)0));
    FUNC_0(VAR_7 == ((void*)0));
}

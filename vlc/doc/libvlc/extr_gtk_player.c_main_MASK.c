
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GtkWidget ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int *,char*,int ,int *) ;
 int FUNC_11 (int ,int *,int ,int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int * FUNC_13 (int ) ;
 int * FUNC_14 (char*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int ,int ) ;
 int * FUNC_18 () ;
 int * FUNC_19 () ;
 int FUNC_20 (int*,char***) ;
 int FUNC_21 () ;
 int FUNC_22 (int ,int *) ;
 int * FUNC_23 () ;
 int * FUNC_24 (char*) ;
 int FUNC_25 (int ,int *) ;
 int * FUNC_26 () ;
 int FUNC_27 (int ,int *) ;
 int * FUNC_28 (int ,int ) ;
 int FUNC_29 (int *) ;
 int * FUNC_30 (int ) ;
 int FUNC_31 (int ,int,int) ;
 int FUNC_32 (int ,char*) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (int ) ;
 int FUNC_35 (int ,int *) ;
 int FUNC_36 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;

int FUNC_37( int VAR_14, char *VAR_15[] ) {
    GtkWidget *VAR_16,
              *VAR_17,
              *VAR_18,
              *VAR_19,
              *VAR_20,
              *VAR_21,
              *VAR_22,
              *VAR_23,
              *VAR_24;

    FUNC_20 (&VAR_14, &VAR_15);

    VAR_16 = FUNC_30(VAR_4);
    FUNC_31(FUNC_7(VAR_16), 400, 300);
    FUNC_10(VAR_16, "destroy", FUNC_8(VAR_6), ((void*)0));
    FUNC_17 (FUNC_3 (VAR_16), 0);
    FUNC_32(FUNC_7(VAR_16), "GTK+ libVLC Demo");


    VAR_17 = FUNC_28(VAR_1, 0);
    FUNC_16(FUNC_3(VAR_16), VAR_17);


    VAR_18 = FUNC_23();
    VAR_19 = FUNC_26();
    VAR_20 = FUNC_24 ("File");
    VAR_21 = FUNC_24("Open");
    FUNC_27(FUNC_6(VAR_19), VAR_21);
    FUNC_25(FUNC_5(VAR_20), VAR_19);
    FUNC_22(FUNC_4(VAR_18), VAR_20);
    FUNC_11(FUNC_0(VAR_17), VAR_18, VAR_1, VAR_1, 0);
    FUNC_10(VAR_21, "activate", FUNC_8(VAR_8), VAR_16);


    VAR_22 = FUNC_18();
    FUNC_11(FUNC_0(VAR_17), VAR_22, VAR_5, VAR_5, 0);



    VAR_12 = FUNC_14("gtk-media-play");
    FUNC_15(FUNC_1(VAR_12), VAR_5);
    VAR_24 = FUNC_13(VAR_3);
    FUNC_10(VAR_12, "clicked", FUNC_8(VAR_9), ((void*)0));
    FUNC_10(VAR_24, "clicked", FUNC_8(VAR_10), ((void*)0));
    VAR_23 = FUNC_19();
    FUNC_17(FUNC_3(VAR_23), VAR_0);
    FUNC_12(FUNC_2(VAR_23), VAR_2);
    FUNC_11(FUNC_0(VAR_23), VAR_12, VAR_1, VAR_1, 0);
    FUNC_11(FUNC_0(VAR_23), VAR_24, VAR_1, VAR_1, 0);
    FUNC_11(FUNC_0(VAR_17), VAR_23, VAR_1, VAR_1, 0);


    VAR_13 = FUNC_35(0, ((void*)0));
    VAR_7 = FUNC_33(VAR_13);
    FUNC_10(FUNC_9(VAR_22), "realize", FUNC_8(VAR_11), ((void*)0));

    FUNC_29(VAR_16);
    FUNC_21 ();

    FUNC_34(VAR_7);
    FUNC_36(VAR_13);
    return 0;
}

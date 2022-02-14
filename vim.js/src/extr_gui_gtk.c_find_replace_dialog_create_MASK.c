
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int gpointer ;
typedef int gfloat ;
typedef int gboolean ;
typedef scalar_t__ char_u ;
struct TYPE_12__ {int action_area; int * vbox; } ;
struct TYPE_11__ {int * mainwin; } ;
struct TYPE_10__ {scalar_t__ vc_type; } ;
struct TYPE_9__ {int * dialog; int * all; int * replace; int * find; int * down; int * up; int * mcase; int * wword; int * what; int * with; } ;
typedef TYPE_1__ SharedFindReplace ;
typedef int GtkWidget ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 TYPE_6__* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int (*) (int )) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_14 (char*) ;
 void* FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 TYPE_1__ VAR_14 ;
 scalar_t__* FUNC_20 (scalar_t__*,int*,int*) ;
 int FUNC_21 (int ,int *,int,int,int) ;
 int FUNC_22 (int ,int *,int,int,int ) ;
 int * FUNC_23 (int ) ;
 void* FUNC_24 (int ) ;
 int FUNC_25 (int ,int *) ;
 int FUNC_26 (int ,int) ;
 int FUNC_27 (int ,int) ;
 int * FUNC_28 () ;
 int FUNC_29 (TYPE_6__*,int) ;
 void* FUNC_30 () ;
 int FUNC_31 (int ,char*) ;
 int * FUNC_32 (int ) ;
 int * FUNC_33 (int,int ) ;
 int * FUNC_34 (int ) ;
 int FUNC_35 (int ,int ,int ) ;
 int * FUNC_36 (int ) ;
 void* FUNC_37 (int *,int ) ;
 int FUNC_38 (int ,char*,int ,int *) ;
 int FUNC_39 (int ,char*,int ,int ) ;
 int FUNC_40 (int ,char*,int ,int ) ;
 int FUNC_41 (int ,int *,int,int,int,int,int,int,int,int) ;
 int * FUNC_42 (int,int,int) ;
 int FUNC_43 (int ,int) ;
 int * FUNC_44 (int,int ) ;
 int * FUNC_45 () ;
 int * FUNC_46 () ;
 int FUNC_47 (int *) ;
 int FUNC_48 (int ) ;
 int FUNC_49 (int ) ;
 int FUNC_50 (int *,int) ;
 int FUNC_51 (int *) ;
 int FUNC_52 (int *) ;
 int FUNC_53 (int ) ;
 int FUNC_54 (int ,int) ;
 int FUNC_55 (int ,int ) ;
 int FUNC_56 (int ,int ) ;
 TYPE_5__ VAR_15 ;
 TYPE_2__ VAR_16 ;
 int VAR_17 ;
 TYPE_1__ VAR_18 ;
 scalar_t__* FUNC_57 (TYPE_2__*,scalar_t__*,int *) ;
 int FUNC_58 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_59(char_u *VAR_19, int VAR_20)
{
    GtkWidget *VAR_21;
    GtkWidget *VAR_22;
    GtkWidget *VAR_23;
    GtkWidget *VAR_24;
    GtkWidget *VAR_25;
    gboolean VAR_26;
    SharedFindReplace *VAR_27;
    char_u *VAR_28;
    int VAR_29 = VAR_1;
    int VAR_30 = !VAR_17;
    char_u *VAR_31 = ((void*)0);


    VAR_27 = (VAR_20) ? (&VAR_18) : (&VAR_14);


    VAR_28 = FUNC_20(VAR_19, &VAR_29, &VAR_30);

    if (VAR_28 != ((void*)0) && VAR_16.vc_type != VAR_0)
    {
 char_u *VAR_32 = VAR_28;
 VAR_28 = FUNC_57(&VAR_16, VAR_28, ((void*)0));
 FUNC_58(VAR_32);
    }




    if (VAR_27->dialog)
    {
 if (VAR_28 != ((void*)0))
 {
     FUNC_31(FUNC_5(VAR_27->what), (char *)VAR_28);
     FUNC_43(FUNC_11(VAR_27->wword),
            (gboolean)VAR_29);
     FUNC_43(FUNC_11(VAR_27->mcase),
            (gboolean)VAR_30);
 }
 FUNC_53(FUNC_13(VAR_27->dialog));
 FUNC_58(VAR_28);
 return;
    }

    VAR_27->dialog = FUNC_28();
    FUNC_29(FUNC_4(VAR_27->dialog), VAR_1);
    FUNC_56(FUNC_13(VAR_27->dialog), FUNC_13(VAR_15.mainwin));
    FUNC_54(FUNC_13(VAR_27->dialog), VAR_13);

    if (VAR_20)
    {
 FUNC_55(FUNC_13(VAR_27->dialog),
        FUNC_0(&VAR_31, (FUNC_14("VIM - Search and Replace..."))));
    }
    else
    {
 FUNC_55(FUNC_13(VAR_27->dialog),
        FUNC_0(&VAR_31, (FUNC_14("VIM - Search..."))));
    }

    VAR_21 = FUNC_33(VAR_1, 0);
    FUNC_27(FUNC_3(VAR_21), 10);
    FUNC_25(FUNC_3(FUNC_4(VAR_27->dialog)->vbox), VAR_21);

    if (VAR_20)
 VAR_23 = FUNC_42(1024, 4, VAR_1);
    else
 VAR_23 = FUNC_42(1024, 3, VAR_1);
    FUNC_22(FUNC_2(VAR_21), VAR_23, VAR_13, VAR_13, 0);
    FUNC_26(FUNC_3(VAR_23), 4);

    VAR_24 = FUNC_34(FUNC_0(&VAR_31, (FUNC_14("Find what:"))));
    FUNC_35(FUNC_6(VAR_24), (gfloat)0.0, (gfloat)0.5);
    FUNC_41(FUNC_10(VAR_23), VAR_24, 0, 1, 0, 1,
       VAR_8, VAR_7, 2, 2);
    VAR_27->what = FUNC_30();
    VAR_26 = (VAR_28 != ((void*)0) && VAR_28[0] != VAR_12);
    if (VAR_28 != ((void*)0))
 FUNC_31(FUNC_5(VAR_27->what), (char *)VAR_28);
    FUNC_38(FUNC_7(VAR_27->what), "changed",
         FUNC_9(FUNC_17), VAR_27->dialog);
    FUNC_39(FUNC_7(VAR_27->what), "key_press_event",
     FUNC_9(FUNC_18),
     (gpointer) VAR_27);
    FUNC_41(FUNC_10(VAR_23), VAR_27->what, 1, 1024, 0, 1,
       VAR_7 | VAR_8, VAR_7, 2, 2);

    if (VAR_20)
    {
 VAR_24 = FUNC_34(FUNC_0(&VAR_31, (FUNC_14("Replace with:"))));
 FUNC_35(FUNC_6(VAR_24), (gfloat)0.0, (gfloat)0.5);
 FUNC_41(FUNC_10(VAR_23), VAR_24, 0, 1, 1, 2,
    VAR_8, VAR_7, 2, 2);
 VAR_27->with = FUNC_30();
 FUNC_38(FUNC_7(VAR_27->with), "activate",
      FUNC_9(FUNC_19),
      FUNC_1(VAR_5));
 FUNC_39(FUNC_7(VAR_27->with), "key_press_event",
     FUNC_9(FUNC_18),
     (gpointer) VAR_27);
 FUNC_41(FUNC_10(VAR_23), VAR_27->with, 1, 1024, 1, 2,
    VAR_7 | VAR_8, VAR_7, 2, 2);





 FUNC_38(FUNC_7(VAR_27->what), "activate",
      FUNC_9(FUNC_16), VAR_27->with);
    }
    else
    {



 FUNC_38(FUNC_7(VAR_27->what), "activate",
      FUNC_9(FUNC_19),
      FUNC_1(VAR_2));
    }


    VAR_27->wword = FUNC_24(FUNC_0(&VAR_31, (FUNC_14("Match whole word only"))));
    FUNC_43(FUNC_11(VAR_27->wword),
       (gboolean)VAR_29);
    if (VAR_20)
 FUNC_41(FUNC_10(VAR_23), VAR_27->wword, 0, 1023, 2, 3,
    VAR_8, VAR_7, 2, 2);
    else
 FUNC_41(FUNC_10(VAR_23), VAR_27->wword, 0, 1023, 1, 2,
    VAR_8, VAR_7, 2, 2);


    VAR_27->mcase = FUNC_24(FUNC_0(&VAR_31, (FUNC_14("Match case"))));
    FUNC_43(FUNC_11(VAR_27->mcase),
            (gboolean)VAR_30);
    if (VAR_20)
 FUNC_41(FUNC_10(VAR_23), VAR_27->mcase, 0, 1023, 3, 4,
    VAR_8, VAR_7, 2, 2);
    else
 FUNC_41(FUNC_10(VAR_23), VAR_27->mcase, 0, 1023, 2, 3,
    VAR_8, VAR_7, 2, 2);

    VAR_24 = FUNC_32(FUNC_0(&VAR_31, (FUNC_14("Direction"))));
    if (VAR_20)
 FUNC_41(FUNC_10(VAR_23), VAR_24, 1023, 1024, 2, 4,
    VAR_8, VAR_8, 2, 2);
    else
 FUNC_41(FUNC_10(VAR_23), VAR_24, 1023, 1024, 1, 3,
    VAR_8, VAR_8, 2, 2);
    VAR_25 = FUNC_44(VAR_1, 0);
    FUNC_26(FUNC_3(VAR_25), 0);
    FUNC_25(FUNC_3(VAR_24), VAR_25);


    VAR_27->up = FUNC_37(((void*)0), FUNC_0(&VAR_31, (FUNC_14("Up"))));
    FUNC_22(FUNC_2(VAR_25), VAR_27->up, VAR_13, VAR_13, 0);
    VAR_27->down = FUNC_37(
   FUNC_36(FUNC_8(VAR_27->up)),
   FUNC_0(&VAR_31, (FUNC_14("Down"))));
    FUNC_43(FUNC_11(VAR_27->down), VAR_13);
    FUNC_27(FUNC_3(VAR_25), 2);
    FUNC_22(FUNC_2(VAR_25), VAR_27->down, VAR_13, VAR_13, 0);


    VAR_22 = FUNC_45();
    FUNC_26(FUNC_3(VAR_22), 2);
    FUNC_21(FUNC_2(VAR_21), VAR_22, VAR_1, VAR_1, 0);


    VAR_27->find = FUNC_15(VAR_11, FUNC_14("Find Next"));
    FUNC_50(VAR_27->find, VAR_26);

    FUNC_38(FUNC_7(VAR_27->find), "clicked",
         FUNC_9(FUNC_19),
         (VAR_20) ? FUNC_1(VAR_5)
        : FUNC_1(VAR_2));

    FUNC_12(VAR_27->find, VAR_6);
    FUNC_22(FUNC_2(VAR_22), VAR_27->find, VAR_1, VAR_1, 0);
    FUNC_47(VAR_27->find);

    if (VAR_20)
    {

 VAR_27->replace = FUNC_15(VAR_10, FUNC_14("Replace"));
 FUNC_50(VAR_27->replace, VAR_26);
 FUNC_12(VAR_27->replace, VAR_6);
 FUNC_22(FUNC_2(VAR_22), VAR_27->replace, VAR_1, VAR_1, 0);
 FUNC_38(FUNC_7(VAR_27->replace), "clicked",
      FUNC_9(FUNC_19),
      FUNC_1(VAR_3));


 VAR_27->all = FUNC_15(VAR_10, FUNC_14("Replace All"));
 FUNC_50(VAR_27->all, VAR_26);
 FUNC_12(VAR_27->all, VAR_6);
 FUNC_22(FUNC_2(VAR_22), VAR_27->all, VAR_1, VAR_1, 0);
 FUNC_38(FUNC_7(VAR_27->all), "clicked",
      FUNC_9(FUNC_19),
      FUNC_1(VAR_4));
    }


    VAR_24 = FUNC_23(VAR_9);
    FUNC_12(VAR_24, VAR_6);
    FUNC_21(FUNC_2(VAR_22), VAR_24, VAR_1, VAR_1, 0);
    FUNC_40(FUNC_7(VAR_24),
         "clicked", FUNC_9(FUNC_48),
         FUNC_7(VAR_27->dialog));
    FUNC_40(FUNC_7(VAR_27->dialog),
         "delete_event", FUNC_9(FUNC_49),
         FUNC_7(VAR_27->dialog));

    VAR_24 = FUNC_46();
    FUNC_21(FUNC_2(VAR_21), VAR_24, VAR_1, VAR_1, 10);


    FUNC_48(FUNC_4(VAR_27->dialog)->action_area);
    FUNC_52(VAR_21);
    FUNC_51(VAR_27->dialog);

    FUNC_58(VAR_28);
    FUNC_58(VAR_31);

}

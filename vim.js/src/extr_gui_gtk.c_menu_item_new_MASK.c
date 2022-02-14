
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* actext; int id; int label; int name; } ;
typedef TYPE_1__ vimmenu_T ;
typedef int char_u ;
typedef int GtkWidget ;


 int * FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int *) ;
 int * FUNC_8 (int ,int) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 char* VAR_2 ;
 int * FUNC_13 (int ,int) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void
FUNC_15(vimmenu_T *VAR_3, GtkWidget *VAR_4)
{
    GtkWidget *VAR_5;
    char_u *VAR_6;
    int VAR_7;




    VAR_3->id = FUNC_11();
    VAR_5 = FUNC_8(VAR_0, 20);

    VAR_7 = (VAR_2[0] != 'n' || !FUNC_4(VAR_4));
    VAR_6 = FUNC_13(VAR_3->name, VAR_7);

    VAR_3->label = FUNC_10((const char *)VAR_6);
    FUNC_14(VAR_6);

    FUNC_6(FUNC_2(VAR_5), VAR_3->label, VAR_0, VAR_0, 0);

    if (VAR_3->actext != ((void*)0) && VAR_3->actext[0] != VAR_1)
    {
 VAR_6 = FUNC_0(VAR_3->actext);

 FUNC_5(FUNC_2(VAR_5),
    FUNC_9((const char *)VAR_6),
    VAR_0, VAR_0, 0);

 FUNC_1(VAR_6);
    }

    FUNC_7(FUNC_3(VAR_3->id), VAR_5);
    FUNC_12(VAR_3->id);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int col; int lnum; } ;
struct TYPE_5__ {TYPE_1__ w_cursor; } ;
typedef TYPE_2__ win_T ;
typedef int VALUE ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 () ;
 TYPE_2__* FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static VALUE FUNC_9(VALUE VAR_4, VALUE VAR_5)
{
    VALUE VAR_6, VAR_7;
    win_T *VAR_8 = FUNC_6(VAR_4);

    FUNC_0(VAR_5, VAR_2);
    if (FUNC_3(VAR_5) != 2)
 FUNC_7(VAR_3, "array length must be 2");
    VAR_6 = FUNC_4(VAR_5)[0];
    VAR_7 = FUNC_4(VAR_5)[1];
    VAR_8->w_cursor.lnum = FUNC_1(VAR_6);
    VAR_8->w_cursor.col = FUNC_2(VAR_7);
    FUNC_5();
    FUNC_8(VAR_0);
    return VAR_1;
}

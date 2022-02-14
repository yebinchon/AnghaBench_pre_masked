
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int linenr_T ;
typedef int char_u ;
struct TYPE_3__ {int ml_line_count; } ;
struct TYPE_4__ {TYPE_1__ b_ml; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void
FUNC_7()
{
    char_u *VAR_4;
    int VAR_5, VAR_6, VAR_7;





    FUNC_2((char_u *)"%s/\232/\202\231/g");

    for (VAR_5 = 1; VAR_5 <= VAR_2->b_ml.ml_line_count; ++VAR_5)
    {
 VAR_4 = FUNC_4((linenr_T)VAR_5);

 VAR_6 = (int)FUNC_1(VAR_4);

 for ( VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {
     VAR_4[VAR_7] = FUNC_6(VAR_4[VAR_7]);

 }
    }


    FUNC_5(VAR_0);
    FUNC_0(VAR_3, FUNC_3(VAR_1));
}

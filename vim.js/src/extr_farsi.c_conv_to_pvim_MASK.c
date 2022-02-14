
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
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

void
FUNC_14()
{
    char_u *VAR_4;
    int VAR_5, VAR_6, VAR_7;

    for (VAR_5 = 1; VAR_5 <= VAR_2->b_ml.ml_line_count; ++VAR_5)
    {
 VAR_4 = FUNC_8((linenr_T)VAR_5);

 VAR_6 = (int)FUNC_3(VAR_4);

 for ( VAR_7 = 0; VAR_7 < VAR_6-1; VAR_7++)
 {
     if (FUNC_4(VAR_4[VAR_7]) && FUNC_5(VAR_4[VAR_7+1]))
     {
  VAR_4[VAR_7] = FUNC_13(VAR_4[VAR_7]);
  ++VAR_7;

  while (FUNC_5(VAR_4[VAR_7]) && VAR_7 < VAR_6)
  {
      VAR_4[VAR_7] = FUNC_10(VAR_4[VAR_7]);
      if (FUNC_1(VAR_4[VAR_7]) || !FUNC_0(VAR_4[VAR_7]))
   break;
      ++VAR_7;
  }
  if (!FUNC_0(VAR_4[VAR_7]) || !FUNC_5(VAR_4[VAR_7]))
      VAR_4[VAR_7-1] = FUNC_12(VAR_4[VAR_7-1]);
     }
     else
  VAR_4[VAR_7] = FUNC_11(VAR_4[VAR_7]);
 }
    }





    FUNC_6((char_u *)"%s/\202\231/\232/g");
    FUNC_6((char_u *)"%s/\201\231/\370\334/g");


    FUNC_9(VAR_0);
    FUNC_2(VAR_3, FUNC_7(VAR_1));
}

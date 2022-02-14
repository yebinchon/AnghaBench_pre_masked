
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int lnum; int col; } ;
typedef TYPE_2__ pos_T ;
struct TYPE_6__ {char vi_mode; TYPE_2__ vi_end; TYPE_2__ vi_start; } ;
struct TYPE_8__ {TYPE_1__ b_visual; } ;
typedef TYPE_3__ buf_T ;


 int VAR_0 ;
 char VAR_1 ;
 char* FUNC_0 (int ,char*,int*,int*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (char*,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_8(
 buf_T *VAR_2)
{
    pos_T *VAR_3;
    pos_T *VAR_4;
    char *VAR_5;
    int VAR_6;
    char *VAR_7;
    int VAR_8;
    int VAR_9;
    char *VAR_10;
    int VAR_11;

    if (VAR_2->b_visual.vi_mode == 'v')
    {
 VAR_3 = &VAR_2->b_visual.vi_start;
 VAR_4 = &VAR_2->b_visual.vi_end;
 if (VAR_3->lnum == VAR_4->lnum)
 {

     VAR_5 = (char *) FUNC_3(VAR_3);
     VAR_6 = VAR_4->col - VAR_3->col + 1;
     VAR_7 = (char *) FUNC_1(VAR_6 + 1);
     if (VAR_7 != ((void*)0))
     {
  FUNC_7(VAR_7, VAR_5, VAR_6);
  VAR_7[VAR_6] = VAR_1;
     }
 }
 else
 {

     VAR_5 = (char *) FUNC_3(VAR_3);
     VAR_6 = FUNC_6(VAR_5);
     VAR_7 = (char *) FUNC_1(VAR_0 + VAR_6);
     if (VAR_7 != ((void*)0))
     {
  VAR_9 = VAR_0 + VAR_6;
  FUNC_5(VAR_7, VAR_5);
  VAR_7[VAR_6] = '\n';
  VAR_8 = VAR_6 + 1;

  VAR_11 = VAR_3->lnum + 1;
  while (VAR_11 < VAR_4->lnum)
      VAR_7 = FUNC_0(VAR_11++, VAR_7, &VAR_9, &VAR_8);

  VAR_5 = (char *) FUNC_2(VAR_4->lnum);
  VAR_6 = VAR_4->col + 1;
  if ((VAR_8 + VAR_6) >= VAR_9)
  {
      VAR_10 = (char *)
   FUNC_4(VAR_7, VAR_8 + VAR_6 + 1);
      if (VAR_10 != ((void*)0))
      {
   VAR_9 += VAR_6 + 1;
   VAR_7 = VAR_10;
      }
  }
  if ((VAR_8 + VAR_6) < VAR_9)
  {
      FUNC_7(&VAR_7[VAR_8], VAR_5, VAR_6);
      VAR_7[VAR_8 + VAR_6] = VAR_1;
  }

     }
 }
    }
    else
 VAR_7 = ((void*)0);

    return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* wp; TYPE_1__* id; } ;
typedef TYPE_3__ scrollbar_T ;
typedef scalar_t__ gpointer ;
struct TYPE_11__ {scalar_t__ value; } ;
struct TYPE_9__ {int w_topline; } ;
struct TYPE_8__ {int window; } ;
typedef TYPE_4__ GtkAdjustment ;
typedef int GdkModifierType ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int*,int *) ;
 int FUNC_1 (int ,int*,int*) ;
 int FUNC_2 (TYPE_3__*,long,int) ;
 TYPE_3__* FUNC_3 (long) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(GtkAdjustment *VAR_2, gpointer VAR_3)
{
    scrollbar_T *VAR_4;
    long VAR_5;
    int VAR_6 = VAR_0;







    VAR_4 = FUNC_3((long)VAR_3);
    VAR_5 = (long)VAR_2->value;
    if (VAR_4 != ((void*)0))
    {
 VAR_6 = VAR_1;

 if (VAR_4->wp != ((void*)0))
 {
     int VAR_7;
     int VAR_8;
     GdkModifierType VAR_9;
     int VAR_10;
     int VAR_11;



     FUNC_0(VAR_4->id->window, &VAR_7, &VAR_8, &VAR_9);
     FUNC_1(VAR_4->id->window, &VAR_10, &VAR_11);
     if (VAR_7 >= 0 && VAR_7 < VAR_10 && VAR_8 >= 0 && VAR_8 < VAR_11)
     {
  if (VAR_8 < VAR_10)
  {

      VAR_6 = VAR_0;
      VAR_5 = VAR_4->wp->w_topline - 2;
  }
  else if (VAR_8 > VAR_11 - VAR_10)
  {

      VAR_6 = VAR_0;
      VAR_5 = VAR_4->wp->w_topline;
  }
     }
 }
    }

    FUNC_2(VAR_4, VAR_5, VAR_6);
}

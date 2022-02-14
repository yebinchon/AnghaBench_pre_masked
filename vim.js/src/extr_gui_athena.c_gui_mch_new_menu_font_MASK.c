
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; int dname; struct TYPE_5__* next; } ;
typedef TYPE_1__ vimmenu_T ;
typedef scalar_t__ Widget ;
struct TYPE_6__ {int menu_height; int dpy; int menu_height_fixed; } ;
typedef int Position ;
typedef scalar_t__ Pixmap ;
typedef int Dimension ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__,int ,int*,int ,...) ;
 TYPE_4__ VAR_8 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_7 () ;
 scalar_t__ VAR_12 ;
 int FUNC_8 () ;

void
FUNC_9()
{
    Pixmap VAR_13 = VAR_1;

    if (VAR_9 == (Widget)0)
 return;

    if (VAR_10 != VAR_1)
    {
 VAR_13 = VAR_10;
 VAR_10 = FUNC_2(((void*)0));
    }
    FUNC_3(VAR_11, VAR_0);

    {




 vimmenu_T *VAR_14;
 int VAR_15 = 9999;

 for (VAR_14 = VAR_11; VAR_14 != ((void*)0); VAR_14 = VAR_14->next)
 {
     if (FUNC_6(VAR_14->dname))
     {
  Dimension VAR_16;

  FUNC_1(VAR_14->id,
   VAR_5, &VAR_16,
   ((void*)0));
  if (VAR_16 < VAR_15)
      VAR_15 = VAR_16;
     }
 }
 if (VAR_15 != 9999)
 {

     if (!VAR_8.menu_height_fixed)
     {
  Dimension VAR_17, VAR_18;

  FUNC_1(VAR_9,
   VAR_6, &VAR_17,
   VAR_4, &VAR_18,
   ((void*)0));
  VAR_8.menu_height = VAR_15 + 2 * (VAR_17 + VAR_18);
     }
 }
    }






    {
 Position VAR_19, VAR_20;

 FUNC_1(VAR_12,
  VAR_7, &VAR_19,
  VAR_5, &VAR_20,
  ((void*)0));
 FUNC_4(VAR_19, VAR_20



       );
    }
    FUNC_5(VAR_0, VAR_3, VAR_2);
    FUNC_7();
    if (VAR_13 != VAR_1)
 FUNC_0(VAR_8.dpy, VAR_13);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int gpointer ;
struct TYPE_4__ {TYPE_1__* mainwin; } ;
struct TYPE_3__ {int window; } ;
typedef int GIOChannel ;
typedef scalar_t__ Atom ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__**,int*) ;
 int FUNC_5 (int ,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 int FUNC_7 (int *,int,int ,int ) ;
 int * FUNC_8 (int) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (scalar_t__*,scalar_t__*,int) ;
 int VAR_5 ;
 int FUNC_10 (scalar_t__*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_11(void)
{
    Atom *VAR_7 = ((void*)0);
    int VAR_8 = 0;
    {



 if (FUNC_4(FUNC_0(VAR_3.mainwin->window),
      FUNC_1(VAR_3.mainwin->window),
      &VAR_7, &VAR_8))
 {
     Atom *VAR_9;
     Atom VAR_10;
     int VAR_11;

     VAR_10 = FUNC_2(VAR_5);


     for (VAR_11 = 0; VAR_11 < VAR_8; ++VAR_11)
  if (VAR_7[VAR_11] == VAR_10)
      break;

     if (VAR_11 == VAR_8)
     {

  VAR_9 = (Atom *)FUNC_6((unsigned)((VAR_8 + 1)
            * sizeof(Atom)));
  if (VAR_9 != ((void*)0))
  {
      FUNC_9(VAR_9, VAR_7, VAR_8 * sizeof(Atom));
      VAR_9[VAR_8] = VAR_10;
      FUNC_5(FUNC_0(VAR_3.mainwin->window),
       FUNC_1(VAR_3.mainwin->window),
       VAR_9, VAR_8 + 1);
      FUNC_10(VAR_9);
  }
     }
     FUNC_3(VAR_7);
 }
    }
}

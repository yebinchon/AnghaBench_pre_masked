
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* exenamearg; char* name; } ;


 int VAR_0 ;
 int * FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_11(int VAR_7, char **VAR_8)
{
    int VAR_9, VAR_10;

    for (VAR_9 = 1; VAR_9 < VAR_7; VAR_9++)
    {
 if (FUNC_10(VAR_8[VAR_9], "-create-batfiles") == 0)
 {
     if (VAR_9 + 1 == VAR_7)
  continue;
     while (VAR_8[VAR_9 + 1][0] != '-' && VAR_9 < VAR_7)
     {
  VAR_9++;
  for (VAR_10 = 1; VAR_10 < VAR_0; ++VAR_10)
      if ((VAR_3[VAR_10].exenamearg[0] == 'g' ? VAR_1 : VAR_2)
       && FUNC_10(VAR_8[VAR_9], VAR_3[VAR_10].name) == 0)
      {
   FUNC_1(VAR_10);
   break;
      }
  if (VAR_10 == VAR_0)
      FUNC_9("%s is not a valid choice for -create-batfiles\n",
             VAR_8[VAR_9]);

  if (VAR_9 + 1 == VAR_7)
      break;
     }
 }
 else if (FUNC_10(VAR_8[VAR_9], "-create-vimrc") == 0)
 {



     FUNC_7();
 }
 else if (FUNC_10(VAR_8[VAR_9], "-install-popup") == 0)
 {
     FUNC_4();
 }
 else if (FUNC_10(VAR_8[VAR_9], "-install-openwith") == 0)
 {
     FUNC_3();
 }
 else if (FUNC_10(VAR_8[VAR_9], "-add-start-menu") == 0)
 {
     FUNC_6();
 }
 else if (FUNC_10(VAR_8[VAR_9], "-install-icons") == 0)
 {
     FUNC_5();
 }
 else if (FUNC_10(VAR_8[VAR_9], "-create-directories") == 0)
 {
     FUNC_2();
     if (VAR_8[VAR_9 + 1][0] != '-')
     {
  VAR_9++;
  if (FUNC_10(VAR_8[VAR_9], "vim") == 0)
      VAR_4 = (int)VAR_6;
  else if (FUNC_10(VAR_8[VAR_9], "home") == 0)
  {
      if (FUNC_0("HOME") == ((void*)0))
   VAR_4 = (int)VAR_6;
      else
   VAR_4 = (int)VAR_5;
  }
  else
  {
      FUNC_9("Unknown argument for -create-directories: %s\n",
             VAR_8[VAR_9]);
      FUNC_8();
  }
     }
     else
  VAR_4 = (int)VAR_6;
 }






 else
 {
     FUNC_9("Got unknown argument argv[%d] = %s\n", VAR_9, VAR_8[VAR_9]);
     FUNC_8();
 }
    }
}

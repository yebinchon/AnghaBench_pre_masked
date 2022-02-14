
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* text; scalar_t__ active; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(void)
{
    int VAR_2;

    FUNC_0("\n\nInstall will do for you:\n");
    for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
      if (VAR_1[VAR_2].active)
   FUNC_0("%2d  %s\n", VAR_2 + 1, VAR_1[VAR_2].text);
    FUNC_0("To change an item, enter its number\n\n");
    FUNC_0("Enter item number, h (help), d (do it) or q (quit): ");
}

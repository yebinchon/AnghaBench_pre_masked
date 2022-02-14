
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int active; scalar_t__ arg; int * installfunc; int changefunc; int text; } ;
struct TYPE_3__ {char* exenamearg; int * oldexe; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static void
FUNC_2(void)
{
    int VAR_8;



    VAR_4[VAR_3].text = VAR_1;
    VAR_4[VAR_3].changefunc = VAR_2;
    VAR_4[VAR_3].installfunc = ((void*)0);
    VAR_4[VAR_3].active = 1;
    VAR_4[VAR_3].arg = 0;
    ++VAR_3;



    for (VAR_8 = 1; VAR_8 < VAR_0; ++VAR_8)
 if (VAR_7[VAR_8].oldexe == ((void*)0)
  && (VAR_7[VAR_8].exenamearg[0] == 'g' ? VAR_5 : VAR_6))
     FUNC_1(VAR_8);
 else
     FUNC_0();
}

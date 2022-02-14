
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; int name; } ;
typedef int FILE ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static bool
FUNC_3(FILE *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  if (VAR_0[VAR_3].value == VAR_2)
   return FUNC_2(VAR_1, " %-8s", FUNC_1(VAR_0[VAR_3].name));

 return FUNC_2(VAR_1, " color%d", VAR_2);
}

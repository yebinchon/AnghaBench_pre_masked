
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* defnamespace; void* defname; int * arg; } ;
typedef int Node ;
typedef TYPE_1__ DefElem ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (void*) ;
 TYPE_1__* FUNC_3 (int) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static DefElem *
FUNC_5(Datum *VAR_1, int VAR_2)
{
 DefElem *VAR_3 = FUNC_3(sizeof(*VAR_3));
 switch (VAR_2)
 {
  case 1:
   VAR_3->defname = FUNC_4(FUNC_0(VAR_1[0]));
   break;
  case 3:
   VAR_3->arg = (Node *) FUNC_2(FUNC_4(FUNC_0(VAR_1[2])));

  case 2:
   VAR_3->defname = FUNC_4(FUNC_0(VAR_1[1]));
   VAR_3->defnamespace = FUNC_4(FUNC_0(VAR_1[0]));
   break;
  default:
   FUNC_1(VAR_0, "%d elements invalid for defelem", VAR_2);
 }
 return VAR_3;
}

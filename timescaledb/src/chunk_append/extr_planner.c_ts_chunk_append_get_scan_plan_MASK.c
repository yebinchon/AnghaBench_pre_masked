
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int scanrelid; } ;
struct TYPE_10__ {TYPE_1__ scan; } ;
struct TYPE_9__ {struct TYPE_9__* lefttree; } ;
typedef int Scan ;
typedef TYPE_2__ Plan ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_2__*) ;

Scan *
FUNC_4(Plan *VAR_4)
{
 if (VAR_4 != ((void*)0) && (FUNC_0(VAR_4, VAR_3) || FUNC_0(VAR_4, VAR_2)))
  VAR_4 = VAR_4->lefttree;

 if (VAR_4 == ((void*)0))
  return ((void*)0);

 switch (FUNC_3(VAR_4))
 {
  case 142:
  case 141:
  case 140:
  case 138:
  case 137:
  case 136:
  case 135:
  case 133:
  case 132:
  case 131:
  case 130:
  case 129:
  case 128:
   return (Scan *) VAR_4;
   break;
  case 139:
   if (FUNC_1(VAR_0, VAR_4)->scan.scanrelid > 0)
    return (Scan *) VAR_4;
   else
    return ((void*)0);
   break;
  case 134:
   return ((void*)0);
   break;
  default:
   FUNC_2(VAR_1, "invalid child of chunk append: %u", FUNC_3(VAR_4));
   return ((void*)0);
   break;
 }
}

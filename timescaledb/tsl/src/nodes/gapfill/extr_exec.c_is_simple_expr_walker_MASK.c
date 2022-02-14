
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int paramkind; } ;
typedef int Node ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int (*) (int *,void*),void*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool
FUNC_3(Node *VAR_2, void *VAR_3)
{
 if (VAR_2 == ((void*)0))
  return 0;






 switch (FUNC_2(VAR_2))
 {




  case 135:
  case 133:
  case 132:
  case 130:
  case 134:
  case 131:
  case 128:
  case 139:
  case 136:
  case 138:
  case 137:
   break;
  case 129:
   if (FUNC_0(VAR_1, VAR_2)->paramkind != VAR_0)
    return 1;
   break;
  default:
   return 1;
 }
 return FUNC_1(VAR_2, FUNC_3, VAR_3);
}

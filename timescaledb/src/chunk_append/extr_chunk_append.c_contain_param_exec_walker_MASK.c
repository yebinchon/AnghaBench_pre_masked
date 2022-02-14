
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ paramkind; } ;
typedef int Node ;


 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int (*) (int *,void*),void*) ;

__attribute__((used)) static bool
FUNC_3(Node *VAR_2, void *VAR_3)
{
 if (VAR_2 == ((void*)0))
  return 0;

 if (FUNC_0(VAR_2, VAR_1))
  return FUNC_1(VAR_1, VAR_2)->paramkind == VAR_0;

 return FUNC_2(VAR_2, FUNC_3, VAR_3);
}

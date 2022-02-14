
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ aggsplit; } ;
typedef int Node ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int (*) (int *,void*),void*) ;

__attribute__((used)) static bool
FUNC_4(Node *VAR_3, void *VAR_4)
{
 if (VAR_3 == ((void*)0))
  return 0;

 if (FUNC_0(VAR_3, VAR_1) && FUNC_1(VAR_1, VAR_3)->aggsplit != VAR_0)
  FUNC_2(VAR_2, "Cannot mix partialized and non-partialized aggregates in the same statement");

 return FUNC_3((Node *) VAR_3, FUNC_4, VAR_4);
}

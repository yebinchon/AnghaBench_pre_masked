
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct promotenode {int ds; } ;
struct TYPE_6__ {int list_head; } ;
typedef TYPE_1__ list_t ;


 int FUNC_0 (int ,void*) ;
 int FUNC_1 (struct promotenode*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,struct promotenode*) ;
 struct promotenode* FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(list_t *VAR_0, void *VAR_1)
{
 struct promotenode *VAR_2;

 if (VAR_0 == ((void*)0) || !FUNC_3(&VAR_0->list_head))
  return;

 while ((VAR_2 = FUNC_5(VAR_0)) != ((void*)0)) {
  FUNC_4(VAR_0, VAR_2);
  FUNC_0(VAR_2->ds, VAR_1);
  FUNC_1(VAR_2, sizeof (*VAR_2));
 }
 FUNC_2(VAR_0);
}

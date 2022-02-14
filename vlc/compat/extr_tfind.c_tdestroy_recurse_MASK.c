
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ key; struct TYPE_4__* rlink; struct TYPE_4__* llink; } ;
typedef TYPE_1__ node_t ;


 int FUNC_0 (TYPE_1__*) ;
 void FUNC_1 (void*) ;

__attribute__((used)) static void
FUNC_2(node_t* VAR_0, void (*VAR_1)(void *))
{
  if (VAR_0->llink != ((void*)0))
    FUNC_2(VAR_0->llink, VAR_1);
  if (VAR_0->rlink != ((void*)0))
    FUNC_2(VAR_0->rlink, VAR_1);

  (*VAR_1) ((void *) VAR_0->key);
  FUNC_0(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdq_item {scalar_t__ references; struct cmdq_item* name; int queue; int * cmdlist; int * client; struct cmdq_item* shared; int * formats; } ;


 int FUNC_0 (int ,struct cmdq_item*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cmdq_item*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct cmdq_item *VAR_1)
{
 if (VAR_1->shared != ((void*)0) && --VAR_1->shared->references == 0) {
  if (VAR_1->shared->formats != ((void*)0))
   FUNC_2(VAR_1->shared->formats);
  FUNC_3(VAR_1->shared);
 }

 if (VAR_1->client != ((void*)0))
  FUNC_4(VAR_1->client);

 if (VAR_1->cmdlist != ((void*)0))
  FUNC_1(VAR_1->cmdlist);

 FUNC_0(VAR_1->queue, VAR_1, VAR_0);

 FUNC_3(VAR_1->name);
 FUNC_3(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdq_item {scalar_t__ group; } ;


 struct cmdq_item* FUNC_0 (struct cmdq_item*,int ) ;
 int FUNC_1 (struct cmdq_item*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct cmdq_item *VAR_1)
{
 struct cmdq_item *VAR_2, *VAR_3;

 if (VAR_1->group == 0)
  return;
 VAR_2 = FUNC_0(VAR_1, VAR_0);
 while (VAR_2 != ((void*)0)) {
  VAR_3 = FUNC_0(VAR_2, VAR_0);
  if (VAR_2->group == VAR_1->group)
   FUNC_1(VAR_2);
  VAR_2 = VAR_3;
 }
}

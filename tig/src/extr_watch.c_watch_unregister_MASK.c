
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watch {struct watch* next; } ;


 int FUNC_0 (struct watch*,int ,int) ;
 struct watch* VAR_0 ;

void
FUNC_1(struct watch *VAR_1)
{
 struct watch *VAR_2, *VAR_3 = ((void*)0);

 for (VAR_2 = VAR_0; VAR_2; VAR_3 = VAR_2, VAR_2 = VAR_2->next) {
  if (VAR_1 != VAR_2)
   continue;
  if (!VAR_3)
   VAR_0 = VAR_1->next;
  else
   VAR_3->next = VAR_1->next;
  break;
 }

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
}

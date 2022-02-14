
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {int id; struct ref* next; } ;


 int VAR_0 ;
 void** FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct ref *VAR_1)
{
 void **VAR_2 = FUNC_0(&VAR_0, VAR_1->id);
 struct ref *VAR_3 = VAR_2 ? *VAR_2 : ((void*)0);
 struct ref *VAR_4 = ((void*)0);

 for (; VAR_3; VAR_4 = VAR_3, VAR_3 = VAR_3->next) {
  if (VAR_3 != VAR_1)
   continue;

  if (!VAR_4)
   *VAR_2 = VAR_1->next;
  else
   VAR_4->next = VAR_1->next;
  VAR_1->next = ((void*)0);
  break;
 }

 if (VAR_2 && !*VAR_2)
  FUNC_1(&VAR_0, VAR_1->id);
}

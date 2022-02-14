
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watch {int triggers; void* state; void* changed; struct watch* next; } ;
typedef enum watch_trigger { ____Placeholder_watch_trigger } watch_trigger ;


 void* VAR_0 ;
 int FUNC_0 (struct watch*) ;
 struct watch* VAR_1 ;

void
FUNC_1(struct watch *VAR_2, enum watch_trigger VAR_3)
{
 FUNC_0(VAR_2);

 VAR_2->next = VAR_1;
 VAR_1 = VAR_2;

 VAR_2->triggers = VAR_3;
 VAR_2->changed = VAR_0;
 VAR_2->state = VAR_0;
}

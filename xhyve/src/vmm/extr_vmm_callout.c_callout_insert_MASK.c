
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callout {int queued; struct callout* next; struct callout* prev; } ;


 scalar_t__ FUNC_0 (struct callout*,struct callout*) ;
 struct callout* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct callout *VAR_1) {
  struct callout *VAR_2 = VAR_0;

  if (!VAR_2) {
    VAR_0 = VAR_1;
    VAR_1->prev = ((void*)0);
    VAR_1->next = ((void*)0);
    VAR_1->queued = 1;
    return;
  }

  if (FUNC_0(VAR_1, VAR_2)) {
    VAR_2->prev = VAR_1;
    VAR_1->prev = ((void*)0);
    VAR_1->next = VAR_2;
    VAR_0 = VAR_1;
    VAR_1->queued = 1;
    return;
  }

  while (VAR_2->next) {
    if (FUNC_0(VAR_1, VAR_2->next)) {
      VAR_1->prev = VAR_2;
      VAR_1->next = VAR_2->next;
      VAR_2->next->prev = VAR_1;
      VAR_2->next = VAR_1;
      VAR_1->queued = 1;
      return;
    }
    VAR_2 = VAR_2->next;
  }

  VAR_1->prev = VAR_2;
  VAR_1->next = ((void*)0);
  VAR_2->next = VAR_1;
  VAR_1->queued = 1;
}

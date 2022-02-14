
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* mstate ;
typedef TYPE_2__* msegmentptr ;
struct TYPE_4__ {char* base; size_t size; struct TYPE_4__* next; } ;
struct TYPE_3__ {TYPE_2__ seg; } ;


 int FUNC_0 (char*,size_t) ;

void FUNC_1(void *VAR_0)
{
  mstate VAR_1 = (mstate)VAR_0;
  msegmentptr VAR_2 = &VAR_1->seg;
  while (VAR_2 != 0) {
    char *VAR_3 = VAR_2->base;
    size_t VAR_4 = VAR_2->size;
    VAR_2 = VAR_2->next;
    FUNC_0(VAR_3, VAR_4);
  }
}

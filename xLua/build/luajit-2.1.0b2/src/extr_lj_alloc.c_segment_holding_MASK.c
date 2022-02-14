
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* mstate ;
typedef TYPE_2__* msegmentptr ;
struct TYPE_6__ {char* base; int size; struct TYPE_6__* next; } ;
struct TYPE_5__ {TYPE_2__ seg; } ;



__attribute__((used)) static msegmentptr FUNC_0(mstate VAR_0, char *VAR_1)
{
  msegmentptr VAR_2 = &VAR_0->seg;
  for (;;) {
    if (VAR_1 >= VAR_2->base && VAR_1 < VAR_2->base + VAR_2->size)
      return VAR_2;
    if ((VAR_2 = VAR_2->next) == 0)
      return 0;
  }
}

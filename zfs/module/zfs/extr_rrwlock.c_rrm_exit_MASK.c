
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* locks; } ;
typedef TYPE_1__ rrmlock_t ;
struct TYPE_5__ {scalar_t__ rr_writer; } ;


 int VAR_0 ;
 size_t FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,void*) ;

void
FUNC_2(rrmlock_t *VAR_2, void *VAR_3)
{
 int VAR_4;

 if (VAR_2->locks[0].rr_writer == VAR_1) {
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   FUNC_1(&VAR_2->locks[VAR_4], VAR_3);
 } else {
  FUNC_1(&VAR_2->locks[FUNC_0()], VAR_3);
 }
}

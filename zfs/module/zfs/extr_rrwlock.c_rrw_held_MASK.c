
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rr_writer; int rr_lock; int rr_anon_rcount; } ;
typedef TYPE_1__ rrwlock_t ;
typedef scalar_t__ krw_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

boolean_t
FUNC_4(rrwlock_t *VAR_2, krw_t VAR_3)
{
 boolean_t VAR_4;

 FUNC_0(&VAR_2->rr_lock);
 if (VAR_3 == VAR_0) {
  VAR_4 = (VAR_2->rr_writer == VAR_1);
 } else {
  VAR_4 = (!FUNC_3(&VAR_2->rr_anon_rcount) ||
      FUNC_2(VAR_2) != ((void*)0));
 }
 FUNC_1(&VAR_2->rr_lock);

 return (VAR_4);
}

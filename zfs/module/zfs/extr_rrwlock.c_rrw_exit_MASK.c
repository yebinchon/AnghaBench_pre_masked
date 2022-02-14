
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ rc_count; } ;
struct TYPE_6__ {int rr_lock; int rr_cv; int * rr_writer; TYPE_2__ rr_linked_rcount; TYPE_2__ rr_anon_rcount; int rr_track_all; } ;
typedef TYPE_1__ rrwlock_t ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,void*) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,void*) ;

void
FUNC_8(rrwlock_t *VAR_2, void *VAR_3)
{
 FUNC_3(&VAR_2->rr_lock);
 FUNC_0(!FUNC_6(&VAR_2->rr_anon_rcount) ||
     !FUNC_6(&VAR_2->rr_linked_rcount) ||
     VAR_2->rr_writer != ((void*)0));

 if (VAR_2->rr_writer == ((void*)0)) {
  int64_t VAR_4;
  if (FUNC_5(VAR_2, VAR_3)) {
   VAR_4 = FUNC_7(
       &VAR_2->rr_linked_rcount, VAR_3);
  } else {
   FUNC_0(!VAR_2->rr_track_all);
   VAR_4 = FUNC_7(&VAR_2->rr_anon_rcount, VAR_3);
  }
  if (VAR_4 == 0)
   FUNC_2(&VAR_2->rr_cv);
 } else {
  FUNC_0(VAR_2->rr_writer == VAR_0);
  FUNC_0(FUNC_6(&VAR_2->rr_anon_rcount) &&
      FUNC_6(&VAR_2->rr_linked_rcount));
  VAR_2->rr_writer = ((void*)0);
  FUNC_2(&VAR_2->rr_cv);
 }
 FUNC_4(&VAR_2->rr_lock);
}

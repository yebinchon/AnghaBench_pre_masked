
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; scalar_t__ interval; scalar_t__* burst; int lock; scalar_t__ start; } ;
typedef TYPE_1__ zfs_ratelimit_t ;
typedef scalar_t__ hrtime_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(zfs_ratelimit_t *VAR_0)
{
 hrtime_t VAR_1;

 hrtime_t VAR_2;
 int VAR_3 = 1;

 FUNC_2(&VAR_0->lock);

 VAR_1 = FUNC_1();
 VAR_2 = VAR_1 - VAR_0->start;

 VAR_0->count++;
 if (FUNC_0(VAR_2) >= VAR_0->interval) {
  VAR_0->start = VAR_1;
  VAR_0->count = 0;
 } else {
  if (VAR_0->count >= *VAR_0->burst) {
   VAR_3 = 0;
  }
 }
 FUNC_3(&VAR_0->lock);

 return (VAR_3);
}

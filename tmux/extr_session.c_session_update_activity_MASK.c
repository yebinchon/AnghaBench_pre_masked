
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct session {scalar_t__ attached; int lock_timer; int options; struct timeval activity_time; int name; int id; struct timeval last_activity_time; } ;


 int FUNC_0 (int *,struct timeval*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,struct session*) ;
 int FUNC_4 (struct timeval*,int *) ;
 int FUNC_5 (char*,int ,int ,long long,int,long long,int) ;
 int FUNC_6 (struct timeval*,struct timeval*,int) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 int VAR_0 ;
 int FUNC_8 (struct timeval*) ;

void
FUNC_9(struct session *VAR_1, struct timeval *VAR_2)
{
 struct timeval *VAR_3 = &VAR_1->last_activity_time;
 struct timeval VAR_4;

 FUNC_6(VAR_3, &VAR_1->activity_time, sizeof *VAR_3);
 if (VAR_2 == ((void*)0))
  FUNC_4(&VAR_1->activity_time, ((void*)0));
 else
  FUNC_6(&VAR_1->activity_time, VAR_2, sizeof VAR_1->activity_time);

 FUNC_5("session $%u %s activity %lld.%06d (last %lld.%06d)", VAR_1->id,
     VAR_1->name, (long long)VAR_1->activity_time.tv_sec,
     (int)VAR_1->activity_time.tv_usec, (long long)VAR_3->tv_sec,
     (int)VAR_3->tv_usec);

 if (FUNC_2(&VAR_1->lock_timer))
  FUNC_1(&VAR_1->lock_timer);
 else
  FUNC_3(&VAR_1->lock_timer, VAR_0, VAR_1);

 if (VAR_1->attached != 0) {
  FUNC_8(&VAR_4);
  VAR_4.tv_sec = FUNC_7(VAR_1->options, "lock-after-time");
  if (VAR_4.tv_sec != 0)
   FUNC_0(&VAR_1->lock_timer, &VAR_4);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; int tv_usec; } ;
struct session {int flags; int name; int last_activity_time; int activity_time; int options; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *,struct timeval*) ;

__attribute__((used)) static int
FUNC_3(struct session *VAR_1)
{
 struct timeval VAR_2;
 int VAR_3;

 if ((VAR_3 = FUNC_1(VAR_1->options, "assume-paste-time")) == 0)
  return (0);

 FUNC_2(&VAR_1->activity_time, &VAR_1->last_activity_time, &VAR_2);
 if (VAR_2.tv_sec == 0 && VAR_2.tv_usec < VAR_3 * 1000) {
  FUNC_0("session %s pasting (flag %d)", VAR_1->name,
      !!(VAR_1->flags & VAR_0));
  if (VAR_1->flags & VAR_0)
   return (1);
  VAR_1->flags |= VAR_0;
  return (0);
 }
 FUNC_0("session %s not pasting", VAR_1->name);
 VAR_1->flags &= ~VAR_0;
 return (0);
}

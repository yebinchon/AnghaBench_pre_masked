
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window {int alerts_timer; int id; int options; int flags; } ;
struct timeval {scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct timeval*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,struct window*) ;
 int FUNC_4 (char*,int ,int ) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (struct timeval*) ;

__attribute__((used)) static void
FUNC_7(struct window *VAR_2)
{
 struct timeval VAR_3;

 if (!FUNC_2(&VAR_2->alerts_timer))
  FUNC_3(&VAR_2->alerts_timer, VAR_1, VAR_2);

 VAR_2->flags &= ~VAR_0;
 FUNC_1(&VAR_2->alerts_timer);

 FUNC_6(&VAR_3);
 VAR_3.tv_sec = FUNC_5(VAR_2->options, "monitor-silence");

 FUNC_4("@%u alerts timer reset %u", VAR_2->id, (u_int)VAR_3.tv_sec);
 if (VAR_3.tv_sec != 0)
  FUNC_0(&VAR_2->alerts_timer, &VAR_3);
}

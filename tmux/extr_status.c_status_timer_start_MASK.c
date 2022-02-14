
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct session {int options; } ;
struct TYPE_2__ {int timer; } ;
struct client {TYPE_1__ status; struct session* session; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int (*) (int,int ,struct client*),struct client*) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int,int ,struct client*) ;

void
FUNC_5(struct client *VAR_0)
{
 struct session *VAR_1 = VAR_0->session;

 if (FUNC_0(&VAR_0->status.timer))
  FUNC_1(&VAR_0->status.timer);
 else
  FUNC_2(&VAR_0->status.timer, FUNC_4, VAR_0);

 if (VAR_1 != ((void*)0) && FUNC_3(VAR_1->options, "status"))
  FUNC_4(-1, 0, VAR_0);
}

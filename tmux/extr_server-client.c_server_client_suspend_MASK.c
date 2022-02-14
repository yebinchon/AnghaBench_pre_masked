
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {int dummy; } ;
struct client {int flags; int peer; int tty; struct session* session; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int *,int ) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct client *VAR_3)
{
 struct session *VAR_4 = VAR_3->session;

 if (VAR_4 == ((void*)0) || (VAR_3->flags & VAR_0))
  return;

 FUNC_1(&VAR_3->tty);
 VAR_3->flags |= VAR_1;
 FUNC_0(VAR_3->peer, VAR_2, -1, ((void*)0), 0);
}

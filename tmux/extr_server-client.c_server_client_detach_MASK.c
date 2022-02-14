
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {int name; } ;
struct client {int flags; int peer; struct session* session; } ;
typedef enum msgtype { ____Placeholder_msgtype } msgtype ;


 int VAR_0 ;
 int FUNC_0 (char*,struct client*) ;
 int FUNC_1 (int ,int,int,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

void
FUNC_3(struct client *VAR_1, enum msgtype VAR_2)
{
 struct session *VAR_3 = VAR_1->session;

 if (VAR_3 == ((void*)0) || (VAR_1->flags & VAR_0))
  return;

 VAR_1->flags |= VAR_0;
 FUNC_0("client-detached", VAR_1);
 FUNC_1(VAR_1->peer, VAR_2, -1, VAR_3->name, FUNC_2(VAR_3->name) + 1);
}

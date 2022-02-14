
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct session {int statusat; } ;
struct TYPE_2__ {int sy; } ;
struct client {int flags; TYPE_1__ tty; struct session* session; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct client*) ;

int
FUNC_1(struct client *VAR_2)
{
 struct session *VAR_3 = VAR_2->session;

 if (VAR_2->flags & (VAR_1|VAR_0))
  return (-1);
 if (VAR_3->statusat != 1)
  return (VAR_3->statusat);
 return (VAR_2->tty.sy - FUNC_0(VAR_2));
}

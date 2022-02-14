
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct session {int statuslines; } ;
struct client {int flags; struct session* session; } ;


 int VAR_0 ;
 int VAR_1 ;

u_int
FUNC_0(struct client *VAR_2)
{
 struct session *VAR_3 = VAR_2->session;

 if (VAR_2->flags & (VAR_1|VAR_0))
  return (0);
 return (VAR_3->statuslines);
}

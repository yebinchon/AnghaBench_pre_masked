
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winlink {int dummy; } ;
struct window {int dummy; } ;
struct session {int windows; struct winlink* curw; } ;
struct mouse_event {int s; int w; int valid; } ;


 struct session* FUNC_0 (int) ;
 struct window* FUNC_1 (int) ;
 struct winlink* FUNC_2 (int *,struct window*) ;

struct winlink *
FUNC_3(struct mouse_event *VAR_0, struct session **VAR_1)
{
 struct session *VAR_2;
 struct window *VAR_3;
 struct winlink *VAR_4;

 if (!VAR_0->valid)
  return (((void*)0));
 if (VAR_0->s == -1 || (VAR_2 = FUNC_0(VAR_0->s)) == ((void*)0))
  return (((void*)0));
 if (VAR_0->w == -1)
  VAR_4 = VAR_2->curw;
 else {
  if ((VAR_3 = FUNC_1(VAR_0->w)) == ((void*)0))
   return (((void*)0));
  VAR_4 = FUNC_2(&VAR_2->windows, VAR_3);
 }
 if (VAR_1 != ((void*)0))
  *VAR_1 = VAR_2;
 return (VAR_4);
}

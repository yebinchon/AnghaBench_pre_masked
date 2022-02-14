
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct window {int options; struct client* latest; } ;
struct client {TYPE_2__* session; } ;
struct TYPE_4__ {TYPE_1__* curw; } ;
struct TYPE_3__ {struct window* window; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (struct window*) ;

__attribute__((used)) static void
FUNC_2(struct client *VAR_1)
{
 struct window *VAR_2;

 if (VAR_1->session == ((void*)0))
  return;
 VAR_2 = VAR_1->session->curw->window;

 if (VAR_2->latest == VAR_1)
  return;
 VAR_2->latest = VAR_1;

 if (FUNC_0(VAR_2->options, "window-size") == VAR_0)
  FUNC_1(VAR_2);
}

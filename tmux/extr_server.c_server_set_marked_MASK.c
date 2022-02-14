
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct winlink {int window; } ;
struct window_pane {int dummy; } ;
struct session {int dummy; } ;
struct TYPE_3__ {struct window_pane* wp; int w; struct winlink* wl; struct session* s; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__ VAR_0 ;

void
FUNC_1(struct session *VAR_1, struct winlink *VAR_2, struct window_pane *VAR_3)
{
 FUNC_0(&VAR_0, 0);
 VAR_0.s = VAR_1;
 VAR_0.wl = VAR_2;
 VAR_0.w = VAR_2->window;
 VAR_0.wp = VAR_3;
}

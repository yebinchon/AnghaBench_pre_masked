
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct winlink {TYPE_1__* window; } ;
struct window_tree_itemdata {scalar_t__ type; int pane; int winlink; int session; } ;
struct window_pane {int dummy; } ;
struct session {int windows; struct winlink* curw; } ;
struct TYPE_2__ {struct window_pane* active; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct session* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,struct window_pane*) ;
 struct window_pane* FUNC_2 (int ) ;
 struct winlink* FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct window_tree_itemdata *VAR_2, struct session **VAR_3,
    struct winlink **VAR_4, struct window_pane **VAR_5)
{
 *VAR_5 = ((void*)0);
 *VAR_4 = ((void*)0);
 *VAR_3 = FUNC_0(VAR_2->session);
 if (*VAR_3 == ((void*)0))
  return;
 if (VAR_2->type == VAR_0) {
  *VAR_4 = (*VAR_3)->curw;
  *VAR_5 = (*VAR_4)->window->active;
  return;
 }

 *VAR_4 = FUNC_3(&(*VAR_3)->windows, VAR_2->winlink);
 if (*VAR_4 == ((void*)0)) {
  *VAR_3 = ((void*)0);
  return;
 }
 if (VAR_2->type == VAR_1) {
  *VAR_5 = (*VAR_4)->window->active;
  return;
 }

 *VAR_5 = FUNC_2(VAR_2->pane);
 if (!FUNC_1((*VAR_4)->window, *VAR_5))
  *VAR_5 = ((void*)0);
 if (*VAR_5 == ((void*)0)) {
  *VAR_3 = ((void*)0);
  *VAR_4 = ((void*)0);
  return;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct window_pane {TYPE_1__* event; } ;
struct evbuffer {int dummy; } ;
struct TYPE_2__ {struct evbuffer* input; } ;


 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*) ;
 int FUNC_2 (struct evbuffer*,int ) ;
 int FUNC_3 (struct window_pane*,int ,int ) ;

void
FUNC_4(struct window_pane *VAR_0)
{
 struct evbuffer *VAR_1 = VAR_0->event->input;

 FUNC_3(VAR_0, FUNC_0(VAR_1), FUNC_1(VAR_1));
 FUNC_2(VAR_1, FUNC_1(VAR_1));
}

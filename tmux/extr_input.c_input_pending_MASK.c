
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct window_pane {TYPE_1__* ictx; } ;
struct evbuffer {int dummy; } ;
struct TYPE_2__ {struct evbuffer* since_ground; } ;



struct evbuffer *
FUNC_0(struct window_pane *VAR_0)
{
 return (VAR_0->ictx->since_ground);
}

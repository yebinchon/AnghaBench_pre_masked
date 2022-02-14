
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct window {scalar_t__ sx; scalar_t__ sy; } ;
struct tty {scalar_t__ sx; scalar_t__ sy; struct client* client; } ;
struct client {TYPE_2__* session; } ;
struct TYPE_4__ {TYPE_1__* curw; } ;
struct TYPE_3__ {struct window* window; } ;


 scalar_t__ FUNC_0 (struct client*) ;

int
FUNC_1(struct tty *VAR_0)
{
 struct client *VAR_1 = VAR_0->client;
 struct window *VAR_2 = VAR_1->session->curw->window;

 return (VAR_0->sx < VAR_2->sx || VAR_0->sy - FUNC_0(VAR_1) < VAR_2->sy);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct client {TYPE_1__ tty; int * overlay_key; int * overlay_draw; int (* overlay_free ) (struct client*) ;int overlay_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct client*) ;
 int FUNC_3 (struct client*) ;

__attribute__((used)) static void
FUNC_4(struct client *VAR_2)
{
 if (VAR_2->overlay_draw == ((void*)0))
  return;

 if (FUNC_0(&VAR_2->overlay_timer))
  FUNC_1(&VAR_2->overlay_timer);

 if (VAR_2->overlay_free != ((void*)0))
  VAR_2->overlay_free(VAR_2);

 VAR_2->overlay_draw = ((void*)0);
 VAR_2->overlay_key = ((void*)0);

 VAR_2->tty.flags &= ~(VAR_0|VAR_1);
 FUNC_2(VAR_2);
}

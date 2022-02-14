
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct client {int flags; TYPE_1__ tty; int * prompt_string; int * message_string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct client*) ;

void
FUNC_2(struct client *VAR_3)
{
 if (VAR_3->message_string == ((void*)0))
  return;

 FUNC_0(VAR_3->message_string);
 VAR_3->message_string = ((void*)0);

 if (VAR_3->prompt_string == ((void*)0))
  VAR_3->tty.flags &= ~(VAR_2|VAR_1);
 VAR_3->flags |= VAR_0;

 FUNC_1(VAR_3);
}

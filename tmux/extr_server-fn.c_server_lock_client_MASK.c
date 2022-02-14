
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int term; } ;
struct client {int flags; int peer; TYPE_2__ tty; TYPE_1__* session; } ;
struct TYPE_4__ {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int,char const*,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ) ;

void
FUNC_6(struct client *VAR_8)
{
 const char *VAR_9;

 if (VAR_8->flags & VAR_0)
  return;

 if (VAR_8->flags & VAR_1)
  return;

 VAR_9 = FUNC_0(VAR_8->session->options, "lock-command");
 if (*VAR_9 == '\0' || FUNC_2(VAR_9) + 1 > VAR_3 - VAR_2)
  return;

 FUNC_4(&VAR_8->tty);
 FUNC_3(&VAR_8->tty, FUNC_5(VAR_8->tty.term, VAR_7));
 FUNC_3(&VAR_8->tty, FUNC_5(VAR_8->tty.term, VAR_5));
 FUNC_3(&VAR_8->tty, FUNC_5(VAR_8->tty.term, VAR_6));

 VAR_8->flags |= VAR_1;
 FUNC_1(VAR_8->peer, VAR_4, -1, VAR_9, FUNC_2(VAR_9) + 1);
}

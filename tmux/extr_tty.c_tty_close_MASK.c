
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int flags; int fd; int term; int event_out; int out; int event_in; int in; int key_timer; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (struct tty*) ;
 int FUNC_7 (int ) ;

void
FUNC_8(struct tty *VAR_1)
{
 if (FUNC_3(&VAR_1->key_timer))
  FUNC_4(&VAR_1->key_timer);
 FUNC_6(VAR_1);

 if (VAR_1->flags & VAR_0) {
  FUNC_1(VAR_1->in);
  FUNC_2(&VAR_1->event_in);
  FUNC_1(VAR_1->out);
  FUNC_2(&VAR_1->event_out);

  FUNC_7(VAR_1->term);
  FUNC_5(VAR_1);

  VAR_1->flags &= ~VAR_0;
 }

 if (VAR_1->fd != -1) {
  FUNC_0(VAR_1->fd);
  VAR_1->fd = -1;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int flags; int timer; int * out; int fd; int event_out; int * in; int event_in; int * term; int term_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 () ;
 int FUNC_1 (int *,int ,int,int ,struct tty*) ;
 int FUNC_2 (int *,int ,struct tty*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct tty*) ;
 int FUNC_5 (struct tty*) ;
 int VAR_8 ;
 int FUNC_6 (struct tty*) ;
 int * FUNC_7 (int ,int ,char**) ;
 int VAR_9 ;
 int VAR_10 ;

int
FUNC_8(struct tty *VAR_11, char **VAR_12)
{
 VAR_11->term = FUNC_7(VAR_11->term_name, VAR_11->fd, VAR_12);
 if (VAR_11->term == ((void*)0)) {
  FUNC_4(VAR_11);
  return (-1);
 }
 VAR_11->flags |= VAR_6;

 VAR_11->flags &= ~(VAR_5|VAR_4|VAR_3|VAR_7);

 FUNC_1(&VAR_11->event_in, VAR_11->fd, VAR_0|VAR_1,
     VAR_8, VAR_11);
 VAR_11->in = FUNC_0();
 if (VAR_11->in == ((void*)0))
  FUNC_3("out of memory");

 FUNC_1(&VAR_11->event_out, VAR_11->fd, VAR_2, VAR_10, VAR_11);
 VAR_11->out = FUNC_0();
 if (VAR_11->out == ((void*)0))
  FUNC_3("out of memory");

 FUNC_2(&VAR_11->timer, VAR_9, VAR_11);

 FUNC_6(VAR_11);

 FUNC_5(VAR_11);

 return (0);
}

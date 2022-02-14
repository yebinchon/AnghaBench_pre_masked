
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int fd; int * mouse_drag_release; int * mouse_drag_update; scalar_t__ mouse_drag_flag; int flags; int term; int tio; int event_in; struct client* client; } ;
struct termios {int c_iflag; int c_oflag; int c_lflag; int* c_cc; } ;
struct client {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 int FUNC_0 (int *,int *) ;
 int VAR_34 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct termios*,int *,int) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int,int *) ;
 scalar_t__ FUNC_7 (int,int ,struct termios*) ;
 scalar_t__ FUNC_8 (struct tty*) ;
 int FUNC_9 (struct tty*,char*) ;
 int FUNC_10 (struct tty*) ;
 int FUNC_11 (struct tty*,int ) ;
 int FUNC_12 (struct tty*,char*) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ,int ) ;

void
FUNC_15(struct tty *VAR_35)
{
 struct client *VAR_36 = VAR_35->client;
 struct termios VAR_37;

 if (VAR_35->fd != -1 && FUNC_6(VAR_35->fd, &VAR_35->tio) == 0) {
  FUNC_4(VAR_35->fd, 0);
  FUNC_0(&VAR_35->event_in, ((void*)0));

  FUNC_2(&VAR_37, &VAR_35->tio, sizeof VAR_37);
  VAR_37.c_iflag &= ~(VAR_16|VAR_15|VAR_7|VAR_12|VAR_10|VAR_11|VAR_14);
  VAR_37.c_iflag |= VAR_9;
  VAR_37.c_oflag &= ~(VAR_20|VAR_18|VAR_17|VAR_19);
  VAR_37.c_lflag &= ~(VAR_8|VAR_6|VAR_0|VAR_2|VAR_4|VAR_1|
      VAR_5|VAR_3|VAR_13);
  VAR_37.c_cc[VAR_32] = 1;
  VAR_37.c_cc[VAR_33] = 0;
  if (FUNC_7(VAR_35->fd, VAR_22, &VAR_37) == 0)
   FUNC_5(VAR_35->fd, VAR_21);
 }

 FUNC_11(VAR_35, VAR_27);

 FUNC_11(VAR_35, VAR_28);
 FUNC_11(VAR_35, VAR_23);

 if (FUNC_8(VAR_35)) {
  FUNC_1("%s: using capabilities for ACS", VAR_36->name);
  FUNC_11(VAR_35, VAR_25);
 } else
  FUNC_1("%s: using UTF-8 for ACS", VAR_36->name);

 FUNC_11(VAR_35, VAR_24);
 if (FUNC_14(VAR_35->term, VAR_26))
  FUNC_12(VAR_35, "\033[?1000l\033[?1002l\033[?1006l\033[?1005l");

 if (FUNC_13(VAR_35->term, VAR_29)) {
  if (FUNC_3(VAR_34, "focus-events")) {
   VAR_35->flags |= VAR_30;
   FUNC_12(VAR_35, "\033[?1004h");
  }
  FUNC_12(VAR_35, "\033[c");
 }

 VAR_35->flags |= VAR_31;
 FUNC_10(VAR_35);

 FUNC_9(VAR_35, "");

 VAR_35->mouse_drag_flag = 0;
 VAR_35->mouse_drag_update = ((void*)0);
 VAR_35->mouse_drag_release = ((void*)0);
}

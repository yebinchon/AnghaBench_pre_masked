
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {scalar_t__ ws_row; } ;
struct tty {int flags; scalar_t__ cstyle; int mode; int fd; int term; int tio; int event_out; int event_in; int timer; } ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,struct winsize*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (struct tty*) ;
 int FUNC_5 (struct tty*,char*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 char* FUNC_8 (int ,int ) ;
 char* FUNC_9 (int ,int ,int ) ;
 char* FUNC_10 (int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_11 (struct tty*) ;

void
FUNC_12(struct tty *VAR_18)
{
 struct winsize VAR_19;

 if (!(VAR_18->flags & VAR_17))
  return;
 VAR_18->flags &= ~VAR_17;

 FUNC_0(&VAR_18->timer);
 VAR_18->flags &= ~VAR_15;

 FUNC_0(&VAR_18->event_in);
 FUNC_0(&VAR_18->event_out);






 if (FUNC_1(VAR_18->fd, VAR_2, &VAR_19) == -1)
  return;
 if (FUNC_3(VAR_18->fd, VAR_1, &VAR_18->tio) == -1)
  return;

 FUNC_5(VAR_18, FUNC_10(VAR_18->term, VAR_6, 0, VAR_19.ws_row - 1));
 if (FUNC_4(VAR_18))
  FUNC_5(VAR_18, FUNC_8(VAR_18->term, VAR_8));
 FUNC_5(VAR_18, FUNC_8(VAR_18->term, VAR_12));
 FUNC_5(VAR_18, FUNC_8(VAR_18->term, VAR_10));
 FUNC_5(VAR_18, FUNC_8(VAR_18->term, VAR_3));
 if (FUNC_7(VAR_18->term, VAR_13) && VAR_18->cstyle != 0) {
  if (FUNC_7(VAR_18->term, VAR_11))
   FUNC_5(VAR_18, FUNC_8(VAR_18->term, VAR_11));
  else
   FUNC_5(VAR_18, FUNC_9(VAR_18->term, VAR_13, 0));
 }
 if (VAR_18->mode & VAR_0)
  FUNC_5(VAR_18, "\033[?2004l");
 FUNC_5(VAR_18, FUNC_8(VAR_18->term, VAR_5));

 FUNC_5(VAR_18, FUNC_8(VAR_18->term, VAR_4));
 if (FUNC_7(VAR_18->term, VAR_7))
  FUNC_5(VAR_18, "\033[?1000l\033[?1002l\033[?1006l\033[?1005l");

 if (FUNC_6(VAR_18->term, VAR_14)) {
  if (VAR_18->flags & VAR_16) {
   VAR_18->flags &= ~VAR_16;
   FUNC_5(VAR_18, "\033[?1004l");
  }
 }

 if (FUNC_11(VAR_18))
  FUNC_5(VAR_18, "\033[?69l");
 FUNC_5(VAR_18, FUNC_8(VAR_18->term, VAR_9));

 FUNC_2(VAR_18->fd, 1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int flags; int mode; scalar_t__ cstyle; int term; int ccolour; } ;
struct screen {scalar_t__ cstyle; int ccolour; } ;


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
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct tty*,int ) ;
 int FUNC_2 (struct tty*,int ) ;
 int FUNC_3 (struct tty*,int ,scalar_t__) ;
 int FUNC_4 (struct tty*,char*) ;
 scalar_t__ FUNC_5 (int ,int ) ;

void
FUNC_6(struct tty *VAR_13, int VAR_14, struct screen *VAR_15)
{
 int VAR_16;

 if (VAR_15 != ((void*)0) && FUNC_0(VAR_15->ccolour, VAR_13->ccolour) != 0)
  FUNC_1(VAR_13, VAR_15->ccolour);

 if (VAR_13->flags & VAR_12)
  VAR_14 &= ~VAR_3;

 VAR_16 = VAR_14 ^ VAR_13->mode;
 if (VAR_16 & VAR_1) {
  if (FUNC_5(VAR_13->term, VAR_9))
   FUNC_2(VAR_13, VAR_9);
  else
   FUNC_2(VAR_13, VAR_8);
  VAR_16 |= VAR_3;
 }
 if (VAR_16 & VAR_3) {
  if (VAR_14 & VAR_3)
   FUNC_2(VAR_13, VAR_8);
  else
   FUNC_2(VAR_13, VAR_7);
 }
 if (VAR_15 != ((void*)0) && VAR_13->cstyle != VAR_15->cstyle) {
  if (FUNC_5(VAR_13->term, VAR_11)) {
   if (VAR_15->cstyle == 0 &&
       FUNC_5(VAR_13->term, VAR_10))
    FUNC_2(VAR_13, VAR_10);
   else
    FUNC_3(VAR_13, VAR_11, VAR_15->cstyle);
  }
  VAR_13->cstyle = VAR_15->cstyle;
 }
 if (VAR_16 & VAR_0) {
  if (VAR_14 & VAR_0) {




   FUNC_4(VAR_13, "\033[?1006h");
   if (VAR_14 & VAR_4)
    FUNC_4(VAR_13, "\033[?1003h");
   else if (VAR_14 & VAR_5)
    FUNC_4(VAR_13, "\033[?1002h");
   else if (VAR_14 & VAR_6)
    FUNC_4(VAR_13, "\033[?1000h");
  } else {
   if (VAR_13->mode & VAR_4)
    FUNC_4(VAR_13, "\033[?1003l");
   else if (VAR_13->mode & VAR_5)
    FUNC_4(VAR_13, "\033[?1002l");
   else if (VAR_13->mode & VAR_6)
    FUNC_4(VAR_13, "\033[?1000l");
   FUNC_4(VAR_13, "\033[?1006l");
  }
 }
 if (VAR_16 & VAR_2) {
  if (VAR_14 & VAR_2)
   FUNC_4(VAR_13, "\033[?2004h");
  else
   FUNC_4(VAR_13, "\033[?2004l");
 }
 VAR_13->mode = VAR_14;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct window_pane {int dummy; } ;
struct tty {int term_flags; TYPE_1__* term; } ;
struct grid_cell {int flags; int fg; int attr; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int,int *,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct window_pane*,int) ;

__attribute__((used)) static void
FUNC_6(struct tty *VAR_7, struct window_pane *VAR_8, struct grid_cell *VAR_9)
{
 u_char VAR_10, VAR_11, VAR_12;
 u_int VAR_13;
 int VAR_14;






 if (~VAR_9->flags & VAR_3) {
  VAR_14 = VAR_9->fg;
  if (VAR_14 < 8 && VAR_9->attr & VAR_2)
   VAR_14 += 90;
  if ((VAR_14 = FUNC_5(VAR_8, VAR_14)) != -1)
   VAR_9->fg = VAR_14;
 }


 if (VAR_9->fg & VAR_1) {

  if (!FUNC_3(VAR_7->term, VAR_6)) {
   FUNC_2(VAR_9->fg, &VAR_10, &VAR_11, &VAR_12);
   VAR_9->fg = FUNC_1(VAR_10, VAR_11, VAR_12);
  } else
   return;
 }


 if ((VAR_7->term->flags|VAR_7->term_flags) & VAR_4)
  VAR_13 = 256;
 else
  VAR_13 = FUNC_4(VAR_7->term, VAR_5);


 if (VAR_9->fg & VAR_0) {

  if (VAR_13 != 256) {
   VAR_9->fg = FUNC_0(VAR_9->fg);
   if (VAR_9->fg & 8) {
    VAR_9->fg &= 7;
    if (VAR_13 >= 16)
     VAR_9->fg += 90;
   }
  }
  return;
 }


 if (VAR_9->fg >= 90 && VAR_9->fg <= 97 && VAR_13 < 16) {
  VAR_9->fg -= 90;
  VAR_9->attr |= VAR_2;
 }
}

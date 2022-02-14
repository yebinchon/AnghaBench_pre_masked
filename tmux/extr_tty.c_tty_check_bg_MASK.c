
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct window_pane {int dummy; } ;
struct tty {int term_flags; TYPE_1__* term; } ;
struct grid_cell {int flags; int bg; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int,int *,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct window_pane*,int) ;

__attribute__((used)) static void
FUNC_6(struct tty *VAR_6, struct window_pane *VAR_7, struct grid_cell *VAR_8)
{
 u_char VAR_9, VAR_10, VAR_11;
 u_int VAR_12;
 int VAR_13;


 if (~VAR_8->flags & VAR_2) {
  if ((VAR_13 = FUNC_5(VAR_7, VAR_8->bg)) != -1)
   VAR_8->bg = VAR_13;
 }


 if (VAR_8->bg & VAR_1) {

  if (!FUNC_3(VAR_6->term, VAR_5)) {
   FUNC_2(VAR_8->bg, &VAR_9, &VAR_10, &VAR_11);
   VAR_8->bg = FUNC_1(VAR_9, VAR_10, VAR_11);
  } else
   return;
 }


 if ((VAR_6->term->flags|VAR_6->term_flags) & VAR_3)
  VAR_12 = 256;
 else
  VAR_12 = FUNC_4(VAR_6->term, VAR_4);


 if (VAR_8->bg & VAR_0) {





  if (VAR_12 != 256) {
   VAR_8->bg = FUNC_0(VAR_8->bg);
   if (VAR_8->bg & 8) {
    VAR_8->bg &= 7;
    if (VAR_12 >= 16)
     VAR_8->bg += 90;
   }
  }
  return;
 }


 if (VAR_8->bg >= 90 && VAR_8->bg <= 97 && VAR_12 < 16)
  VAR_8->bg -= 90;
}

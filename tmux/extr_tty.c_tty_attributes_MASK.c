
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int flags; scalar_t__ id; } ;
struct grid_cell {scalar_t__ attr; scalar_t__ fg; scalar_t__ bg; scalar_t__ us; } ;
struct tty {int last_wp; int term; struct grid_cell last_cell; struct grid_cell cell; } ;


 int FUNC_0 (scalar_t__) ;
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
 int FUNC_1 (struct grid_cell*,struct grid_cell const*,int) ;
 scalar_t__ FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*,struct window_pane*,struct grid_cell*) ;
 int FUNC_4 (struct tty*,struct window_pane*,struct grid_cell*) ;
 int FUNC_5 (struct tty*,struct window_pane*,struct grid_cell*) ;
 int FUNC_6 (struct tty*,struct grid_cell*) ;
 int FUNC_7 (struct grid_cell*,struct window_pane*) ;
 int FUNC_8 (struct tty*,int ) ;
 int FUNC_9 (struct tty*,int ,int) ;
 int FUNC_10 (struct tty*) ;
 int FUNC_11 (struct tty*) ;
 scalar_t__ FUNC_12 (int ,int ) ;

void
FUNC_13(struct tty *VAR_28, const struct grid_cell *VAR_29,
    struct window_pane *VAR_30)
{
 struct grid_cell *VAR_31 = &VAR_28->cell, VAR_32;
 int VAR_33;


 if (VAR_30 != ((void*)0) &&
     (int)VAR_30->id == VAR_28->last_wp &&
     ~(VAR_30->flags & VAR_15) &&
     VAR_29->attr == VAR_28->last_cell.attr &&
     VAR_29->fg == VAR_28->last_cell.fg &&
     VAR_29->bg == VAR_28->last_cell.bg &&
     VAR_29->us == VAR_28->last_cell.us)
  return;
 VAR_28->last_wp = (VAR_30 != ((void*)0) ? (int)VAR_30->id : -1);
 FUNC_1(&VAR_28->last_cell, VAR_29, sizeof VAR_28->last_cell);


 FUNC_1(&VAR_32, VAR_29, sizeof VAR_32);
 if (VAR_30 != ((void*)0))
  FUNC_7(&VAR_32, VAR_30);






 if (!FUNC_12(VAR_28->term, VAR_21)) {
  if (VAR_32 & VAR_8) {
   if (VAR_32 != 7 && !FUNC_0(VAR_32))
    VAR_32 &= ~VAR_8;
  } else {
   if (VAR_32 != 0 && !FUNC_0(VAR_32))
    VAR_32 |= VAR_8;
  }
 }


 FUNC_4(VAR_28, VAR_30, &VAR_32);
 FUNC_3(VAR_28, VAR_30, &VAR_32);
 FUNC_5(VAR_28, VAR_30, &VAR_32);





 if ((VAR_31->attr & ~VAR_32) || (VAR_31->us != VAR_32 && VAR_32 == 0))
  FUNC_10(VAR_28);





 FUNC_6(VAR_28, &VAR_32);


 VAR_33 = VAR_32 & ~VAR_31->attr;
 VAR_31->attr = VAR_32;


 if (VAR_33 & VAR_2)
  FUNC_8(VAR_28, VAR_17);
 if (VAR_33 & VAR_4)
  FUNC_8(VAR_28, VAR_18);
 if (VAR_33 & VAR_6)
  FUNC_11(VAR_28);
 if (VAR_33 & VAR_0) {
  if ((VAR_33 & VAR_10) ||
      !FUNC_12(VAR_28->term, VAR_26))
   FUNC_8(VAR_28, VAR_25);
  else if (VAR_33 & VAR_11)
   FUNC_9(VAR_28, VAR_26, 2);
  else if (VAR_33 & VAR_12)
   FUNC_9(VAR_28, VAR_26, 3);
  else if (VAR_33 & VAR_13)
   FUNC_9(VAR_28, VAR_26, 4);
  else if (VAR_33 & VAR_14)
   FUNC_9(VAR_28, VAR_26, 5);
 }
 if (VAR_33 & VAR_1)
  FUNC_8(VAR_28, VAR_16);
 if (VAR_33 & VAR_8) {
  if (FUNC_12(VAR_28->term, VAR_20))
   FUNC_8(VAR_28, VAR_20);
  else if (FUNC_12(VAR_28->term, VAR_24))
   FUNC_8(VAR_28, VAR_24);
 }
 if (VAR_33 & VAR_5)
  FUNC_8(VAR_28, VAR_19);
 if (VAR_33 & VAR_9)
  FUNC_8(VAR_28, VAR_27);
 if (VAR_33 & VAR_7)
  FUNC_8(VAR_28, VAR_23);
 if ((VAR_33 & VAR_3) && FUNC_2(VAR_28))
  FUNC_8(VAR_28, VAR_22);
}

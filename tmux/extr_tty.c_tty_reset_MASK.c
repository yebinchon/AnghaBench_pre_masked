
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grid_cell {int attr; } ;
struct tty {int last_wp; struct grid_cell last_cell; struct grid_cell cell; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct grid_cell*,int *) ;
 int VAR_3 ;
 int FUNC_1 (struct grid_cell*,int *,int) ;
 scalar_t__ FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*,int ) ;

void
FUNC_4(struct tty *VAR_4)
{
 struct grid_cell *VAR_5 = &VAR_4->cell;

 if (!FUNC_0(VAR_5, &VAR_3)) {
  if ((VAR_5->attr & VAR_0) && FUNC_2(VAR_4))
   FUNC_3(VAR_4, VAR_1);
  FUNC_3(VAR_4, VAR_2);
  FUNC_1(VAR_5, &VAR_3, sizeof *VAR_5);
 }

 FUNC_1(&VAR_4->last_cell, &VAR_3, sizeof VAR_4->last_cell);
 VAR_4->last_wp = -1;
}

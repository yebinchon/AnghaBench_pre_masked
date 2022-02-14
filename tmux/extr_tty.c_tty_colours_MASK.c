
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grid_cell {scalar_t__ fg; scalar_t__ bg; scalar_t__ us; } ;
struct tty {int term; struct grid_cell cell; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct tty*,struct grid_cell const*) ;
 int FUNC_2 (struct tty*,struct grid_cell const*) ;
 int FUNC_3 (struct tty*,struct grid_cell const*) ;
 int FUNC_4 (struct tty*,int ,int) ;
 int FUNC_5 (struct tty*,char*) ;
 int FUNC_6 (struct tty*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static void
FUNC_9(struct tty *VAR_4, const struct grid_cell *VAR_5)
{
 struct grid_cell *VAR_6 = &VAR_4->cell;
 int VAR_7;


 if (VAR_5->fg == VAR_6->fg && VAR_5->bg == VAR_6->bg && VAR_5->us == VAR_6->us)
  return;







 if (FUNC_0(VAR_5->fg) || FUNC_0(VAR_5->bg)) {







  VAR_7 = FUNC_7(VAR_4->term, VAR_0);
  if (!VAR_7 && FUNC_8(VAR_4->term, VAR_1))
   FUNC_6(VAR_4);
  else {
   if (FUNC_0(VAR_5->fg) && !FUNC_0(VAR_6->fg)) {
    if (VAR_7)
     FUNC_5(VAR_4, "\033[39m");
    else if (VAR_6->fg != 7)
     FUNC_4(VAR_4, VAR_3, 7);
    VAR_6->fg = VAR_5->fg;
   }
   if (FUNC_0(VAR_5->bg) && !FUNC_0(VAR_6->bg)) {
    if (VAR_7)
     FUNC_5(VAR_4, "\033[49m");
    else if (VAR_6->bg != 0)
     FUNC_4(VAR_4, VAR_2, 0);
    VAR_6->bg = VAR_5->bg;
   }
  }
 }


 if (!FUNC_0(VAR_5->fg) && VAR_5->fg != VAR_6->fg)
  FUNC_2(VAR_4, VAR_5);





 if (!FUNC_0(VAR_5->bg) && VAR_5->bg != VAR_6->bg)
  FUNC_1(VAR_4, VAR_5);


 if (VAR_5->us != VAR_6->us)
  FUNC_3(VAR_4, VAR_5);
}

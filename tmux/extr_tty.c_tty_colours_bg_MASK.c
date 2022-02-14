
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grid_cell {int bg; } ;
struct tty {int term_flags; struct grid_cell cell; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tty*,int ,int) ;
 int FUNC_1 (struct tty*,char*) ;
 scalar_t__ FUNC_2 (struct tty*,int,char*) ;
 int FUNC_3 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_4(struct tty *VAR_4, const struct grid_cell *VAR_5)
{
 struct grid_cell *VAR_6 = &VAR_4->cell;
 char VAR_7[32];


 if (VAR_5->bg & VAR_1 || VAR_5->bg & VAR_0) {
  if (FUNC_2(VAR_4, VAR_5->bg, "48") == 0)
   goto save_bg;

  return;
 }


 if (VAR_5->bg >= 90 && VAR_5->bg <= 97) {
  if (VAR_4->term_flags & VAR_2) {
   FUNC_3(VAR_7, sizeof VAR_7, "\033[%dm", VAR_5->bg + 10);
   FUNC_1(VAR_4, VAR_7);
  } else
   FUNC_0(VAR_4, VAR_3, VAR_5->bg - 90 + 8);
  goto save_bg;
 }


 FUNC_0(VAR_4, VAR_3, VAR_5->bg);

save_bg:

 VAR_6->bg = VAR_5->bg;
}

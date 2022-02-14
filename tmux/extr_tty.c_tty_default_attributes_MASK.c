
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window_pane {int dummy; } ;
struct tty {int dummy; } ;
struct grid_cell {int bg; } ;


 int VAR_0 ;
 int FUNC_0 (struct grid_cell*,int *,int) ;
 int FUNC_1 (struct tty*,struct grid_cell*,struct window_pane*) ;

__attribute__((used)) static void
FUNC_2(struct tty *VAR_1, struct window_pane *VAR_2, u_int VAR_3)
{
 static struct grid_cell VAR_4;

 FUNC_0(&VAR_4, &VAR_0, sizeof VAR_4);
 VAR_4.bg = VAR_3;
 FUNC_1(VAR_1, &VAR_4, VAR_2);
}

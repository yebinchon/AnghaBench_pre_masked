
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window_pane {int dummy; } ;
struct tty {int term; } ;
struct grid_cell {int bg; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct grid_cell*,int *,int) ;
 int FUNC_2 (struct grid_cell*,struct window_pane*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(const struct tty *VAR_2, struct window_pane *VAR_3, u_int VAR_4)
{
 struct grid_cell VAR_5;

 if (FUNC_3(VAR_2->term, VAR_0))
  return (0);

 FUNC_1(&VAR_5, &VAR_1, sizeof VAR_5);
 if (VAR_3 != ((void*)0))
  FUNC_2(&VAR_5, VAR_3);

 if (!FUNC_0(VAR_4) || !FUNC_0(VAR_5.bg))
  return (1);
 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window_pane {int dummy; } ;
struct window_mode_entry {struct window_copy_mode_data* data; struct window_pane* wp; } ;
struct screen {int * sel; } ;
struct window_copy_mode_data {int oy; int cy; int cx; struct screen screen; } ;
struct screen_write_ctx {int dummy; } ;


 int FUNC_0 (struct screen*) ;
 int FUNC_1 (struct screen_write_ctx*,int ,int ,int ) ;
 int FUNC_2 (struct screen_write_ctx*,int,int) ;
 int FUNC_3 (struct screen_write_ctx*,struct window_pane*,int *) ;
 int FUNC_4 (struct screen_write_ctx*) ;
 int FUNC_5 (struct window_mode_entry*,int ) ;
 int FUNC_6 (struct window_mode_entry*,struct screen_write_ctx*,int) ;
 int FUNC_7 (struct window_mode_entry*,struct screen_write_ctx*,int,int) ;

__attribute__((used)) static void
FUNC_8(struct window_mode_entry *VAR_0, u_int VAR_1)
{
 struct window_pane *VAR_2 = VAR_0->wp;
 struct window_copy_mode_data *VAR_3 = VAR_0->data;
 struct screen *VAR_4 = &VAR_3->screen;
 struct screen_write_ctx VAR_5;

 if (VAR_3->oy < VAR_1)
  VAR_1 = VAR_3->oy;
 if (VAR_1 == 0)
  return;
 VAR_3->oy -= VAR_1;

 FUNC_5(VAR_0, 0);

 FUNC_3(&VAR_5, VAR_2, ((void*)0));
 FUNC_1(&VAR_5, 0, 0, 0);
 FUNC_2(&VAR_5, VAR_1, 8);
 FUNC_7(VAR_0, &VAR_5, FUNC_0(VAR_4) - VAR_1, VAR_1);
 FUNC_6(VAR_0, &VAR_5, 0);
 if (FUNC_0(VAR_4) > 1)
  FUNC_6(VAR_0, &VAR_5, 1);
 if (FUNC_0(VAR_4) > 3)
  FUNC_6(VAR_0, &VAR_5, FUNC_0(VAR_4) - 2);
 if (VAR_4->sel != ((void*)0) && FUNC_0(VAR_4) > VAR_1)
  FUNC_6(VAR_0, &VAR_5, FUNC_0(VAR_4) - VAR_1 - 1);
 FUNC_1(&VAR_5, VAR_3->cx, VAR_3->cy, 0);
 FUNC_4(&VAR_5);
}

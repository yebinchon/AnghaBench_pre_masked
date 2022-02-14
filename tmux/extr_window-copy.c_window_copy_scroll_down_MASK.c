
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_pane {int dummy; } ;
struct window_mode_entry {struct window_copy_mode_data* data; struct window_pane* wp; } ;
struct screen {int * sel; } ;
struct window_copy_mode_data {scalar_t__ oy; int cy; int cx; int backing; struct screen screen; } ;
struct screen_write_ctx {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct screen*) ;
 int FUNC_2 (struct screen_write_ctx*,int ,int ,int ) ;
 int FUNC_3 (struct screen_write_ctx*,scalar_t__,int) ;
 int FUNC_4 (struct screen_write_ctx*,struct window_pane*,int *) ;
 int FUNC_5 (struct screen_write_ctx*) ;
 int FUNC_6 (struct window_mode_entry*,int ) ;
 int FUNC_7 (struct window_mode_entry*,struct screen_write_ctx*,int) ;
 int FUNC_8 (struct window_mode_entry*,struct screen_write_ctx*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_9(struct window_mode_entry *VAR_0, u_int VAR_1)
{
 struct window_pane *VAR_2 = VAR_0->wp;
 struct window_copy_mode_data *VAR_3 = VAR_0->data;
 struct screen *VAR_4 = &VAR_3->screen;
 struct screen_write_ctx VAR_5;

 if (VAR_1 > FUNC_0(VAR_3->backing))
  return;

 if (VAR_3->oy > FUNC_0(VAR_3->backing) - VAR_1)
  VAR_1 = FUNC_0(VAR_3->backing) - VAR_3->oy;
 if (VAR_1 == 0)
  return;
 VAR_3->oy += VAR_1;

 FUNC_6(VAR_0, 0);

 FUNC_4(&VAR_5, VAR_2, ((void*)0));
 FUNC_2(&VAR_5, 0, 0, 0);
 FUNC_3(&VAR_5, VAR_1, 8);
 FUNC_8(VAR_0, &VAR_5, 0, VAR_1);
 if (VAR_4->sel != ((void*)0) && FUNC_1(VAR_4) > VAR_1)
  FUNC_7(VAR_0, &VAR_5, VAR_1);
 else if (VAR_1 == 1)
  FUNC_7(VAR_0, &VAR_5, 1);
 FUNC_2(&VAR_5, VAR_3->cx, VAR_3->cy, 0);
 FUNC_5(&VAR_5);
}

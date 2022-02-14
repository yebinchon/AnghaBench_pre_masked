
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int u_int ;
struct screen {int cy; } ;
struct window_pane {struct screen base; int modes; } ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {int backing_written; struct screen* backing; struct screen screen; int oy; } ;
struct screen_write_ctx {int dummy; } ;
struct grid_cell {int dummy; } ;


 struct window_mode_entry* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct grid_cell*,int *,int) ;
 int FUNC_2 (struct screen*) ;
 int FUNC_3 (struct screen_write_ctx*) ;
 int FUNC_4 (struct screen_write_ctx*,int ,int) ;
 int FUNC_5 (struct screen_write_ctx*,struct window_pane*,struct screen*) ;
 int FUNC_6 (struct screen_write_ctx*) ;
 int FUNC_7 (struct screen_write_ctx*,int ,struct grid_cell*,char const*,int ) ;
 int FUNC_8 (struct window_mode_entry*,int,int) ;

void
FUNC_9(struct window_pane *VAR_1, const char *VAR_2, va_list VAR_3)
{
 struct window_mode_entry *VAR_4 = FUNC_0(&VAR_1->modes);
 struct window_copy_mode_data *VAR_5 = VAR_4->data;
 struct screen *VAR_6 = VAR_5->backing;
 struct screen_write_ctx VAR_7, VAR_8;
 struct grid_cell VAR_9;
 u_int VAR_10, VAR_11;

 if (VAR_6 == &VAR_1->base)
  return;

 FUNC_1(&VAR_9, &VAR_0, sizeof VAR_9);

 VAR_10 = FUNC_2(VAR_5->backing);
 FUNC_5(&VAR_7, ((void*)0), VAR_6);
 if (VAR_5->backing_written) {




  FUNC_3(&VAR_7);
  FUNC_4(&VAR_7, 0, 8);
 } else
  VAR_5->backing_written = 1;
 VAR_11 = VAR_6->cy;
 FUNC_7(&VAR_7, 0, &VAR_9, VAR_2, VAR_3);
 FUNC_6(&VAR_7);

 VAR_5->oy += FUNC_2(VAR_5->backing) - VAR_10;

 FUNC_5(&VAR_8, VAR_1, &VAR_5->screen);





 if (FUNC_2(VAR_5->backing))
  FUNC_8(VAR_4, 0, 1);


 FUNC_8(VAR_4, VAR_11, VAR_6->cy - VAR_11 + 1);

 FUNC_6(&VAR_8);
}

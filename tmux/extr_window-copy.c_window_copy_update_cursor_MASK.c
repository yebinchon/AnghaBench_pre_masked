
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_pane {int dummy; } ;
struct window_mode_entry {struct window_copy_mode_data* data; struct window_pane* wp; } ;
struct screen {int dummy; } ;
struct window_copy_mode_data {scalar_t__ cx; scalar_t__ cy; struct screen screen; } ;
struct screen_write_ctx {int dummy; } ;


 scalar_t__ FUNC_0 (struct screen*) ;
 int FUNC_1 (struct screen_write_ctx*,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (struct screen_write_ctx*,struct window_pane*,int *) ;
 int FUNC_3 (struct screen_write_ctx*) ;
 int FUNC_4 (struct window_mode_entry*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_5(struct window_mode_entry *VAR_0, u_int VAR_1, u_int VAR_2)
{
 struct window_pane *VAR_3 = VAR_0->wp;
 struct window_copy_mode_data *VAR_4 = VAR_0->data;
 struct screen *VAR_5 = &VAR_4->screen;
 struct screen_write_ctx VAR_6;
 u_int VAR_7, VAR_8;

 VAR_7 = VAR_4->cx; VAR_8 = VAR_4->cy;
 VAR_4->cx = VAR_1; VAR_4->cy = VAR_2;
 if (VAR_7 == FUNC_0(VAR_5))
  FUNC_4(VAR_0, VAR_8, 1);
 if (VAR_4->cx == FUNC_0(VAR_5))
  FUNC_4(VAR_0, VAR_4->cy, 1);
 else {
  FUNC_2(&VAR_6, VAR_3, ((void*)0));
  FUNC_1(&VAR_6, VAR_4->cx, VAR_4->cy, 0);
  FUNC_3(&VAR_6);
 }
}

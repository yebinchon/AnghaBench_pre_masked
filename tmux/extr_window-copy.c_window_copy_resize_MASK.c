
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct screen {int dummy; } ;
struct window_pane {struct screen base; } ;
struct window_mode_entry {struct window_copy_mode_data* data; struct window_pane* wp; } ;
struct window_copy_mode_data {scalar_t__ oy; scalar_t__ searcho; int cy; int searchy; scalar_t__ cx; scalar_t__ searchx; int * searchmark; struct screen* backing; struct screen screen; } ;
struct screen_write_ctx {int dummy; } ;


 scalar_t__ FUNC_0 (struct screen*) ;
 int FUNC_1 (struct screen*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct screen*) ;
 int FUNC_3 (struct screen_write_ctx*,int *,struct screen*) ;
 int FUNC_4 (struct screen_write_ctx*) ;
 int FUNC_5 (struct window_mode_entry*) ;
 int FUNC_6 (struct window_mode_entry*) ;
 int FUNC_7 (struct window_mode_entry*) ;
 int FUNC_8 (struct window_mode_entry*,int *) ;
 int FUNC_9 (struct window_mode_entry*,struct screen_write_ctx*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_10(struct window_mode_entry *VAR_0, u_int VAR_1, u_int VAR_2)
{
 struct window_pane *VAR_3 = VAR_0->wp;
 struct window_copy_mode_data *VAR_4 = VAR_0->data;
 struct screen *VAR_5 = &VAR_4->screen;
 struct screen_write_ctx VAR_6;
 int VAR_7;

 FUNC_1(VAR_5, VAR_1, VAR_2, 1);
 if (VAR_4->backing != &VAR_3->base)
  FUNC_1(VAR_4->backing, VAR_1, VAR_2, 1);

 if (VAR_4->cy > VAR_2 - 1)
  VAR_4->cy = VAR_2 - 1;
 if (VAR_4->cx > VAR_1)
  VAR_4->cx = VAR_1;
 if (VAR_4->oy > FUNC_0(VAR_4->backing))
  VAR_4->oy = FUNC_0(VAR_4->backing);

 VAR_7 = (VAR_4->searchmark != ((void*)0));
 FUNC_6(VAR_0);
 FUNC_5(VAR_0);

 FUNC_3(&VAR_6, ((void*)0), VAR_5);
 FUNC_9(VAR_0, &VAR_6, 0, FUNC_2(VAR_5) - 1);
 FUNC_4(&VAR_6);

 if (VAR_7)
  FUNC_8(VAR_0, ((void*)0));
 VAR_4->searchx = VAR_4->cx;
 VAR_4->searchy = VAR_4->cy;
 VAR_4->searcho = VAR_4->oy;

 FUNC_7(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_pane {int dummy; } ;
struct window_mode_entry {struct window_copy_mode_data* data; struct window_pane* wp; } ;
struct window_copy_mode_data {int cy; int cx; } ;
struct screen_write_ctx {int dummy; } ;


 int FUNC_0 (struct screen_write_ctx*,int ,int ,int ) ;
 int FUNC_1 (struct screen_write_ctx*,struct window_pane*,int *) ;
 int FUNC_2 (struct screen_write_ctx*) ;
 int FUNC_3 (struct window_mode_entry*,struct screen_write_ctx*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct window_mode_entry *VAR_0, u_int VAR_1, u_int VAR_2)
{
 struct window_pane *VAR_3 = VAR_0->wp;
 struct window_copy_mode_data *VAR_4 = VAR_0->data;
 struct screen_write_ctx VAR_5;
 u_int VAR_6;

 FUNC_1(&VAR_5, VAR_3, ((void*)0));
 for (VAR_6 = VAR_1; VAR_6 < VAR_1 + VAR_2; VAR_6++)
  FUNC_3(VAR_0, &VAR_5, VAR_6);
 FUNC_0(&VAR_5, VAR_4->cx, VAR_4->cy, 0);
 FUNC_2(&VAR_5);
}

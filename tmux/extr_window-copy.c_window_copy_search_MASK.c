
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct window_pane {TYPE_1__* window; int searchstr; } ;
struct window_mode_entry {struct window_copy_mode_data* data; struct window_pane* wp; } ;
struct window_copy_mode_data {int searchstr; scalar_t__ cy; scalar_t__ oy; struct screen* backing; scalar_t__ cx; } ;
struct screen_write_ctx {int dummy; } ;
struct screen {struct grid* grid; } ;
struct grid {scalar_t__ sy; scalar_t__ hsize; } ;
struct TYPE_2__ {int options; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct screen*) ;
 scalar_t__ FUNC_3 (struct screen*) ;
 int FUNC_4 (struct screen*,int ,int,int ) ;
 int FUNC_5 (struct screen_write_ctx*,int,int *,char*,int ) ;
 int FUNC_6 (struct screen_write_ctx*,int *,struct screen*) ;
 int FUNC_7 (struct screen_write_ctx*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct screen*,scalar_t__*,scalar_t__*,int) ;
 int FUNC_11 (struct screen*,scalar_t__*,scalar_t__*,int) ;
 int FUNC_12 (struct window_mode_entry*) ;
 int FUNC_13 (struct window_mode_entry*,struct grid*,struct grid*,scalar_t__,scalar_t__,scalar_t__,int,int,int) ;
 scalar_t__ FUNC_14 (struct window_mode_entry*,struct screen*) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int
FUNC_16(struct window_mode_entry *VAR_1, int VAR_2)
{
 struct window_pane *VAR_3 = VAR_1->wp;
 struct window_copy_mode_data *VAR_4 = VAR_1->data;
 struct screen *VAR_5 = VAR_4->backing, VAR_6;
 struct screen_write_ctx VAR_7;
 struct grid *VAR_8 = VAR_5->grid;
 u_int VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;

 FUNC_0(VAR_3->searchstr);
 VAR_3->searchstr = FUNC_15(VAR_4->searchstr);

 VAR_9 = VAR_4->cx;
 VAR_10 = FUNC_3(VAR_4->backing) - VAR_4->oy + VAR_4->cy;

 FUNC_4(&VAR_6, FUNC_8("%s", VAR_4->searchstr), 1, 0);
 FUNC_6(&VAR_7, ((void*)0), &VAR_6);
 FUNC_5(&VAR_7, -1, &VAR_0, "%s", VAR_4->searchstr);
 FUNC_7(&VAR_7);

 VAR_12 = FUNC_1(VAR_3->window->options, "wrap-search");
 VAR_13 = FUNC_9(VAR_4->searchstr);

 if (VAR_2) {
  FUNC_11(VAR_5, &VAR_9, &VAR_10, VAR_12);
  VAR_11 = VAR_8->hsize + VAR_8->sy - 1;
 } else {
  FUNC_10(VAR_5, &VAR_9, &VAR_10, VAR_12);
  VAR_11 = 0;
 }
 VAR_14 = FUNC_13(VAR_1, VAR_8, VAR_6.grid, VAR_9, VAR_10, VAR_11, VAR_13,
     VAR_12, VAR_2);

 if (FUNC_14(VAR_1, &VAR_6))
  FUNC_12(VAR_1);

 FUNC_2(&VAR_6);
 return (VAR_14);
}

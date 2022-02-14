
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct window_pane {TYPE_1__* window; } ;
struct window_mode_entry {struct window_copy_mode_data* data; struct window_pane* wp; } ;
struct screen {scalar_t__ rupper; scalar_t__ rlower; } ;
struct window_copy_mode_data {scalar_t__ oy; int searchthis; scalar_t__ cy; int cx; int * searchmark; int backing; int searchcount; struct screen screen; } ;
struct screen_write_ctx {int dummy; } ;
struct options {int dummy; } ;
struct grid_cell {int flags; } ;
struct TYPE_2__ {struct options* options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct grid_cell*,int *,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct screen*) ;
 int FUNC_3 (struct screen_write_ctx*,int ,int ,scalar_t__,size_t,int,int *,struct grid_cell*) ;
 int FUNC_4 (struct screen_write_ctx*,int,scalar_t__,int ) ;
 int FUNC_5 (struct screen_write_ctx*,struct grid_cell*,char) ;
 int FUNC_6 (struct screen_write_ctx*,struct grid_cell*,char*,char*) ;
 int FUNC_7 (struct grid_cell*,struct options*,char*) ;
 size_t FUNC_8 (char*,int,char*,int,scalar_t__,...) ;

__attribute__((used)) static void
FUNC_9(struct window_mode_entry *VAR_2,
    struct screen_write_ctx *VAR_3, u_int VAR_4)
{
 struct window_pane *VAR_5 = VAR_2->wp;
 struct window_copy_mode_data *VAR_6 = VAR_2->data;
 struct screen *VAR_7 = &VAR_6->screen;
 struct options *VAR_8 = VAR_5->window->options;
 struct grid_cell VAR_9;
 char VAR_10[512];
 size_t VAR_11 = 0;

 FUNC_7(&VAR_9, VAR_8, "mode-style");
 VAR_9.flags |= VAR_0;

 if (VAR_4 == 0 && VAR_7->rupper < VAR_7->rlower) {
  if (VAR_6->searchmark == ((void*)0)) {
   VAR_11 = FUNC_8(VAR_10, sizeof VAR_10,
       "[%u/%u]", VAR_6->oy, FUNC_1(VAR_6->backing));
  } else {
   if (VAR_6->searchthis == -1) {
    VAR_11 = FUNC_8(VAR_10, sizeof VAR_10,
        "(%u results) [%d/%u]", VAR_6->searchcount,
        VAR_6->oy, FUNC_1(VAR_6->backing));
   } else {
    VAR_11 = FUNC_8(VAR_10, sizeof VAR_10,
        "(%u/%u results) [%d/%u]", VAR_6->searchthis,
        VAR_6->searchcount, VAR_6->oy,
        FUNC_1(VAR_6->backing));
   }
  }
  if (VAR_11 > FUNC_2(VAR_7))
   VAR_11 = FUNC_2(VAR_7);
  FUNC_4(VAR_3, FUNC_2(VAR_7) - VAR_11, 0, 0);
  FUNC_6(VAR_3, &VAR_9, "%s", VAR_10);
 } else
  VAR_11 = 0;

 if (VAR_11 < FUNC_2(VAR_7)) {
  FUNC_4(VAR_3, 0, VAR_4, 0);
  FUNC_3(VAR_3, VAR_6->backing, 0,
      (FUNC_1(VAR_6->backing) - VAR_6->oy) + VAR_4,
      FUNC_2(VAR_7) - VAR_11, 1, VAR_6->searchmark, &VAR_9);
 }

 if (VAR_4 == VAR_6->cy && VAR_6->cx == FUNC_2(VAR_7)) {
  FUNC_0(&VAR_9, &VAR_1, sizeof VAR_9);
  FUNC_4(VAR_3, FUNC_2(VAR_7) - 1, VAR_4, 0);
  FUNC_5(VAR_3, &VAR_9, '$');
 }
}

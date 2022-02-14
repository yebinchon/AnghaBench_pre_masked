
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct window_pane {TYPE_2__* window; } ;
struct screen_write_ctx {int dummy; } ;
struct screen {int dummy; } ;
struct options {int dummy; } ;
struct mode_tree_line {int depth; struct mode_tree_item* item; scalar_t__ last; scalar_t__ flat; } ;
struct mode_tree_item {int itemdata; int name; scalar_t__ tagged; int text; TYPE_3__* parent; scalar_t__ expanded; int children; } ;
struct TYPE_4__ {size_t field; scalar_t__ reversed; } ;
struct mode_tree_data {scalar_t__ line_size; int width; int height; int offset; int current; int modedata; int (* drawcb ) (int ,int ,struct screen_write_ctx*,int,int) ;scalar_t__ no_matches; int * filter; TYPE_1__ sort_crit; int * sort_list; struct mode_tree_line* line_list; int preview; struct screen screen; struct window_pane* wp; } ;
struct grid_cell {int bg; int attr; } ;
struct TYPE_6__ {size_t line; } ;
struct TYPE_5__ {struct options* options; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct screen_write_ctx*,struct grid_cell*,int ,int ,int *) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (struct grid_cell*,int *,int) ;
 int FUNC_4 (struct screen*) ;
 int FUNC_5 (struct screen_write_ctx*,int,int) ;
 int FUNC_6 (struct screen_write_ctx*,int) ;
 int FUNC_7 (struct screen_write_ctx*,int) ;
 int FUNC_8 (struct screen_write_ctx*,int,int,int ) ;
 int FUNC_9 (struct screen_write_ctx*,struct grid_cell*,char*,...) ;
 int FUNC_10 (struct screen_write_ctx*,int *,struct screen*) ;
 int FUNC_11 (struct screen_write_ctx*) ;
 int FUNC_12 (char*,int,char*,char) ;
 int FUNC_13 (char*,char const*,size_t) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,int ,struct screen_write_ctx*,int,int) ;
 int FUNC_16 (struct grid_cell*,struct options*,char*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char**,char*,int,char*,char*,...) ;
 char* FUNC_19 (int,size_t) ;
 char* FUNC_20 (char const*) ;

void
FUNC_21(struct mode_tree_data *VAR_2)
{
 struct window_pane *VAR_3 = VAR_2->wp;
 struct screen *VAR_4 = &VAR_2->screen;
 struct mode_tree_line *VAR_5;
 struct mode_tree_item *VAR_6;
 struct options *VAR_7 = VAR_3->window->options;
 struct screen_write_ctx VAR_8;
 struct grid_cell VAR_9, VAR_10;
 u_int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 char *VAR_19, *VAR_20, VAR_21[7];
 const char *VAR_22, *VAR_23;
 size_t VAR_24, VAR_25;
 int VAR_26;

 if (VAR_2->line_size == 0)
  return;

 FUNC_3(&VAR_9, &VAR_1, sizeof VAR_9);
 FUNC_3(&VAR_10, &VAR_1, sizeof VAR_10);
 FUNC_16(&VAR_10, VAR_7, "mode-style");

 VAR_11 = VAR_2->width;
 VAR_12 = VAR_2->height;

 FUNC_10(&VAR_8, ((void*)0), VAR_4);
 FUNC_7(&VAR_8, 8);

 if (VAR_2->line_size > 10)
  VAR_26 = 6;
 else
  VAR_26 = 4;

 for (VAR_13 = 0; VAR_13 < VAR_2->line_size; VAR_13++) {
  if (VAR_13 < VAR_2->offset)
   continue;
  if (VAR_13 > VAR_2->offset + VAR_12 - 1)
   break;

  VAR_5 = &VAR_2->line_list[VAR_13];
  VAR_6 = VAR_5->item;

  FUNC_8(&VAR_8, 0, VAR_13 - VAR_2->offset, 0);

  if (VAR_13 < 10)
   FUNC_12(VAR_21, sizeof VAR_21, "(%c)  ", '0' + VAR_13);
  else if (VAR_13 < 36)
   FUNC_12(VAR_21, sizeof VAR_21, "(M-%c)", 'a' + (VAR_13 - 10));
  else
   *VAR_21 = '\0';

  if (VAR_5->flat)
   VAR_23 = "";
  else if (FUNC_0(&VAR_6->children))
   VAR_23 = "  ";
  else if (VAR_6->expanded)
   VAR_23 = "- ";
  else
   VAR_23 = "+ ";

  if (VAR_5->depth == 0)
   VAR_20 = FUNC_20(VAR_23);
  else {
   VAR_24 = (4 * VAR_5->depth) + 32;

   VAR_20 = FUNC_19(1, VAR_24);
   for (VAR_14 = 1; VAR_14 < VAR_5->depth; VAR_14++) {
    if (VAR_6->parent != ((void*)0) &&
        VAR_2->line_list[VAR_6->parent->line].last)
     FUNC_13(VAR_20, "    ", VAR_24);
    else
     FUNC_13(VAR_20, "\001x\001   ", VAR_24);
   }
   if (VAR_5->last)
    FUNC_13(VAR_20, "\001mq\001> ", VAR_24);
   else
    FUNC_13(VAR_20, "\001tq\001> ", VAR_24);
   FUNC_13(VAR_20, VAR_23, VAR_24);
  }

  if (VAR_6->tagged)
   VAR_22 = "*";
  else
   VAR_22 = "";
  FUNC_18(&VAR_19, "%-*s%s%s%s: ", VAR_26, VAR_21, VAR_20, VAR_6->name,
      VAR_22);
  VAR_18 = FUNC_17(VAR_19);
  FUNC_2(VAR_20);

  if (VAR_6->tagged) {
   VAR_10.attr ^= VAR_0;
   VAR_9 ^= VAR_0;
  }

  if (VAR_13 != VAR_2->current) {
   FUNC_6(&VAR_8, 8);
   FUNC_9(&VAR_8, &VAR_9, "%s", VAR_19);
   FUNC_1(&VAR_8, &VAR_9, VAR_11 - VAR_18, VAR_6->text, ((void*)0));
  } else {
   FUNC_6(&VAR_8, VAR_10.bg);
   FUNC_9(&VAR_8, &VAR_10, "%s", VAR_19);
   FUNC_1(&VAR_8, &VAR_10, VAR_11 - VAR_18, VAR_6->text, ((void*)0));
  }
  FUNC_2(VAR_19);

  if (VAR_6->tagged) {
   VAR_10.attr ^= VAR_0;
   VAR_9 ^= VAR_0;
  }
 }

 VAR_15 = FUNC_4(VAR_4);
 if (!VAR_2->preview || VAR_15 <= 4 || VAR_12 <= 4 || VAR_15 - VAR_12 <= 4 || VAR_11 <= 4) {
  FUNC_11(&VAR_8);
  return;
 }

 VAR_5 = &VAR_2->line_list[VAR_2->current];
 VAR_6 = VAR_5->item;

 FUNC_8(&VAR_8, 0, VAR_12, 0);
 FUNC_5(&VAR_8, VAR_11, VAR_15 - VAR_12);

 FUNC_18(&VAR_19, " %s (sort: %s%s)", VAR_6->name,
     VAR_2->sort_list[VAR_2->sort_crit.field],
     VAR_2->sort_crit.reversed ? ", reversed" : "");
 if (VAR_11 - 2 >= FUNC_14(VAR_19)) {
  FUNC_8(&VAR_8, 1, VAR_12, 0);
  FUNC_9(&VAR_8, &VAR_9, "%s", VAR_19);

  if (VAR_2->no_matches)
   VAR_25 = (sizeof "no matches") - 1;
  else
   VAR_25 = (sizeof "active") - 1;
  if (VAR_2->filter != ((void*)0) && VAR_11 - 2 >= FUNC_14(VAR_19) + 10 + VAR_25 + 2) {
   FUNC_9(&VAR_8, &VAR_9, " (filter: ");
   if (VAR_2->no_matches)
    FUNC_9(&VAR_8, &VAR_10, "no matches");
   else
    FUNC_9(&VAR_8, &VAR_9, "active");
   FUNC_9(&VAR_8, &VAR_9, ") ");
  }
 }
 FUNC_2(VAR_19);

 VAR_16 = VAR_11 - 4;
 VAR_17 = VAR_15 - VAR_12 - 2;

 if (VAR_16 != 0 && VAR_17 != 0) {
  FUNC_8(&VAR_8, 2, VAR_12 + 1, 0);
  VAR_2->drawcb(VAR_2->modedata, VAR_6->itemdata, &VAR_8, VAR_16, VAR_17);
 }

 FUNC_11(&VAR_8);
}

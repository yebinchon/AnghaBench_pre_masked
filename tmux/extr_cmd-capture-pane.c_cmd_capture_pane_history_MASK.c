
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {struct grid* grid; } ;
struct window_pane {TYPE_1__ base; struct grid* saved_grid; } ;
struct grid_line {int flags; } ;
struct grid_cell {int dummy; } ;
struct grid {int hsize; int sy; } ;
struct cmdq_item {int dummy; } ;
struct args {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (struct args*,char) ;
 int FUNC_1 (struct args*,char) ;
 int FUNC_2 (struct args*,char,int ,int ,char**) ;
 char* FUNC_3 (char*,size_t*,char*,size_t) ;
 int FUNC_4 (struct cmdq_item*,char*) ;
 int FUNC_5 (char*) ;
 struct grid_line* FUNC_6 (struct grid*,int) ;
 char* FUNC_7 (struct grid*,int ,int,int,struct grid_cell**,int,int,int) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 size_t FUNC_10 (char*) ;
 char* FUNC_11 (char*) ;

__attribute__((used)) static char *
FUNC_12(struct args *VAR_3, struct cmdq_item *VAR_4,
    struct window_pane *VAR_5, size_t *VAR_6)
{
 struct grid *VAR_7;
 const struct grid_line *VAR_8;
 struct grid_cell *VAR_9 = ((void*)0);
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 u_int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 char *VAR_20, *VAR_21, *VAR_22;
 const char *VAR_23, *VAR_24;
 size_t VAR_25;

 VAR_16 = FUNC_8(&VAR_5->base);
 if (FUNC_1(VAR_3, 'a')) {
  VAR_7 = VAR_5->saved_grid;
  if (VAR_7 == ((void*)0)) {
   if (!FUNC_1(VAR_3, 'q')) {
    FUNC_4(VAR_4, "no alternate screen");
    return (((void*)0));
   }
   return (FUNC_11(""));
  }
 } else
  VAR_7 = VAR_5->base.grid;

 VAR_23 = FUNC_0(VAR_3, 'S');
 if (VAR_23 != ((void*)0) && FUNC_9(VAR_23, "-") == 0)
  VAR_17 = 0;
 else {
  VAR_10 = FUNC_2(VAR_3, 'S', VAR_1, VAR_2, &VAR_20);
  if (VAR_20 != ((void*)0)) {
   VAR_17 = VAR_7->hsize;
   FUNC_5(VAR_20);
  } else if (VAR_10 < 0 && (u_int) -VAR_10 > VAR_7->hsize)
   VAR_17 = 0;
  else
   VAR_17 = VAR_7->hsize + VAR_10;
  if (VAR_17 > VAR_7->hsize + VAR_7->sy - 1)
   VAR_17 = VAR_7->hsize + VAR_7->sy - 1;
 }

 VAR_24 = FUNC_0(VAR_3, 'E');
 if (VAR_24 != ((void*)0) && FUNC_9(VAR_24, "-") == 0)
  VAR_18 = VAR_7->hsize + VAR_7->sy - 1;
 else {
  VAR_10 = FUNC_2(VAR_3, 'E', VAR_1, VAR_2, &VAR_20);
  if (VAR_20 != ((void*)0)) {
   VAR_18 = VAR_7->hsize + VAR_7->sy - 1;
   FUNC_5(VAR_20);
  } else if (VAR_10 < 0 && (u_int) -VAR_10 > VAR_7->hsize)
   VAR_18 = 0;
  else
   VAR_18 = VAR_7->hsize + VAR_10;
  if (VAR_18 > VAR_7->hsize + VAR_7->sy - 1)
   VAR_18 = VAR_7->hsize + VAR_7->sy - 1;
 }

 if (VAR_18 < VAR_17) {
  VAR_19 = VAR_18;
  VAR_18 = VAR_17;
  VAR_17 = VAR_19;
 }

 VAR_11 = FUNC_1(VAR_3, 'e');
 VAR_12 = FUNC_1(VAR_3, 'C');
 VAR_13 = FUNC_1(VAR_3, 'J');
 VAR_14 = FUNC_1(VAR_3, 'N');

 VAR_21 = ((void*)0);
 for (VAR_15 = VAR_17; VAR_15 <= VAR_18; VAR_15++) {
  VAR_22 = FUNC_7(VAR_7, 0, VAR_15, VAR_16, &VAR_9, VAR_11,
      VAR_12, !VAR_13 && !VAR_14);
  VAR_25 = FUNC_10(VAR_22);

  VAR_21 = FUNC_3(VAR_21, VAR_6, VAR_22, VAR_25);

  VAR_8 = FUNC_6(VAR_7, VAR_15);
  if (!VAR_13 || !(VAR_8->flags & VAR_0))
   VAR_21[(*VAR_6)++] = '\n';

  FUNC_5(VAR_22);
 }
 return (VAR_21);
}

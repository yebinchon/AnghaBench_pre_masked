
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window_pane {scalar_t__ xoff; scalar_t__ sx; scalar_t__ yoff; scalar_t__ sy; struct window* window; } ;
struct window {struct window_pane* active; } ;
struct tty {int dummy; } ;
struct session {struct options* options; } ;
struct screen_redraw_ctx {scalar_t__ ox; scalar_t__ sx; scalar_t__ oy; scalar_t__ sy; int statuslines; scalar_t__ statustop; struct client* c; } ;
struct options {int dummy; } ;
struct grid_cell {int bg; int fg; int flags; } ;
struct client {struct session* session; struct tty tty; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (struct grid_cell*,int *,int) ;
 int FUNC_2 (struct options*,char*) ;
 int FUNC_3 (struct tty*,struct grid_cell*,struct window_pane*) ;
 int FUNC_4 (struct tty*,int,int) ;
 int FUNC_5 (struct tty*,char) ;
 int FUNC_6 (struct tty*,char*) ;
 scalar_t__*** VAR_2 ;
 scalar_t__ FUNC_7 (struct window_pane*,int*) ;
 size_t FUNC_8 (char*,int,char*,int,...) ;

__attribute__((used)) static void
FUNC_9(struct screen_redraw_ctx *VAR_3,
    struct window_pane *VAR_4)
{
 struct client *VAR_5 = VAR_3->c;
 struct tty *VAR_6 = &VAR_5->tty;
 struct session *VAR_7 = VAR_5->session;
 struct options *VAR_8 = VAR_7->options;
 struct window *VAR_9 = VAR_4->window;
 struct grid_cell VAR_10;
 u_int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20, VAR_21;
 char VAR_22[16], *VAR_23;
 size_t VAR_24;

 if (VAR_4->xoff + VAR_4->sx <= VAR_3->ox ||
     VAR_4->xoff >= VAR_3->ox + VAR_3->sx ||
     VAR_4->yoff + VAR_4->sy <= VAR_3->oy ||
     VAR_4->yoff >= VAR_3->oy + VAR_3->sy)
  return;

 if (VAR_4->xoff >= VAR_3->ox && VAR_4->xoff + VAR_4->sx <= VAR_3->ox + VAR_3->sx) {

  VAR_16 = VAR_4->xoff - VAR_3->ox;
  VAR_18 = VAR_4->sx;
 } else if (VAR_4->xoff < VAR_3->ox &&
     VAR_4->xoff + VAR_4->sx > VAR_3->ox + VAR_3->sx) {

  VAR_16 = 0;
  VAR_18 = VAR_3->sx;
 } else if (VAR_4->xoff < VAR_3->ox) {

  VAR_16 = 0;
  VAR_18 = VAR_4->sx - (VAR_3->ox - VAR_4->xoff);
 } else {

  VAR_16 = VAR_4->xoff - VAR_3->ox;
  VAR_18 = VAR_4->sx - VAR_16;
 }
 if (VAR_4->yoff >= VAR_3->oy && VAR_4->yoff + VAR_4->sy <= VAR_3->oy + VAR_3->sy) {

  VAR_17 = VAR_4->yoff - VAR_3->oy;
  VAR_19 = VAR_4->sy;
 } else if (VAR_4->yoff < VAR_3->oy &&
     VAR_4->yoff + VAR_4->sy > VAR_3->oy + VAR_3->sy) {

  VAR_17 = 0;
  VAR_19 = VAR_3->sy;
 } else if (VAR_4->yoff < VAR_3->oy) {

  VAR_17 = 0;
  VAR_19 = VAR_4->sy - (VAR_3->oy - VAR_4->yoff);
 } else {

  VAR_17 = VAR_4->yoff - VAR_3->oy;
  VAR_19 = VAR_4->sy - VAR_17;
 }

 if (VAR_3->statustop)
  VAR_17 += VAR_3->statuslines;
 VAR_12 = VAR_18 / 2;
 VAR_13 = VAR_19 / 2;

 if (FUNC_7(VAR_4, &VAR_11) != 0)
  FUNC_0("index not found");
 VAR_24 = FUNC_8(VAR_22, sizeof VAR_22, "%u", VAR_11);

 if (VAR_18 < VAR_24)
  return;
 VAR_20 = FUNC_2(VAR_8, "display-panes-colour");
 VAR_21 = FUNC_2(VAR_8, "display-panes-active-colour");

 if (VAR_18 < VAR_24 * 6 || VAR_19 < 5) {
  FUNC_4(VAR_6, VAR_16 + VAR_12 - VAR_24 / 2, VAR_17 + VAR_13);
  goto draw_text;
 }

 VAR_12 -= VAR_24 * 3;
 VAR_13 -= 2;

 FUNC_1(&VAR_10, &VAR_1, sizeof VAR_10);
 if (VAR_9->active == VAR_4)
  VAR_10.bg = VAR_21;
 else
  VAR_10.bg = VAR_20;
 VAR_10.flags |= VAR_0;

 FUNC_3(VAR_6, &VAR_10, VAR_4);
 for (VAR_23 = VAR_22; *VAR_23 != '\0'; VAR_23++) {
  if (*VAR_23 < '0' || *VAR_23 > '9')
   continue;
  VAR_11 = *VAR_23 - '0';

  for (VAR_15 = 0; VAR_15 < 5; VAR_15++) {
   for (VAR_14 = VAR_12; VAR_14 < VAR_12 + 5; VAR_14++) {
    FUNC_4(VAR_6, VAR_16 + VAR_14, VAR_17 + VAR_13 + VAR_15);
    if (VAR_2[VAR_11][VAR_15][VAR_14 - VAR_12])
     FUNC_5(VAR_6, ' ');
   }
  }
  VAR_12 += 6;
 }

 VAR_24 = FUNC_8(VAR_22, sizeof VAR_22, "%ux%u", VAR_4->sx, VAR_4->sy);
 if (VAR_18 < VAR_24 || VAR_19 < 6)
  return;
 FUNC_4(VAR_6, VAR_16 + VAR_18 - VAR_24, VAR_17);

draw_text:
 FUNC_1(&VAR_10, &VAR_1, sizeof VAR_10);
 if (VAR_9->active == VAR_4)
  VAR_10.fg = VAR_21;
 else
  VAR_10.fg = VAR_20;
 VAR_10.flags |= VAR_0;

 FUNC_3(VAR_6, &VAR_10, VAR_4);
 FUNC_6(VAR_6, VAR_22);

 FUNC_4(VAR_6, 0, 0);
}

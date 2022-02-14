
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
typedef int time_t ;
struct window_pane {TYPE_1__* window; } ;
struct window_mode_entry {struct window_clock_mode_data* data; struct window_pane* wp; } ;
struct screen {int dummy; } ;
struct window_clock_mode_data {struct screen screen; } ;
struct tm {int tm_hour; } ;
struct screen_write_ctx {int dummy; } ;
struct grid_cell {int fg; int bg; int flags; } ;
struct TYPE_2__ {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tm* FUNC_0 (int *) ;
 int FUNC_1 (struct grid_cell*,int *,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct screen*) ;
 int FUNC_4 (struct screen*) ;
 int FUNC_5 (struct screen_write_ctx*,int) ;
 int FUNC_6 (struct screen_write_ctx*,int,int,int ) ;
 int FUNC_7 (struct screen_write_ctx*,struct grid_cell*,char) ;
 int FUNC_8 (struct screen_write_ctx*,struct grid_cell*,char*,char*) ;
 int FUNC_9 (struct screen_write_ctx*,int *,struct screen*) ;
 int FUNC_10 (struct screen_write_ctx*) ;
 int FUNC_11 (char*,int,char*,struct tm*) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *) ;
 scalar_t__*** VAR_2 ;

__attribute__((used)) static void
FUNC_15(struct window_mode_entry *VAR_3)
{
 struct window_pane *VAR_4 = VAR_3->wp;
 struct window_clock_mode_data *VAR_5 = VAR_3->data;
 struct screen_write_ctx VAR_6;
 int VAR_7, VAR_8;
 struct screen *VAR_9 = &VAR_5->screen;
 struct grid_cell VAR_10;
 char VAR_11[64], *VAR_12;
 time_t VAR_13;
 struct tm *VAR_14;
 u_int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_7 = FUNC_2(VAR_4->window->options, "clock-mode-colour");
 VAR_8 = FUNC_2(VAR_4->window->options, "clock-mode-style");

 FUNC_9(&VAR_6, ((void*)0), VAR_9);

 VAR_13 = FUNC_14(((void*)0));
 VAR_14 = FUNC_0(&VAR_13);
 if (VAR_8 == 0) {
  FUNC_11(VAR_11, sizeof VAR_11, "%l:%M ", FUNC_0(&VAR_13));
  if (VAR_14->tm_hour >= 12)
   FUNC_12(VAR_11, "PM", sizeof VAR_11);
  else
   FUNC_12(VAR_11, "AM", sizeof VAR_11);
 } else
  FUNC_11(VAR_11, sizeof VAR_11, "%H:%M", VAR_14);

 FUNC_5(&VAR_6, 8);

 if (FUNC_3(VAR_9) < 6 * FUNC_13(VAR_11) || FUNC_4(VAR_9) < 6) {
  if (FUNC_3(VAR_9) >= FUNC_13(VAR_11) && FUNC_4(VAR_9) != 0) {
   VAR_17 = (FUNC_3(VAR_9) / 2) - (FUNC_13(VAR_11) / 2);
   VAR_18 = FUNC_4(VAR_9) / 2;
   FUNC_6(&VAR_6, VAR_17, VAR_18, 0);

   FUNC_1(&VAR_10, &VAR_1, sizeof VAR_10);
   VAR_10.flags |= VAR_0;
   VAR_10.fg = VAR_7;
   FUNC_8(&VAR_6, &VAR_10, "%s", VAR_11);
  }

  FUNC_10(&VAR_6);
  return;
 }

 VAR_17 = (FUNC_3(VAR_9) / 2) - 3 * FUNC_13(VAR_11);
 VAR_18 = (FUNC_4(VAR_9) / 2) - 3;

 FUNC_1(&VAR_10, &VAR_1, sizeof VAR_10);
 VAR_10.flags |= VAR_0;
 VAR_10.bg = VAR_7;
 for (VAR_12 = VAR_11; *VAR_12 != '\0'; VAR_12++) {
  if (*VAR_12 >= '0' && *VAR_12 <= '9')
   VAR_19 = *VAR_12 - '0';
  else if (*VAR_12 == ':')
   VAR_19 = 10;
  else if (*VAR_12 == 'A')
   VAR_19 = 11;
  else if (*VAR_12 == 'P')
   VAR_19 = 12;
  else if (*VAR_12 == 'M')
   VAR_19 = 13;
  else {
   VAR_17 += 6;
   continue;
  }

  for (VAR_16 = 0; VAR_16 < 5; VAR_16++) {
   for (VAR_15 = 0; VAR_15 < 5; VAR_15++) {
    FUNC_6(&VAR_6, VAR_17 + VAR_15, VAR_18 + VAR_16, 0);
    if (VAR_2[VAR_19][VAR_16][VAR_15])
     FUNC_7(&VAR_6, &VAR_10, ' ');
   }
  }
  VAR_17 += 6;
 }

 FUNC_10(&VAR_6);
}

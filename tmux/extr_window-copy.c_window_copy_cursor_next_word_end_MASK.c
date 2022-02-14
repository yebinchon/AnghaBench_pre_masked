
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct window_pane {TYPE_1__* window; } ;
struct window_mode_entry {struct window_copy_mode_data* data; struct window_pane* wp; } ;
struct window_copy_mode_data {scalar_t__ cx; scalar_t__ cy; scalar_t__ oy; struct screen* backing; } ;
struct screen {int dummy; } ;
struct options {int dummy; } ;
struct TYPE_2__ {struct options* options; } ;


 int VAR_0 ;
 int FUNC_0 (struct options*,char*) ;
 scalar_t__ FUNC_1 (struct screen*) ;
 scalar_t__ FUNC_2 (struct screen*) ;
 int FUNC_3 (struct window_mode_entry*,int ) ;
 scalar_t__ FUNC_4 (struct window_mode_entry*,scalar_t__) ;
 int FUNC_5 (struct window_mode_entry*,scalar_t__,scalar_t__,char const*) ;
 int FUNC_6 (struct window_mode_entry*,scalar_t__,int) ;
 int FUNC_7 (struct window_mode_entry*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (struct window_mode_entry*,int) ;

__attribute__((used)) static void
FUNC_9(struct window_mode_entry *VAR_1,
    const char *VAR_2)
{
 struct window_pane *VAR_3 = VAR_1->wp;
 struct window_copy_mode_data *VAR_4 = VAR_1->data;
 struct options *VAR_5 = VAR_3->window->options;
 struct screen *VAR_6 = VAR_4->backing;
 u_int VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12 = 1;

 VAR_7 = VAR_4->cx;
 VAR_8 = FUNC_1(VAR_6) + VAR_4->cy - VAR_4->oy;
 VAR_9 = FUNC_4(VAR_1, VAR_8);
 VAR_10 = FUNC_1(VAR_6) + FUNC_2(VAR_6) - 1;

 VAR_11 = FUNC_0(VAR_5, "mode-keys");
 if (VAR_11 == VAR_0 && !FUNC_5(VAR_1, VAR_7, VAR_8, VAR_2))
  VAR_7++;







 do {
  while (VAR_7 > VAR_9 ||
      FUNC_5(VAR_1, VAR_7, VAR_8, VAR_2) == VAR_12) {

   if (VAR_7 > VAR_9) {
    if (VAR_8 == VAR_10)
     return;
    FUNC_3(VAR_1, 0);
    VAR_7 = 0;

    VAR_8 = FUNC_1(VAR_6) + VAR_4->cy - VAR_4->oy;
    VAR_9 = FUNC_4(VAR_1, VAR_8);
   } else
    VAR_7++;
  }
  VAR_12 = !VAR_12;
 } while (VAR_12 == 0);

 if (VAR_11 == VAR_0 && VAR_7 != 0)
  VAR_7--;

 FUNC_7(VAR_1, VAR_7, VAR_4->cy);
 if (FUNC_8(VAR_1, 1))
  FUNC_6(VAR_1, VAR_4->cy, 1);
}

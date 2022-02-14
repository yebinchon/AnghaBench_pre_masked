
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct window_pane {TYPE_1__* window; } ;
struct window_mode_entry {struct window_copy_mode_data* data; struct window_pane* wp; } ;
struct screen {int dummy; } ;
struct window_copy_mode_data {scalar_t__ selx; scalar_t__ sely; scalar_t__ endselx; scalar_t__ endsely; scalar_t__ cy; scalar_t__ cursordrag; scalar_t__ rectflag; int modekeys; struct screen screen; } ;
struct options {int dummy; } ;
struct grid_cell {int flags; } ;
struct TYPE_2__ {struct options* options; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct screen*) ;
 int FUNC_1 (struct screen*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,struct grid_cell*) ;
 int FUNC_2 (struct grid_cell*,struct options*,char*) ;
 int FUNC_3 (struct window_mode_entry*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (struct window_mode_entry*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct window_mode_entry*) ;

__attribute__((used)) static int
FUNC_6(struct window_mode_entry *VAR_3, int VAR_4)
{
 struct window_pane *VAR_5 = VAR_3->wp;
 struct window_copy_mode_data *VAR_6 = VAR_3->data;
 struct screen *VAR_7 = &VAR_6->screen;
 struct options *VAR_8 = VAR_5->window->options;
 struct grid_cell VAR_9;
 u_int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16;

 FUNC_5(VAR_3);


 VAR_10 = VAR_6->selx;
 VAR_11 = VAR_6->sely;
 VAR_15 = FUNC_3(VAR_3, &VAR_10, &VAR_11);


 VAR_13 = VAR_6->endselx;
 VAR_14 = VAR_6->endsely;
 VAR_16 = FUNC_3(VAR_3, &VAR_13, &VAR_14);


 if (VAR_15 == VAR_16 &&
     VAR_15 != VAR_2) {
  FUNC_0(VAR_7);
  return (0);
 }


 FUNC_2(&VAR_9, VAR_8, "mode-style");
 VAR_9.flags |= VAR_1;
 FUNC_1(VAR_7, VAR_10, VAR_11, VAR_13, VAR_14, VAR_6->rectflag,
     VAR_6->modekeys, &VAR_9);

 if (VAR_6->rectflag && VAR_4) {





  VAR_12 = VAR_6->cy;
  if (VAR_6->cursordrag == VAR_0) {
   if (VAR_11 < VAR_12)
    FUNC_4(VAR_3, VAR_11, VAR_12 - VAR_11 + 1);
   else
    FUNC_4(VAR_3, VAR_12, VAR_11 - VAR_12 + 1);
  } else {
   if (VAR_14 < VAR_12) {
    FUNC_4(VAR_3, VAR_14,
        VAR_12 - VAR_14 + 1);
   } else {
    FUNC_4(VAR_3, VAR_12,
        VAR_14 - VAR_12 + 1);
   }
  }
 }

 return (1);
}

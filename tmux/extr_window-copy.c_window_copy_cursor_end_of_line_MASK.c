
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct TYPE_2__ {int * sel; } ;
struct window_copy_mode_data {scalar_t__ cy; scalar_t__ oy; scalar_t__ cx; scalar_t__ lineflag; scalar_t__ rectflag; TYPE_1__ screen; struct screen* backing; } ;
struct screen {struct grid* grid; } ;
struct grid_line {int flags; } ;
struct grid {scalar_t__ sy; scalar_t__ hsize; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct grid_line* FUNC_0 (struct grid*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct screen*) ;
 scalar_t__ FUNC_2 (struct screen*) ;
 int FUNC_3 (struct window_mode_entry*,int ) ;
 scalar_t__ FUNC_4 (struct window_mode_entry*,scalar_t__) ;
 int FUNC_5 (struct window_mode_entry*,scalar_t__,int) ;
 int FUNC_6 (struct window_mode_entry*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (struct window_mode_entry*,int) ;

__attribute__((used)) static void
FUNC_8(struct window_mode_entry *VAR_2)
{
 struct window_copy_mode_data *VAR_3 = VAR_2->data;
 struct screen *VAR_4 = VAR_3->backing;
 struct grid *VAR_5 = VAR_4->grid;
 struct grid_line *VAR_6;
 u_int VAR_7, VAR_8;

 VAR_8 = FUNC_1(VAR_4) + VAR_3->cy - VAR_3->oy;
 VAR_7 = FUNC_4(VAR_2, VAR_8);

 if (VAR_3->cx == VAR_7 && VAR_3->lineflag == VAR_1) {
  if (VAR_3->screen.sel != ((void*)0) && VAR_3->rectflag)
   VAR_7 = FUNC_2(VAR_4);
  VAR_6 = FUNC_0(VAR_5, VAR_8);
  if (VAR_6->flags & VAR_0) {
   while (VAR_8 < VAR_5->sy + VAR_5->hsize) {
    VAR_6 = FUNC_0(VAR_5, VAR_8);
    if (~VAR_6->flags & VAR_0)
     break;
    FUNC_3(VAR_2, 0);
    VAR_8 = FUNC_1(VAR_4) + VAR_3->cy - VAR_3->oy;
   }
   VAR_7 = FUNC_4(VAR_2, VAR_8);
  }
 }
 FUNC_6(VAR_2, VAR_7, VAR_3->cy);

 if (FUNC_7(VAR_2, 1))
  FUNC_5(VAR_2, VAR_3->cy, 1);
}

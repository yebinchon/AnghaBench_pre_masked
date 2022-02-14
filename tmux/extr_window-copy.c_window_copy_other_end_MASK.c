
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct screen {int * sel; } ;
struct window_copy_mode_data {scalar_t__ lineflag; int cursordrag; scalar_t__ endselx; scalar_t__ endsely; scalar_t__ selx; scalar_t__ sely; scalar_t__ cy; scalar_t__ oy; int backing; scalar_t__ cx; struct screen screen; } ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct screen*) ;
 int FUNC_2 (struct window_mode_entry*) ;
 int FUNC_3 (struct window_mode_entry*,int) ;

__attribute__((used)) static void
FUNC_4(struct window_mode_entry *VAR_3)
{
 struct window_copy_mode_data *VAR_4 = VAR_3->data;
 struct screen *VAR_5 = &VAR_4->screen;
 u_int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 if (VAR_5->sel == ((void*)0) && VAR_4->lineflag == VAR_1)
  return;

 if (VAR_4->lineflag == VAR_0)
  VAR_4->lineflag = VAR_2;
 else if (VAR_4->lineflag == VAR_2)
  VAR_4->lineflag = VAR_0;

 switch (VAR_4->cursordrag) {
  case 129:
  case 128:
   VAR_4->cursordrag = 130;
   break;
  case 130:
   VAR_4->cursordrag = 128;
   break;
 }

 VAR_6 = VAR_4->endselx;
 VAR_7 = VAR_4->endsely;
 if (VAR_4->cursordrag == 128) {
  VAR_6 = VAR_4->selx;
  VAR_7 = VAR_4->sely;
 }

 VAR_8 = VAR_4->cy;
 VAR_9 = FUNC_0(VAR_4->backing) + VAR_4->cy - VAR_4->oy;

 VAR_4->cx = VAR_6;

 VAR_10 = FUNC_0(VAR_4->backing);
 if (VAR_7 < VAR_10 - VAR_4->oy) {
  VAR_4->oy = VAR_10 - VAR_7;
  VAR_4->cy = 0;
 } else if (VAR_7 > VAR_10 - VAR_4->oy + FUNC_1(VAR_5)) {
  VAR_4->oy = VAR_10 - VAR_7 + FUNC_1(VAR_5) - 1;
  VAR_4->cy = FUNC_1(VAR_5) - 1;
 } else
  VAR_4->cy = VAR_8 + VAR_7 - VAR_9;

 FUNC_3(VAR_3, 1);
 FUNC_2(VAR_3);
}

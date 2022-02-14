
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct screen {int * sel; } ;
struct window_copy_mode_data {scalar_t__ cy; scalar_t__ oy; scalar_t__ cx; scalar_t__ lastcx; scalar_t__ lastsx; scalar_t__ lineflag; scalar_t__ sely; int backing; int rectflag; struct screen screen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct screen*) ;
 int FUNC_2 (struct window_mode_entry*) ;
 int FUNC_3 (struct window_mode_entry*) ;
 scalar_t__ FUNC_4 (struct window_mode_entry*,scalar_t__) ;
 int FUNC_5 (struct window_mode_entry*) ;
 int FUNC_6 (struct window_mode_entry*,int,int) ;
 int FUNC_7 (struct window_mode_entry*,int) ;
 int FUNC_8 (struct window_mode_entry*,scalar_t__,int) ;
 scalar_t__ FUNC_9 (struct window_mode_entry*,int) ;

__attribute__((used)) static void
FUNC_10(struct window_mode_entry *VAR_2, int VAR_3)
{
 struct window_copy_mode_data *VAR_4 = VAR_2->data;
 struct screen *VAR_5 = &VAR_4->screen;
 u_int VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_0(VAR_4->backing) + VAR_4->cy - VAR_4->oy;
 VAR_6 = FUNC_4(VAR_2, VAR_7);
 if (VAR_4->cx != VAR_6) {
  VAR_4->lastcx = VAR_4->cx;
  VAR_4->lastsx = VAR_6;
 }

 if (VAR_4->lineflag == VAR_0 && VAR_7 == VAR_4->sely)
  FUNC_5(VAR_2);

 if (VAR_3 || VAR_4->cy == 0) {
  VAR_4->cx = VAR_4->lastcx;
  FUNC_7(VAR_2, 1);
  if (VAR_3) {
   if (VAR_4->cy == FUNC_1(VAR_5) - 1)
    FUNC_6(VAR_2, VAR_4->cy, 1);
   else
    FUNC_6(VAR_2, VAR_4->cy, 2);
  }
 } else {
  FUNC_8(VAR_2, VAR_4->lastcx, VAR_4->cy - 1);
  if (FUNC_9(VAR_2, 1)) {
   if (VAR_4->cy == FUNC_1(VAR_5) - 1)
    FUNC_6(VAR_2, VAR_4->cy, 1);
   else
    FUNC_6(VAR_2, VAR_4->cy, 2);
  }
 }

 if (VAR_4->screen.sel == ((void*)0) || !VAR_4->rectflag) {
  VAR_9 = FUNC_0(VAR_4->backing) + VAR_4->cy - VAR_4->oy;
  VAR_8 = FUNC_4(VAR_2, VAR_9);
  if ((VAR_4->cx >= VAR_4->lastsx && VAR_4->cx != VAR_8) ||
      VAR_4->cx > VAR_8)
   FUNC_2(VAR_2);
 }

 if (VAR_4->lineflag == VAR_0)
  FUNC_2(VAR_2);
 else if (VAR_4->lineflag == VAR_1)
  FUNC_3(VAR_2);
}

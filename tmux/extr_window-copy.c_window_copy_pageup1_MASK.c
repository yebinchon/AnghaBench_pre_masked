
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct screen {int * sel; } ;
struct window_copy_mode_data {scalar_t__ cy; scalar_t__ oy; scalar_t__ cx; scalar_t__ lastcx; scalar_t__ lastsx; int backing; int rectflag; struct screen screen; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct screen*) ;
 int FUNC_2 (struct window_mode_entry*) ;
 scalar_t__ FUNC_3 (struct window_mode_entry*,scalar_t__) ;
 int FUNC_4 (struct window_mode_entry*) ;
 int FUNC_5 (struct window_mode_entry*,int) ;

__attribute__((used)) static void
FUNC_6(struct window_mode_entry *VAR_0, int VAR_1)
{
 struct window_copy_mode_data *VAR_2 = VAR_0->data;
 struct screen *VAR_3 = &VAR_2->screen;
 u_int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_0(VAR_2->backing) + VAR_2->cy - VAR_2->oy;
 VAR_5 = FUNC_3(VAR_0, VAR_6);

 if (VAR_2->cx != VAR_5) {
  VAR_2->lastcx = VAR_2->cx;
  VAR_2->lastsx = VAR_5;
 }
 VAR_2->cx = VAR_2->lastcx;

 VAR_4 = 1;
 if (FUNC_1(VAR_3) > 2) {
  if (VAR_1)
   VAR_4 = FUNC_1(VAR_3) / 2;
  else
   VAR_4 = FUNC_1(VAR_3) - 2;
 }

 if (VAR_2->oy + VAR_4 > FUNC_0(VAR_2->backing)) {
  VAR_2->oy = FUNC_0(VAR_2->backing);
  if (VAR_2->cy < VAR_4)
   VAR_2->cy = 0;
  else
   VAR_2->cy -= VAR_4;
 } else
  VAR_2->oy += VAR_4;

 if (VAR_2->screen.sel == ((void*)0) || !VAR_2->rectflag) {
  VAR_8 = FUNC_0(VAR_2->backing) + VAR_2->cy - VAR_2->oy;
  VAR_7 = FUNC_3(VAR_0, VAR_8);
  if ((VAR_2->cx >= VAR_2->lastsx && VAR_2->cx != VAR_7) ||
      VAR_2->cx > VAR_7)
   FUNC_2(VAR_0);
 }

 FUNC_5(VAR_0, 1);
 FUNC_4(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct screen {int * sel; } ;
struct window_copy_mode_data {scalar_t__ cy; scalar_t__ oy; scalar_t__ cx; scalar_t__ lastcx; scalar_t__ lastsx; struct screen* backing; int rectflag; struct screen screen; } ;


 scalar_t__ FUNC_0 (struct screen*) ;
 int FUNC_1 (struct screen*) ;
 int FUNC_2 (struct window_mode_entry*) ;
 scalar_t__ FUNC_3 (struct window_mode_entry*,scalar_t__) ;
 int FUNC_4 (struct window_mode_entry*) ;
 int FUNC_5 (struct window_mode_entry*,int) ;

__attribute__((used)) static int
FUNC_6(struct window_mode_entry *VAR_0, int VAR_1,
    int VAR_2)
{
 struct window_copy_mode_data *VAR_3 = VAR_0->data;
 struct screen *VAR_4 = &VAR_3->screen;
 u_int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_0(VAR_3->backing) + VAR_3->cy - VAR_3->oy;
 VAR_6 = FUNC_3(VAR_0, VAR_7);

 if (VAR_3->cx != VAR_6) {
  VAR_3->lastcx = VAR_3->cx;
  VAR_3->lastsx = VAR_6;
 }
 VAR_3->cx = VAR_3->lastcx;

 VAR_5 = 1;
 if (FUNC_1(VAR_4) > 2) {
  if (VAR_1)
   VAR_5 = FUNC_1(VAR_4) / 2;
  else
   VAR_5 = FUNC_1(VAR_4) - 2;
 }

 if (VAR_3->oy < VAR_5) {
  VAR_3->oy = 0;
  if (VAR_3->cy + (VAR_5 - VAR_3->oy) >= FUNC_1(VAR_3->backing))
   VAR_3->cy = FUNC_1(VAR_3->backing) - 1;
  else
   VAR_3->cy += VAR_5 - VAR_3->oy;
 } else
  VAR_3->oy -= VAR_5;

 if (VAR_3->screen.sel == ((void*)0) || !VAR_3->rectflag) {
  VAR_9 = FUNC_0(VAR_3->backing) + VAR_3->cy - VAR_3->oy;
  VAR_8 = FUNC_3(VAR_0, VAR_9);
  if ((VAR_3->cx >= VAR_3->lastsx && VAR_3->cx != VAR_8) ||
      VAR_3->cx > VAR_8)
   FUNC_2(VAR_0);
 }

 if (VAR_2 && VAR_3->oy == 0)
  return (1);
 FUNC_5(VAR_0, 1);
 FUNC_4(VAR_0);
 return (0);
}

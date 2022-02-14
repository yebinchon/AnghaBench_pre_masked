
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window_pane {int event; int id; struct screen* screen; } ;
struct screen {int mode; } ;
struct mouse_event {int b; char sgr_type; int sgr_b; int lb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,size_t) ;
 scalar_t__ FUNC_3 (struct window_pane*,struct mouse_event*,int*,int*,int ) ;
 scalar_t__ FUNC_4 (int,char*) ;
 int FUNC_5 (char*,int,char*,int ) ;
 int FUNC_6 (struct window_pane*) ;
 size_t FUNC_7 (char*,int,char*,...) ;

__attribute__((used)) static void
FUNC_8(struct window_pane *VAR_5, struct mouse_event *VAR_6)
{
 struct screen *VAR_7 = VAR_5->screen;
 int VAR_8 = VAR_7->mode;
 char VAR_9[40];
 size_t VAR_10;
 u_int VAR_11, VAR_12;

 if ((VAR_8 & VAR_0) == 0)
  return;
 if (FUNC_3(VAR_5, VAR_6, &VAR_11, &VAR_12, 0) != 0)
  return;
 if (!FUNC_6(VAR_5))
  return;


 if (FUNC_1(VAR_6->b) &&
     (VAR_8 & (VAR_2|VAR_1)) == 0)
     return;







 if (VAR_6->sgr_type != ' ') {
  if (FUNC_1(VAR_6->sgr_b) &&
      FUNC_0(VAR_6->sgr_b) == 3 &&
      (~VAR_8 & VAR_1))
   return;
 } else {
  if (FUNC_1(VAR_6->b) &&
      FUNC_0(VAR_6->b) == 3 &&
      FUNC_0(VAR_6->lb) == 3 &&
      (~VAR_8 & VAR_1))
   return;
 }
 if (VAR_6->sgr_type != ' ' && (VAR_7->mode & VAR_3)) {
  VAR_10 = FUNC_7(VAR_9, sizeof VAR_9, "\033[<%u;%u;%u%c",
      VAR_6->sgr_b, VAR_11 + 1, VAR_12 + 1, VAR_6->sgr_type);
 } else if (VAR_7->mode & VAR_4) {
  if (VAR_6->b > 0x7ff - 32 || VAR_11 > 0x7ff - 33 || VAR_12 > 0x7ff - 33)
   return;
  VAR_10 = FUNC_7(VAR_9, sizeof VAR_9, "\033[M");
  VAR_10 += FUNC_4(VAR_6->b + 32, &VAR_9[VAR_10]);
  VAR_10 += FUNC_4(VAR_11 + 33, &VAR_9[VAR_10]);
  VAR_10 += FUNC_4(VAR_12 + 33, &VAR_9[VAR_10]);
 } else {
  if (VAR_6->b > 223)
   return;
  VAR_10 = FUNC_7(VAR_9, sizeof VAR_9, "\033[M");
  VAR_9[VAR_10++] = VAR_6->b + 32;
  VAR_9[VAR_10++] = VAR_11 + 33;
  VAR_9[VAR_10++] = VAR_12 + 33;
 }
 FUNC_5("writing mouse %.*s to %%%u", (int)VAR_10, VAR_9, VAR_5->id);
 FUNC_2(VAR_5->event, VAR_9, VAR_10);
}

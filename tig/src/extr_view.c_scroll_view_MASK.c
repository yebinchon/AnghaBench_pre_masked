
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int offset; int col; } ;
struct view {int height; int lines; TYPE_1__ pos; int width; } ;
typedef enum request { ____Placeholder_request } request ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct view*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct view*) ;
 int FUNC_5 (struct view*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct view*) ;

void
FUNC_9(struct view *VAR_2, enum request VAR_3)
{
 int VAR_4 = 1;

 FUNC_1(FUNC_8(VAR_2));

 if (VAR_3 == 129 || VAR_3 == 128)
  VAR_4 = VAR_1;

 switch (VAR_3) {
 case 136:
  VAR_2->pos.col = 0;
  FUNC_5(VAR_2, 0);
  FUNC_7();
  return;
 case 135:
  if (VAR_2->pos.col == 0) {
   FUNC_6("Cannot scroll beyond the first column");
   return;
  }
  if (VAR_2->pos.col <= FUNC_0(VAR_0, VAR_2->width))
   VAR_2->pos.col = 0;
  else
   VAR_2->pos.col -= FUNC_0(VAR_0, VAR_2->width);
  FUNC_5(VAR_2, 0);
  FUNC_7();
  return;
 case 130:
  VAR_2->pos.col += FUNC_0(VAR_0, VAR_2->width);
  FUNC_4(VAR_2);
  FUNC_7();
  return;
 case 132:
  VAR_4 = VAR_2->height;

 case 129:
 case 134:
  if (VAR_2->pos.offset + VAR_4 > VAR_2->lines)
   VAR_4 = VAR_2->lines - VAR_2->pos.offset;

  if (VAR_4 == 0 || VAR_2->pos.offset + VAR_2->height >= VAR_2->lines) {
   FUNC_6("Cannot scroll beyond the last line");
   return;
  }
  break;

 case 131:
  VAR_4 = VAR_2->height;

 case 133:
 case 128:
  if (VAR_4 > VAR_2->pos.offset)
   VAR_4 = VAR_2->pos.offset;

  if (VAR_4 == 0) {
   FUNC_6("Cannot scroll beyond the first line");
   return;
  }

  VAR_4 = -VAR_4;
  break;

 default:
  FUNC_2("request %d not handled in switch", VAR_3);
 }

 FUNC_3(VAR_2, VAR_4);
}

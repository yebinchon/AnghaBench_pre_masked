
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lineno; int offset; } ;
struct view {int lines; int height; int win; TYPE_2__ pos; int * line; TYPE_1__* ops; } ;
typedef enum request { ____Placeholder_request } request ;
struct TYPE_3__ {int (* select ) (struct view*,int *) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct view*,int) ;
 int FUNC_4 (struct view*,size_t) ;
 int VAR_0 ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct view*,int *) ;
 int FUNC_8 (struct view*) ;
 int FUNC_9 (int ) ;

void
FUNC_10(struct view *VAR_1, enum request VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 switch (VAR_2) {
 case 138:
  VAR_4 = -VAR_1->pos.lineno;
  break;

 case 135:
  VAR_4 = VAR_1->lines - VAR_1->pos.lineno - 1;
  break;

 case 133:
  VAR_4 = VAR_1->height > VAR_1->pos.lineno
        ? -VAR_1->pos.lineno : -VAR_1->height;
  break;

 case 134:
  VAR_4 = VAR_1->pos.lineno + VAR_1->height >= VAR_1->lines
        ? VAR_1->lines - VAR_1->pos.lineno - 1 : VAR_1->height;
  break;

 case 136:
  VAR_4 = VAR_1->height / 2 > VAR_1->pos.lineno
        ? -VAR_1->pos.lineno : -(VAR_1->height / 2);
  break;

 case 137:
  VAR_4 = VAR_1->pos.lineno + VAR_1->height / 2 >= VAR_1->lines
        ? VAR_1->lines - VAR_1->pos.lineno - 1 : VAR_1->height / 2;
  break;

 case 131:
  VAR_4 = VAR_0;
  break;

 case 130:
  VAR_4 = -VAR_0;
  break;

 case 132:
 case 128:
  VAR_4 = -1;
  break;

 case 139:
 case 129:
  VAR_4 = 1;
  break;

 default:
  FUNC_2("request %d not handled in switch", VAR_2);
 }

 if (VAR_4 <= 0 && VAR_1->pos.lineno == 0) {
  FUNC_5("Cannot move beyond the first line");
  return;

 } else if (VAR_4 >= 0 && VAR_1->pos.lineno + 1 >= VAR_1->lines) {
  FUNC_5("Cannot move beyond the last line");
  return;
 }


 VAR_1->pos.lineno += VAR_4;
 FUNC_1(0 <= VAR_1->pos.lineno && VAR_1->pos.lineno < VAR_1->lines);


 if (VAR_1->pos.lineno < VAR_1->pos.offset ||
     VAR_1->pos.lineno >= VAR_1->pos.offset + VAR_1->height) {
  VAR_3 = VAR_4;
  if (VAR_4 < 0 && -VAR_4 > VAR_1->pos.offset) {
   VAR_3 = -VAR_1->pos.offset;

  } else if (VAR_4 > 0) {
   if (VAR_1->pos.lineno == VAR_1->lines - 1 &&
       VAR_1->lines > VAR_1->height) {
    VAR_3 = VAR_1->lines - VAR_1->pos.offset - 1;
    if (VAR_3 >= VAR_1->height)
     VAR_3 -= VAR_1->height - 1;
   }
  }
 }

 if (!FUNC_8(VAR_1)) {
  VAR_1->pos.offset += VAR_3;
  FUNC_1(0 <= VAR_1->pos.offset && VAR_1->pos.offset < VAR_1->lines);
  VAR_1->ops->select(VAR_1, &VAR_1->line[VAR_1->pos.lineno]);
  return;
 }


 if (FUNC_0(VAR_4) < VAR_1->height)
  FUNC_4(VAR_1, VAR_1->pos.lineno - VAR_4 - VAR_1->pos.offset);

 if (VAR_3) {
  FUNC_3(VAR_1, VAR_3);
  return;
 }


 FUNC_4(VAR_1, VAR_1->pos.lineno - VAR_1->pos.offset);

 FUNC_9(VAR_1->win);
 FUNC_6();
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct screen_write_ctx {struct screen* s; } ;
struct screen {size_t cx; size_t cy; } ;
struct menu {size_t width; size_t count; char const* title; TYPE_1__* items; } ;
struct grid_cell {int attr; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct screen_write_ctx*,struct grid_cell*,size_t,char const*,int *) ;
 int VAR_2 ;
 int FUNC_1 (struct grid_cell*,int *,int) ;
 int FUNC_2 (struct screen_write_ctx*,size_t,size_t) ;
 int FUNC_3 (struct screen_write_ctx*,size_t,size_t,int ) ;
 int FUNC_4 (struct screen_write_ctx*,size_t,int,int) ;
 int FUNC_5 (struct screen_write_ctx*,struct grid_cell*,char) ;
 int FUNC_6 (struct screen_write_ctx*,size_t,size_t) ;

void
FUNC_7(struct screen_write_ctx *VAR_3, struct menu *VAR_4, int VAR_5)
{
 struct screen *VAR_6 = VAR_3->s;
 struct grid_cell VAR_7;
 u_int VAR_8, VAR_9, VAR_10, VAR_11;
 const char *VAR_12;

 VAR_8 = VAR_6->cx;
 VAR_9 = VAR_6->cy;

 FUNC_1(&VAR_7, &VAR_2, sizeof VAR_7);

 FUNC_2(VAR_3, VAR_4->width + 4, VAR_4->count + 2);
 FUNC_3(VAR_3, VAR_8 + 2, VAR_9, 0);
 FUNC_0(VAR_3, &VAR_7, VAR_4->width, VAR_4->title, ((void*)0));

 for (VAR_10 = 0; VAR_10 < VAR_4->count; VAR_10++) {
  VAR_12 = VAR_4->items[VAR_10].name;
  if (VAR_12 == ((void*)0)) {
   FUNC_3(VAR_3, VAR_8, VAR_9 + 1 + VAR_10, 0);
   FUNC_4(VAR_3, VAR_4->width + 4, 1, 1);
  } else {
   if (VAR_5 >= 0 && VAR_10 == (u_int)VAR_5 && *VAR_12 != '-')
    VAR_7.attr |= VAR_1;
   FUNC_3(VAR_3, VAR_8 + 2, VAR_9 + 1 + VAR_10, 0);
   for (VAR_11 = 0; VAR_11 < VAR_4->width; VAR_11++)
    FUNC_5(VAR_3, &VAR_7, ' ');
   FUNC_3(VAR_3, VAR_8 + 2, VAR_9 + 1 + VAR_10, 0);
   if (*VAR_12 == '-') {
    VAR_12++;
    VAR_7.attr |= VAR_0;
    FUNC_0(VAR_3, &VAR_7, VAR_4->width, VAR_12, ((void*)0));
    VAR_7.attr &= ~VAR_0;
   } else
    FUNC_0(VAR_3, &VAR_7, VAR_4->width, VAR_12, ((void*)0));
   if (VAR_5 >= 0 && VAR_10 == (u_int)VAR_5)
    VAR_7.attr &= ~VAR_1;
  }
 }

 FUNC_6(VAR_3, VAR_8, VAR_9);
}

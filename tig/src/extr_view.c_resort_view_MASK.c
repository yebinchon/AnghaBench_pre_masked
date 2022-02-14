
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {size_t lines; TYPE_1__* line; } ;
struct TYPE_2__ {size_t lineno; } ;


 int FUNC_0 (TYPE_1__*,size_t,int,int ) ;
 int VAR_0 ;
 struct view* VAR_1 ;

void
FUNC_1(struct view *VAR_2, bool VAR_3)
{
 VAR_1 = VAR_2;
 FUNC_0(VAR_2->line, VAR_2->lines, sizeof(*VAR_2->line), VAR_0);

 if (VAR_3) {
  size_t VAR_4, VAR_5;

  for (VAR_4 = 0, VAR_5 = 1; VAR_4 < VAR_2->lines; VAR_4++)
   if (VAR_2->line[VAR_4].lineno)
    VAR_2->line[VAR_4].lineno = VAR_5++;
 }
}

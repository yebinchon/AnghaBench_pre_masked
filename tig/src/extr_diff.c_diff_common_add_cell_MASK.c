
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct diff_stat_context {size_t cells; int type; TYPE_1__* cell; int text; int cell_text; scalar_t__ skip; } ;
struct TYPE_2__ {size_t length; int type; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (int) ;

__attribute__((used)) static bool
FUNC_3(struct diff_stat_context *VAR_0, size_t VAR_1, bool VAR_2)
{
 FUNC_2(FUNC_0(VAR_0->cell) > VAR_0->cells);
 if (!VAR_2 && (VAR_1 == 0))
  return 1;
 if (VAR_0->skip && !FUNC_1(&VAR_0->cell_text, VAR_0->text, VAR_1))
  return 0;
 VAR_0->cell[VAR_0->cells].length = VAR_1;
 VAR_0->cell[VAR_0->cells].type = VAR_0->type;
 VAR_0->cells++;
 return 1;
}

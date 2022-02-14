
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t lineno; } ;
struct view {int matched_lines; size_t* matched_line; int grep; TYPE_1__ pos; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;


 int FUNC_0 (struct view*,size_t) ;
 int FUNC_1 (char*,size_t,int ,size_t,size_t) ;

__attribute__((used)) static enum status_code
FUNC_2(struct view *VAR_0, int VAR_1, bool VAR_2)
{


 size_t VAR_3 = VAR_1 > 0 ? 0 : VAR_0->matched_lines - 1;

 for (; VAR_3 < VAR_0->matched_lines; VAR_3 += VAR_1) {
  size_t VAR_4 = VAR_0->matched_line[VAR_3];

  if (VAR_1 > 0) {
   if (!VAR_2 && VAR_4 <= VAR_0->pos.lineno)
    continue;
   if (VAR_2 && VAR_4 > VAR_0->pos.lineno)
    continue;
  } else {
   if (!VAR_2 && VAR_4 >= VAR_0->pos.lineno)
    continue;
   if (VAR_2 && VAR_4 < VAR_0->pos.lineno)
    continue;
  }

  FUNC_0(VAR_0, VAR_4);
  return FUNC_1("Line %zu matches '%s' (%zu of %zu)", VAR_4 + 1, VAR_0->grep, VAR_3 + 1, VAR_0->matched_lines);
 }

 return -1;
}

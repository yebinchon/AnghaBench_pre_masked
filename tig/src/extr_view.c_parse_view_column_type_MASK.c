
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view_column {int type; } ;
typedef enum view_column_type { ____Placeholder_view_column_type } view_column_type ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
struct TYPE_2__ {int size; int * entries; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*,size_t) ;
 int FUNC_1 (char*,int,char const*) ;
 size_t FUNC_2 (char const*,char*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static enum status_code
FUNC_3(struct view_column *VAR_2, const char **VAR_3)
{
 enum view_column_type VAR_4;
 size_t VAR_5 = FUNC_2(*VAR_3, ":,");

 for (VAR_4 = 0; VAR_4 < VAR_1->size; VAR_4++)
  if (FUNC_0(VAR_1->entries[VAR_4], *VAR_3, VAR_5)) {
   *VAR_3 += VAR_5 + !!(*VAR_3)[VAR_5];
   VAR_2->type = VAR_4;
   return VAR_0;
  }

 return FUNC_1("Failed to parse view column type: %.*s", (int) VAR_5, *VAR_3);
}

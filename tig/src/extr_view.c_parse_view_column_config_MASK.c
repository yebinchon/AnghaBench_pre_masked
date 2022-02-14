
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view_column {int dummy; } ;
struct view {int name; TYPE_1__* ops; } ;
typedef enum view_column_type { ____Placeholder_view_column_type } view_column_type ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
struct TYPE_2__ {int column_bits; } ;


 int FUNC_0 (char*,char const*,...) ;
 struct view* FUNC_1 (char const*) ;
 struct view_column* FUNC_2 (struct view*,int) ;
 int FUNC_3 (struct view_column*,char const*) ;
 int FUNC_4 (struct view_column*,char const*,char const*) ;
 char* FUNC_5 (int) ;

enum status_code
FUNC_6(const char *VAR_0, enum view_column_type VAR_1,
    const char *VAR_2, const char *VAR_3[])
{
 struct view_column *VAR_4;
 struct view *VAR_5 = FUNC_1(VAR_0);

 if (!VAR_5)
  return FUNC_0("Unknown view: %s", VAR_0);

 if (!(VAR_5->ops->column_bits & (1 << VAR_1)))
  return FUNC_0("The %s view does not support %s column", VAR_5->name,
        FUNC_5(VAR_1));

 VAR_4 = FUNC_2(VAR_5, VAR_1);
 if (!VAR_4)
  return FUNC_0("The %s view does not have a %s column configured", VAR_5->name,
        FUNC_5(VAR_1));

 if (VAR_2)
  return FUNC_4(VAR_4, VAR_2, VAR_3[0]);
 return FUNC_3(VAR_4, VAR_3[0]);
}

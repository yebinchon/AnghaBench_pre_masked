
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct view_column {int type; int opt; int prev_opt; struct view_column* next; } ;
struct TYPE_4__ {struct view_column* current; } ;
struct view {struct view_column* columns; TYPE_2__ sort; int name; TYPE_1__* ops; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
struct TYPE_3__ {int column_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (char const**) ;
 struct view_column* FUNC_1 (size_t,int) ;
 int FUNC_2 (char*,char const*,...) ;
 struct view* FUNC_3 (char const*) ;
 int FUNC_4 (struct view_column*) ;
 int FUNC_5 (struct view_column*,char const*) ;
 int FUNC_6 (struct view_column*,char const**) ;
 char* FUNC_7 (int) ;

enum status_code
FUNC_8(struct view_column **VAR_4, const char *VAR_5, const char *VAR_6[])
{
 enum status_code VAR_7 = VAR_1;
 size_t VAR_8 = FUNC_0(VAR_6);
 struct view_column *VAR_9;
 struct view_column *VAR_10;
 struct view *VAR_11 = FUNC_3(VAR_5);
 int VAR_12;

 if (!VAR_11)
  return FUNC_2("Unknown view: %s", VAR_5);

 VAR_9 = FUNC_1(VAR_8, sizeof(*VAR_9));
 if (!VAR_9)
  return VAR_0;

 for (VAR_12 = 0, VAR_10 = ((void*)0); VAR_7 == VAR_1 && VAR_12 < VAR_8; VAR_12++) {
  const char *VAR_13 = VAR_6[VAR_12];

  if (VAR_10)
   VAR_10->next = &VAR_9[VAR_12];
  VAR_10 = &VAR_9[VAR_12];

  VAR_7 = FUNC_6(VAR_10, &VAR_13);
  if (VAR_7 != VAR_1)
   break;

  if (!(VAR_11->ops->column_bits & (1 << VAR_10->type)))
   return FUNC_2("The %s view does not support %s column", VAR_11->name,
         FUNC_7(VAR_10->type));

  if ((VAR_10->type == VAR_3 ||
       VAR_10->type == VAR_2) &&
       VAR_12 + 1 < VAR_8)
   return FUNC_2("The %s column must always be last",
         FUNC_7(VAR_10->type));

  VAR_7 = FUNC_5(VAR_10, VAR_13);
  VAR_10->prev_opt = VAR_10->opt;
 }

 if (VAR_7 == VAR_1) {
  FUNC_4(VAR_11->columns);
  VAR_11->columns = VAR_9;
  VAR_11->sort.current = VAR_11->columns;
  *VAR_4 = VAR_9;
 } else {
  FUNC_4(VAR_9);
 }

 return VAR_7;
}

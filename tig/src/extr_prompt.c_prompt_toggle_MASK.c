
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view_column {int opt; int type; struct view_column* next; } ;
struct sort_state {scalar_t__ reverse; } ;
struct view {char const* name; struct view_column* columns; struct sort_state sort; } ;
struct option_info {int dummy; } ;
typedef enum view_flag { ____Placeholder_view_flag } view_flag ;
typedef enum status_code { ____Placeholder_status_code } status_code ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char*,char const*) ;
 struct option_info* FUNC_3 (int ,int *,char const*,struct option_info*,char const**) ;
 struct option_info* FUNC_4 (int ,int ,char*,char const*) ;
 int FUNC_5 (struct view*) ;
 int VAR_1 ;
 int FUNC_6 (struct view*,char const**,char const*,struct option_info*,int*) ;
 int FUNC_7 (struct view*,int) ;
 size_t FUNC_8 (char const*) ;
 int FUNC_9 (char*,char const*,char*) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (struct view*,int ) ;

__attribute__((used)) static enum status_code
FUNC_12(struct view *VAR_2, const char *VAR_3[], enum view_flag *VAR_4)
{
 const char *VAR_5 = VAR_3[1];
 size_t VAR_6 = VAR_5 ? FUNC_8(VAR_5) : 0;
 struct option_info VAR_7;
 struct option_info *VAR_8;
 struct view_column *VAR_9;
 const char *VAR_10;

 if (!VAR_5)
  return FUNC_2("%s", "No option name given to :toggle");

 if (FUNC_1("sort-field", VAR_5, VAR_6) ||
     FUNC_1("sort-order", VAR_5, VAR_6)) {
  if (!FUNC_11(VAR_2, VAR_0)) {
   return FUNC_2("Sorting is not yet supported for the %s view", VAR_2->name);
  } else {
   bool VAR_11 = FUNC_1("sort-field", VAR_5, VAR_6);
   struct sort_state *VAR_12 = &VAR_2->sort;

   FUNC_7(VAR_2, VAR_11);
   return FUNC_9("set %s = %s", VAR_5,
    VAR_11 ? FUNC_10(FUNC_5(VAR_2))
        : VAR_12->reverse ? "descending" : "ascending");
  }
 }

 VAR_8 = FUNC_4(VAR_1, FUNC_0(VAR_1), "", VAR_5);
 if (VAR_8)
  return FUNC_6(VAR_2, VAR_3, "", VAR_8, VAR_4);

 for (VAR_9 = VAR_2->columns; VAR_9; VAR_9 = VAR_9->next) {
  VAR_8 = FUNC_3(VAR_9->type, &VAR_9->opt, VAR_5, &VAR_7, &VAR_10);
  if (VAR_8)
   return FUNC_6(VAR_2, VAR_3, VAR_10, VAR_8, VAR_4);
 }

 return FUNC_2("`:toggle %s` not supported", VAR_5);
}

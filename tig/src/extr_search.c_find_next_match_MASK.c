
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {int * grep; int matched_lines; TYPE_1__* env; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef enum request { ____Placeholder_request } request ;
struct TYPE_2__ {int * search; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct view*) ;
 int FUNC_2 (struct view*,int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct view*,int) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static enum status_code
FUNC_6(struct view *VAR_3, enum request VAR_4)
{
 enum status_code VAR_5;
 int VAR_6;

 if (!*VAR_3->grep || FUNC_4(VAR_3->grep, VAR_3->env->search)) {
  if (!*VAR_3->env->search)
   return FUNC_5("No previous search");
  return FUNC_3(VAR_3, VAR_4);
 }

 switch (VAR_4) {
 case 129:
 case 131:
  VAR_6 = 1;
  break;

 case 128:
 case 130:
  VAR_6 = -1;
  break;

 default:
  return FUNC_0("Unknown search request");
 }

 if (!VAR_3->matched_lines && !FUNC_1(VAR_3))
  return VAR_0;

 VAR_5 = FUNC_2(VAR_3, VAR_6, 0);
 if (VAR_5 != VAR_1 && VAR_2)
  VAR_5 = FUNC_2(VAR_3, VAR_6, 1);

 return VAR_5 == VAR_1 ? VAR_5 : FUNC_5("No match found for '%s'", VAR_3->grep);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct status {TYPE_1__ new; } ;
struct line {scalar_t__ type; struct status* data; } ;
typedef enum request { ____Placeholder_request } request ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct view*,struct status*,scalar_t__,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int,char*) ;
 scalar_t__ FUNC_3 (struct view*) ;

__attribute__((used)) static enum request
FUNC_4(struct view *VAR_4, struct line *VAR_5)
{
 struct status *VAR_6 = VAR_5->data;
 enum open_flags VAR_7 = FUNC_3(VAR_4) ? VAR_2 : VAR_1;

 if (VAR_5->type == VAR_0 ||
     (!VAR_6 && VAR_5[1].type == VAR_0)) {
  FUNC_1("No file to diff");
  return VAR_3;
 }

 switch (VAR_5->type) {
 case 130:
 case 129:
  break;

 case 128:
  if (!VAR_6) {
   FUNC_1("No file to show");
   return VAR_3;
  }

  if (!FUNC_2(VAR_6->new.name, -1, "/")) {
   FUNC_1("Cannot display a directory");
   return VAR_3;
  }
  break;

 default:
  FUNC_1("Nothing to enter");
  return VAR_3;
 }

 FUNC_0(VAR_4, VAR_6, VAR_5->type, VAR_7);
 return VAR_3;
}

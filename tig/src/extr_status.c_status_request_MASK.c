
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct view {int * parent; TYPE_2__* env; } ;
struct TYPE_3__ {int name; } ;
struct status {unsigned char status; TYPE_1__ new; } ;
struct line {int type; struct status* data; } ;
typedef enum request { ____Placeholder_request } request ;
struct TYPE_4__ {int * ref; } ;


 int VAR_0 ;


 int VAR_1 ;





 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct view*) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (struct view*,struct line*) ;
 int FUNC_7 (struct view*,struct line*) ;
 int FUNC_8 (struct status*,int ,int ) ;
 int FUNC_9 (struct view*) ;

__attribute__((used)) static enum request
FUNC_10(struct view *VAR_5, enum request VAR_6, struct line *VAR_7)
{
 struct status *VAR_8 = VAR_7->data;

 switch (VAR_6) {
 case 129:
  if (!FUNC_9(VAR_5))
   return VAR_1;
  break;

 case 130:
  if (!FUNC_8(VAR_8, VAR_7->type, FUNC_7(VAR_5, VAR_7)))
   return VAR_1;
  break;

 case 131:
  if (!VAR_8 || VAR_8->status != 'U') {
   FUNC_5("Merging only possible for files with unmerged status ('U').");
   return VAR_1;
  }
  FUNC_3(VAR_8->new.name);
  break;

 case 134:
  if (!VAR_8)
   return VAR_6;
  if (VAR_8->status == 'D') {
   FUNC_5("File has been deleted.");
   return VAR_1;
  }

  FUNC_2(VAR_8->new.name, 0);
  break;

 case 128:
  if (VAR_7->type == VAR_0 || !VAR_8) {
   FUNC_5("Nothing to blame here");
   return VAR_1;
  }
  if (VAR_8)
   VAR_5->env->ref[0] = 0;
  return VAR_6;

 case 133:



  return FUNC_6(VAR_5, VAR_7);

 case 132:

  FUNC_0();
  break;

 default:
  return VAR_6;
 }

 if (VAR_4 && VAR_5->parent == &VAR_3 && !FUNC_1(VAR_5->parent, VAR_0))
  return VAR_2;

 FUNC_4(VAR_5);

 return VAR_1;
}

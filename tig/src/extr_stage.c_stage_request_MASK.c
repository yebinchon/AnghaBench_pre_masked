
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct view {scalar_t__ parent; TYPE_2__* env; int line; } ;
struct line {int type; } ;
typedef enum request { ____Placeholder_request } request ;
struct TYPE_5__ {int * name; } ;
struct TYPE_7__ {char status; TYPE_1__ new; } ;
struct TYPE_6__ {int goto_lineno; int * ref; int file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;


 int VAR_4 ;






 int VAR_5 ;
 int FUNC_0 (struct view*,int,struct line*) ;
 int FUNC_1 (struct view*,int,struct line*) ;
 int FUNC_2 (struct view*,struct line*) ;
 char* FUNC_3 (struct view*,struct line*) ;
 struct line* FUNC_4 (struct view*,struct line*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct view*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct view*,struct line*) ;
 int FUNC_10 (struct view*,TYPE_3__*,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (struct view*,struct line*) ;
 int FUNC_12 (struct view*,struct line*) ;
 TYPE_3__ VAR_7 ;
 int FUNC_13 (struct view*,struct line*,int) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ,char const*,int ) ;
 int FUNC_16 (char const*) ;

__attribute__((used)) static enum request
FUNC_17(struct view *VAR_8, enum request VAR_9, struct line *VAR_10)
{
 switch (VAR_9) {
 case 129:
  if (!FUNC_13(VAR_8, VAR_10, 0))
   return VAR_4;
  break;

 case 130:
  if (!FUNC_11(VAR_8, VAR_10))
   return VAR_4;
  break;

 case 131:
  if (VAR_6 == VAR_3 ||
      VAR_7.status == 'A') {
   FUNC_8("Staging single lines is not supported for new files");
   return VAR_4;
  }
  if (VAR_10->type != VAR_2 && VAR_10->type != VAR_0) {
   FUNC_8("Please select a change to stage");
   return VAR_4;
  }
  if (FUNC_9(VAR_8, VAR_10)) {
   FUNC_8("Staging is not supported for wrapped lines");
   return VAR_4;
  }
  if (!FUNC_13(VAR_8, VAR_10, 1))
   return VAR_4;
  break;


 case 132:
  if (VAR_6 == VAR_3 ||
      !(VAR_10 = FUNC_4(VAR_8, VAR_10, VAR_1))) {
   FUNC_8("No chunks to split in sight");
   return VAR_4;
  }
  FUNC_12(VAR_8, VAR_10);
  return VAR_4;

 case 135:
  if (!VAR_7.new.name[0])
   return FUNC_0(VAR_8, VAR_9, VAR_10);

  if (VAR_7.status == 'D') {
   FUNC_8("File has been deleted.");
   return VAR_4;
  }

  if (VAR_6 == VAR_3) {
   FUNC_6(VAR_7.new.name, (VAR_10 - VAR_8->line) + 1);
  } else {
   FUNC_6(VAR_7.new.name, FUNC_2(VAR_8, VAR_10));
  }
  break;

 case 133:

  FUNC_5(1);
  break;

 case 128:
  if (VAR_6 == VAR_3) {
   FUNC_8("Nothing to blame here");
   return VAR_4;
  }

  if (VAR_7.new.name[0]) {
   FUNC_14(VAR_8->env->file, VAR_7.new.name);
  } else {
   const char *VAR_11 = FUNC_3(VAR_8, VAR_10);

   if (VAR_11)
    FUNC_15(VAR_8->env->file, VAR_11, FUNC_16(VAR_11));
  }

  VAR_8->env->ref[0] = 0;
  VAR_8->env->goto_lineno = FUNC_2(VAR_8, VAR_10);
  if (VAR_8->env->goto_lineno > 0)
   VAR_8->env->goto_lineno--;
  return VAR_9;

 case 134:
  return FUNC_1(VAR_8, VAR_9, VAR_10);

 default:
  return VAR_9;
 }



 if (VAR_8->parent && !FUNC_10(VAR_8, &VAR_7, VAR_6)) {
  VAR_6 = 0;
  return VAR_5;
 }

 FUNC_7(VAR_8);

 return VAR_4;
}

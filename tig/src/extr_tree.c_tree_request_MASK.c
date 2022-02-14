
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {int pos; TYPE_1__* env; int vid; } ;
struct tree_entry {int name; int id; } ;
struct line {int type; struct tree_entry* data; } ;
typedef enum request { ____Placeholder_request } request ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;
struct TYPE_2__ {scalar_t__* directory; int file; int ref; } ;




 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct view*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct view*,char const*,int *) ;
 int FUNC_6 (struct view*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 char* FUNC_10 (struct line*) ;
 int FUNC_11 (int ) ;
 int VAR_4 ;
 int FUNC_12 (struct view*) ;

__attribute__((used)) static enum request
FUNC_13(struct view *VAR_5, enum request VAR_6, struct line *VAR_7)
{
 enum open_flags VAR_8;
 struct tree_entry *VAR_9 = VAR_7->data;

 switch (VAR_6) {
 case 128:
  if (VAR_7->type != 133) {
   FUNC_7("Blame only supported for files");
   return VAR_2;
  }

  FUNC_9(VAR_5->env->ref, VAR_5->vid);
  return VAR_6;

 case 131:
  if (VAR_7->type != 133) {
   FUNC_7("Edit only supported for files");
  } else if (!FUNC_0(VAR_5->vid)) {
   FUNC_1(VAR_9->id, VAR_9->name, 0);
  } else {
   FUNC_3(VAR_5->env->file, 0);
  }
  return VAR_2;

 case 129:
 case 132:
  if (!*VAR_5->env->directory) {

   return VAR_3;
  }

  FUNC_4(&VAR_5->pos);
  FUNC_6(VAR_5);
  return VAR_2;

 case 130:
  break;

 default:
  return VAR_6;
 }


 if (!*VAR_5->env->directory)
  FUNC_8(&VAR_4);

 switch (VAR_7->type) {
 case 134:


  if (FUNC_11(VAR_9->name) && *VAR_5->env->directory) {
   FUNC_4(&VAR_5->pos);

  } else {
   const char *VAR_10 = FUNC_10(VAR_7);

   FUNC_5(VAR_5, VAR_10, &VAR_5->pos);
  }



  FUNC_6(VAR_5);
  break;

 case 133:
  VAR_8 = FUNC_12(VAR_5) ? VAR_1 : VAR_0;
  FUNC_2(VAR_5, VAR_8);
  break;

 default:
  return VAR_2;
 }

 return VAR_2;
}

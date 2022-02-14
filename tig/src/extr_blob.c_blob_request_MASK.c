
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {int line; int vid; TYPE_1__* env; struct blob_state* private; } ;
struct line {int dummy; } ;
struct blob_state {int file; int commit; } ;
typedef enum request { ____Placeholder_request } request ;
struct TYPE_2__ {struct line* goto_lineno; int ref; int file; } ;



 int VAR_0 ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct view*,int,struct line*) ;
 int FUNC_3 (struct view*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static enum request
FUNC_7(struct view *VAR_1, enum request VAR_2, struct line *VAR_3)
{
 struct blob_state *VAR_4 = VAR_1->private;

 switch (VAR_2) {
 case 129:
  if (!VAR_4->file) {
   FUNC_4("Cannot reload immutable blob");
  } else {
   FUNC_5(VAR_1->env->file, VAR_4->file, FUNC_6(VAR_4->file));
   FUNC_3(VAR_1);
  }
  return VAR_0;

 case 128:
  FUNC_5(VAR_1->env->ref, VAR_4->commit, FUNC_6(VAR_4->commit));
  VAR_1->env->goto_lineno = VAR_3 - VAR_1->line;
  return VAR_2;

 case 130:
  if (VAR_4->file)
   FUNC_1(VAR_4->file, (VAR_3 - VAR_1->line) + 1);
  else
   FUNC_0(VAR_1->vid, ((void*)0), (VAR_3 - VAR_1->line) + 1);
  return VAR_0;

 default:
  return FUNC_2(VAR_1, VAR_2, VAR_3);
 }
}

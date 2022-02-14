
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct view {TYPE_1__* env; int pos; struct view* prev; struct view* parent; struct grep_state* private; } ;
struct line {int dummy; } ;
struct grep_state {char const* last_file; } ;
struct grep_line {char const* file; int lineno; int * text; } ;
typedef enum request { ____Placeholder_request } request ;
struct TYPE_4__ {char const* exec_dir; } ;
struct TYPE_3__ {int goto_lineno; int * ref; int * blob; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;


 struct view VAR_3 ;
 int FUNC_0 (int *) ;
 struct grep_line* FUNC_1 (struct line*) ;
 int FUNC_2 (struct view*,struct view*,char const**,char const*,int) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (struct view*) ;
 TYPE_2__ VAR_4 ;
 int FUNC_5 (struct view*,int ) ;
 int FUNC_6 (struct view*) ;
 int FUNC_7 (struct view*) ;

__attribute__((used)) static enum request
FUNC_8(struct view *VAR_5, enum request VAR_6, struct line *VAR_7)
{
 struct grep_state *VAR_8 = VAR_5->private;
 struct grep_line *VAR_9 = FUNC_1(VAR_7);
 struct view *VAR_10 = &VAR_3;

 switch (VAR_6) {
 case 129:
  FUNC_4(VAR_5);
  return VAR_2;

 case 130:
  if (!*VAR_9->file)
   return VAR_2;
  if (VAR_10->parent == VAR_5 && VAR_10->prev == VAR_5 &&
      VAR_8->last_file == VAR_9->file && FUNC_7(VAR_10)) {
   if (*VAR_9->text) {
    FUNC_5(VAR_10, VAR_9->lineno);
    FUNC_6(VAR_10);
   }

  } else {
   const char *VAR_11[] = { VAR_4.exec_dir, VAR_9->file, ((void*)0) };

   FUNC_0(&VAR_10->pos);
   VAR_5->env->goto_lineno = VAR_9->lineno;
   VAR_5->env->blob[0] = 0;
   FUNC_2(VAR_5, VAR_10, VAR_11, VAR_4.exec_dir, VAR_1 | VAR_0);
  }
  VAR_8->last_file = VAR_9->file;
  return VAR_2;

 case 131:
  if (!*VAR_9->file)
   return VAR_6;
  FUNC_3(VAR_9->file, VAR_9->lineno + 1);
  return VAR_2;

 case 128:
  VAR_5->env->ref[0] = 0;
  VAR_5->env->goto_lineno = VAR_9->lineno;
  return VAR_6;

 default:
  return VAR_6;
 }
}

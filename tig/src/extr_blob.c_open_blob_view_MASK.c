
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {TYPE_1__* env; int pos; scalar_t__ lines; } ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;
struct TYPE_2__ {scalar_t__* blob; scalar_t__* file; int commit; } ;


 int VAR_0 ;
 struct view VAR_1 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (struct view*,struct view*,int) ;
 int FUNC_3 (scalar_t__*,char const*,int ) ;
 int FUNC_4 (char const*) ;

void
FUNC_5(struct view *VAR_2, enum open_flags VAR_3)
{
 struct view *VAR_4 = &VAR_1;
 bool VAR_5 = VAR_2 == VAR_4;
 bool VAR_6 = VAR_4->env->blob[0] || VAR_4->env->file[0];

 if (!VAR_5 && (VAR_4->lines || VAR_6)) {
  FUNC_2(VAR_2, VAR_4, VAR_3);

 } else {
  const char *VAR_7 = FUNC_1(VAR_4->env->commit);

  if (VAR_7) {
   FUNC_0(&VAR_4->pos);
   FUNC_3(VAR_4->env->file, VAR_7, FUNC_4(VAR_7));
   VAR_4->env->blob[0] = 0;
   FUNC_2(VAR_2, VAR_4, VAR_0);
  }
 }
}

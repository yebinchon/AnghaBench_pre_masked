
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view_state {int dummy; } ;
struct view {TYPE_1__* env; } ;
struct position {int dummy; } ;
struct TYPE_2__ {char* directory; } ;


 int FUNC_0 (struct position*) ;
 int FUNC_1 (int *) ;
 struct view_state* FUNC_2 (int *,struct position*,char**) ;
 int FUNC_3 (char*,size_t*,char*,char const*) ;
 size_t FUNC_4 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(struct view *VAR_1, const char *VAR_2, struct position *VAR_3)
{
 size_t VAR_4 = FUNC_4(VAR_1->env->directory);
 char *VAR_5 = VAR_1->env->directory + VAR_4;
 struct view_state *VAR_6 = FUNC_2(&VAR_0, VAR_3, &VAR_5);

 if (!VAR_6)
  return;

 if (!FUNC_3(VAR_1->env->directory, &VAR_4, "%s/", VAR_2)) {
  FUNC_1(((void*)0));
  return;
 }

 FUNC_0(VAR_3);
}

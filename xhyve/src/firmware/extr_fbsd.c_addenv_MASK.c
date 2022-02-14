
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env {char const* str; } ;


 int FUNC_0 (int *,struct env*,int ) ;
 int VAR_0 ;
 struct env* FUNC_1 (int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(const char *VAR_2)
{
 struct env *VAR_3;

 VAR_3 = FUNC_1(sizeof(struct env));
 VAR_3->str = VAR_2;
 FUNC_0(&VAR_0, VAR_3, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io {int dummy; } ;
struct app_external {int argv; int env; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct io*,char*,size_t,int) ;
 scalar_t__ FUNC_1 (struct io*,int ,char const*,int ,int ) ;

__attribute__((used)) static bool
FUNC_2(char *VAR_1, size_t VAR_2, struct app_external *VAR_3, const char *VAR_4)
{
 struct io VAR_5;
 return FUNC_1(&VAR_5, VAR_0, VAR_4, VAR_3->env, VAR_3->argv) && FUNC_0(&VAR_5, VAR_1, VAR_2, 0);

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_context {int dummy; } ;


 int FUNC_0 (struct format_context*,char const***,char const*) ;

__attribute__((used)) static bool
FUNC_1(struct format_context *VAR_0, const char ***VAR_1, const char *VAR_2[])
{
 int VAR_3;

 if (!VAR_2)
  return 1;

 for (VAR_3 = 0; VAR_2[VAR_3]; VAR_3++)
  if (!FUNC_0(VAR_0, VAR_1, VAR_2[VAR_3]))
   return 0;

 return VAR_2[VAR_3] == ((void*)0);
}

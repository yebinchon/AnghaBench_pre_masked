
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* remote; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (scalar_t__*,size_t*,char*,char const*) ;
 int FUNC_4 (scalar_t__*,char const*,size_t) ;
 size_t FUNC_5 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_1, const char *VAR_2, size_t VAR_3)
{
 if (!FUNC_2(VAR_1, ".remote")) {
  FUNC_4(VAR_0.remote, VAR_2, VAR_3);

 } else if (*VAR_0.remote && !FUNC_2(VAR_1, ".merge")) {
  size_t VAR_4 = FUNC_5(VAR_0.remote);

  if (!FUNC_1(VAR_2, "refs/heads/"))
   VAR_2 += FUNC_0("refs/heads/");

  if (!FUNC_3(VAR_0.remote, &VAR_4, "/%s", VAR_2))
   VAR_0.remote[0] = 0;
 }
}

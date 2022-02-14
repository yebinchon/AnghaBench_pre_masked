
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct encoding {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ FUNC_0 (struct encoding**,char const*,int) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static void
FUNC_2(struct encoding **VAR_2, const char *VAR_3, bool VAR_4)
{
 if (!FUNC_1(VAR_3, "utf-8") || !FUNC_1(VAR_3, "utf8"))
  return;
 if (FUNC_0(VAR_2, VAR_3, VAR_4) == VAR_0)
  VAR_1[0] = 0;
}

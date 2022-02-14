
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char const*,char const*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1, const char *VAR_2, char *VAR_3,
    char *VAR_4, boolean_t VAR_5)
{
 char VAR_6[VAR_0];

 FUNC_0(VAR_6, VAR_0, VAR_5 ? ",%s=\"%s\"" : ",%s=%s", VAR_1, VAR_2);

 if (VAR_3)
  FUNC_1(VAR_3, VAR_6, VAR_0);

 if (VAR_4)
  FUNC_1(VAR_4, VAR_6, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zed_strings_t ;
typedef int uint64_t ;


 int FUNC_0 (int ,int *,int *,char const*,char*,char const*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3(uint64_t VAR_0, zed_strings_t *VAR_1)
{
 const char *VAR_2[] = {
  "TZ",
  ((void*)0)
 };
 const char **VAR_3;
 const char *VAR_4;

 FUNC_1(VAR_1 != ((void*)0));

 for (VAR_3 = VAR_2; *VAR_3; VAR_3++) {
  if ((VAR_4 = FUNC_2(*VAR_3)))
   FUNC_0(VAR_0, VAR_1, ((void*)0), *VAR_3, "%s", VAR_4);
 }
}

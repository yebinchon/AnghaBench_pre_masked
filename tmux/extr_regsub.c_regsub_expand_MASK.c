
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_3__ {scalar_t__ rm_so; scalar_t__ rm_eo; } ;
typedef TYPE_1__ regmatch_t ;


 int FUNC_0 (char**,size_t*,char const*,scalar_t__,scalar_t__) ;
 char* FUNC_1 (char*,size_t) ;

__attribute__((used)) static void
FUNC_2(char **VAR_0, size_t *VAR_1, const char *VAR_2, const char *VAR_3,
    regmatch_t *VAR_4, u_int VAR_5)
{
 const char *VAR_6;
 u_int VAR_7;

 for (VAR_6 = VAR_2; *VAR_6 != '\0'; VAR_6++) {
  if (*VAR_6 == '\\') {
   VAR_6++;
   if (*VAR_6 >= '0' && *VAR_6 <= '9') {
    VAR_7 = *VAR_6 - '0';
    if (VAR_7 < VAR_5 && VAR_4[VAR_7].rm_so != VAR_4[VAR_7].rm_eo) {
     FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4[VAR_7].rm_so,
         VAR_4[VAR_7].rm_eo);
     continue;
    }
   }
  }
  *VAR_0 = FUNC_1(*VAR_0, (*VAR_1) + 2);
  (*VAR_0)[(*VAR_1)++] = *VAR_6;
 }
}

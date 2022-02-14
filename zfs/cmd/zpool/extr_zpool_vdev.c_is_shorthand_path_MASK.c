
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat64 {int dummy; } ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct stat64*,int ,int) ;
 scalar_t__ FUNC_1 (char*,struct stat64*) ;
 int FUNC_2 (char*,char const*,size_t) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char const*,char*,size_t) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_1, char *VAR_2, size_t VAR_3,
    struct stat64 *VAR_4, boolean_t *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_3);
 if (VAR_6 == 0) {
  *VAR_5 = FUNC_3(VAR_2);
  if (*VAR_5 || (FUNC_1(VAR_2, VAR_4) == 0))
   return (0);
 }

 FUNC_2(VAR_2, VAR_1, VAR_3);
 FUNC_0(VAR_4, 0, sizeof (*VAR_4));
 *VAR_5 = VAR_0;

 return (VAR_6);
}

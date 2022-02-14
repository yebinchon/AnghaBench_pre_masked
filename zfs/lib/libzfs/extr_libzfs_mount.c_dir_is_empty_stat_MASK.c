
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; int st_mode; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,struct stat*) ;

__attribute__((used)) static boolean_t
FUNC_2(const char *VAR_2)
{
 struct stat VAR_3;





 if (FUNC_1(VAR_2, &VAR_3) < 0 || !FUNC_0(VAR_3.st_mode)) {
  return (VAR_1);
 }





 if (VAR_3.st_size > 2) {
  return (VAR_0);
 }

 return (VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;


 int FUNC_0 (int *,struct tm*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tm*) ;

__attribute__((used)) static time_t
FUNC_3(int VAR_0)
{
 struct tm VAR_1;
 time_t VAR_2;

 FUNC_1(&VAR_2);
 if (VAR_0) {
  FUNC_0(&VAR_2, &VAR_1);
  VAR_2 = FUNC_2(&VAR_1);
 }
 return (VAR_2);
}

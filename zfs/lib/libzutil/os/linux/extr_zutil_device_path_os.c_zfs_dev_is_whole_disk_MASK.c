
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dk_gpt {int dummy; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,struct dk_gpt**) ;
 int FUNC_2 (struct dk_gpt*) ;
 int FUNC_3 (char const*,int) ;

boolean_t
FUNC_4(const char *VAR_5)
{
 struct dk_gpt *VAR_6;
 int VAR_7;

 if ((VAR_7 = FUNC_3(VAR_5, VAR_4 | VAR_3)) < 0)
  return (VAR_0);

 if (FUNC_1(VAR_7, VAR_2, &VAR_6) != 0) {
  (void) FUNC_0(VAR_7);
  return (VAR_0);
 }

 FUNC_2(VAR_6);
 (void) FUNC_0(VAR_7);

 return (VAR_1);
}

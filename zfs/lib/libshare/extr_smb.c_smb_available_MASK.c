
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,struct stat*) ;

__attribute__((used)) static boolean_t
FUNC_3(void)
{
 struct stat VAR_5;

 if (FUNC_2(VAR_4, &VAR_5) != 0 ||
     !FUNC_0(VAR_5.st_mode))
  return (VAR_0);

 if (FUNC_1(VAR_3, VAR_2) != 0)
  return (VAR_0);

 return (VAR_1);
}

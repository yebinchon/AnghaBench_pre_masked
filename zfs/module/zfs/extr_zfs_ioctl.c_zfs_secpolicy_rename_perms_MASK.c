
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int parentname ;
typedef int cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (char const*,int ,int *) ;

int
FUNC_2(const char *VAR_4, const char *VAR_5, cred_t *VAR_6)
{
 char VAR_7[VAR_3];
 int VAR_8;

 if ((VAR_8 = FUNC_1(VAR_4,
     VAR_2, VAR_6)) != 0)
  return (VAR_8);

 if ((VAR_8 = FUNC_1(VAR_4,
     VAR_1, VAR_6)) != 0)
  return (VAR_8);

 if ((VAR_8 = FUNC_0(VAR_5, VAR_7,
     sizeof (VAR_7))) != 0)
  return (VAR_8);

 if ((VAR_8 = FUNC_1(VAR_7,
     VAR_0, VAR_6)) != 0)
  return (VAR_8);

 if ((VAR_8 = FUNC_1(VAR_7,
     VAR_1, VAR_6)) != 0)
  return (VAR_8);

 return (VAR_8);
}

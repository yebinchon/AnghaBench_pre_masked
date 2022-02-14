
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,char const*,int) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ) ;

int
FUNC_4(const char *VAR_4, uint_t VAR_5)
{
 const char *VAR_6 = VAR_4 + FUNC_2(VAR_4);
 const char *VAR_7;

 if (VAR_5 & ~(VAR_2 | VAR_3)) {
  FUNC_3(VAR_1);
  return (-1);
 }

 if (!(VAR_5 & VAR_3)) {
  if (!FUNC_0(VAR_4, VAR_6, VAR_5))
   goto bad;
  return (0);
 }

 while ((VAR_7 = FUNC_1(VAR_4, '/')) != ((void*)0)) {
  if (!FUNC_0(VAR_4, VAR_7 - 1, VAR_5))
   goto bad;
  VAR_4 = VAR_7 + 1;
 }
 if (!FUNC_0(VAR_4, VAR_6, VAR_5))
  goto bad;

 return (0);

bad:
 FUNC_3(VAR_0);
 return (-1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_1, void *VAR_2, int VAR_3)
{
 char *VAR_4 = VAR_2;
 int VAR_5;
 int VAR_6 = VAR_3;

 do {
  VAR_5 = FUNC_0(VAR_1, VAR_4, VAR_6);
  VAR_4 += VAR_5;
  VAR_6 -= VAR_5;
 } while (VAR_5 > 0);

 if (VAR_5 < 0 || VAR_6 != 0)
  return (VAR_0);

 return (0);
}

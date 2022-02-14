
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;


 scalar_t__ FUNC_0 (char*,char) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static inline char *
FUNC_3(char *VAR_0, char VAR_1, Size *VAR_2)
{
 char *VAR_3 = (char *) FUNC_0(VAR_0, VAR_1);
 if (VAR_3 != VAR_0)
 {
  Size VAR_4 = VAR_3 - VAR_0;
  FUNC_1(VAR_4, *VAR_2);
  FUNC_2(VAR_0, 0, VAR_4);
  *VAR_2 = *VAR_2 - VAR_4;
 }
 return VAR_3;
}

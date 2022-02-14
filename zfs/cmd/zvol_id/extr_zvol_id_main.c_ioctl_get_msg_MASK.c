
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (char*,int,char*,char*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 char VAR_5[VAR_1];

 VAR_4 = FUNC_0(VAR_3, VAR_0, VAR_5);
 if (VAR_4 < 0) {
  return (VAR_4);
 }

 FUNC_1(VAR_2, VAR_1, "%s", VAR_5);
 return (VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,int,int ,char*,size_t) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static bool
FUNC_4(FILE *VAR_1, WINDOW *VAR_2, int VAR_3, char *VAR_4, size_t VAR_5)
{
 int VAR_6 = FUNC_1(VAR_2, VAR_3, 0, VAR_4, VAR_5);
 const char *VAR_7 = VAR_6 == VAR_0 ? "" : FUNC_2(VAR_4);

 return VAR_6 == VAR_0 ? 0 : FUNC_0(VAR_1, "%s\n", VAR_7) == FUNC_3(VAR_7) + 1;
}

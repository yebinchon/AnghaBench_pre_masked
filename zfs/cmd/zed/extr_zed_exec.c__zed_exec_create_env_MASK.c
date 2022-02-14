
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zed_strings_t ;


 int FUNC_0 (int) ;
 char* FUNC_1 (int,int) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;

__attribute__((used)) static char **
FUNC_7(zed_strings_t *VAR_0)
{
 int VAR_1;
 int VAR_2;
 char *VAR_3;
 char **VAR_4;
 char *VAR_5;
 const char *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_1 = FUNC_4(VAR_0) + 1;
 VAR_2 = VAR_1 * sizeof (char *);
 for (VAR_6 = FUNC_5(VAR_0); VAR_6; VAR_6 = FUNC_6(VAR_0))
  VAR_2 += FUNC_3(VAR_6) + 1;

 VAR_3 = FUNC_1(1, VAR_2);
 if (!VAR_3)
  return (((void*)0));

 VAR_4 = (char **)VAR_3;
 VAR_5 = VAR_3 + (VAR_1 * sizeof (char *));
 VAR_7 = 0;
 for (VAR_6 = FUNC_5(VAR_0); VAR_6; VAR_6 = FUNC_6(VAR_0)) {
  VAR_4[VAR_7] = VAR_5;
  VAR_8 = FUNC_3(VAR_6) + 1;
  FUNC_2(VAR_5, VAR_6, VAR_8);
  VAR_5 += VAR_8;
  VAR_7++;
 }
 VAR_4[VAR_7] = ((void*)0);
 FUNC_0(VAR_3 + VAR_2 == VAR_5);
 return ((char **)VAR_3);
}

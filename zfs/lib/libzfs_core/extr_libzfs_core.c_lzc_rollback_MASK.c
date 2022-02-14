
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int * FUNC_0 () ;
 char* FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,char const*,int *,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char const*,int) ;

int
FUNC_5(const char *VAR_1, char *VAR_2, int VAR_3)
{
 nvlist_t *VAR_4;
 nvlist_t *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0();
 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_4, &VAR_5);
 FUNC_3(VAR_4);
 if (VAR_6 == 0 && VAR_2 != ((void*)0)) {
  const char *VAR_7 = FUNC_1(VAR_5, "target");
  (void) FUNC_4(VAR_2, VAR_7, VAR_3);
 }
 FUNC_3(VAR_5);

 return (VAR_6);
}

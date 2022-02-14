
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvlist_t ;
typedef int fs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,char const*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,char const*,int *,int **) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char const*,int) ;

int
FUNC_8(const char *VAR_3, const char *VAR_4,
    uint64_t *VAR_5)
{
 nvlist_t *VAR_6;
 nvlist_t *VAR_7;
 int VAR_8;
 char VAR_9[VAR_2];
 char *VAR_10;


 (void) FUNC_7(VAR_9, VAR_3, sizeof (VAR_9));
 VAR_10 = FUNC_6(VAR_9, '@');
 if (VAR_10 == ((void*)0))
  return (VAR_0);
 *VAR_10 = '\0';

 VAR_6 = FUNC_1();
 FUNC_0(VAR_6, "firstsnap", VAR_3);

 VAR_8 = FUNC_4(VAR_1, VAR_4, VAR_6, &VAR_7);
 FUNC_5(VAR_6);
 if (VAR_8 == 0)
  *VAR_5 = FUNC_3(VAR_7, "used");
 FUNC_2(VAR_7);

 return (VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int fsname ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,int *) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_2, nvlist_t *VAR_3,
    nvlist_t *VAR_4)
{
 char VAR_5[VAR_1];
 char *VAR_6;

 VAR_6 = FUNC_2(VAR_2, '#');
 if (VAR_6 == ((void*)0))
  return (FUNC_0(VAR_0));
 VAR_6++;

 (void) FUNC_3(VAR_5, VAR_2, sizeof (VAR_5));
 *(FUNC_2(VAR_5, '#')) = '\0';

 return (FUNC_1(VAR_5, VAR_6, VAR_4));
}

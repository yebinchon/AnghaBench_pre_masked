
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zed_strings_t ;
typedef size_t uint_t ;
typedef int uint64_t ;
typedef int nvpair_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,int *,char const*,char const*,char*,char*) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,char***,size_t*) ;
 int FUNC_6 (char*,int,char*,char*) ;

__attribute__((used)) static int
FUNC_7(uint64_t VAR_2, zed_strings_t *VAR_3,
    const char *VAR_4, nvpair_t *VAR_5)
{
 char VAR_6[VAR_1];
 int VAR_7 = sizeof (VAR_6);
 const char *VAR_8;
 char **VAR_9;
 uint_t VAR_10;
 uint_t VAR_11;
 char *VAR_12;
 int VAR_13;

 FUNC_2((VAR_5 != ((void*)0)) && (FUNC_4(VAR_5) == VAR_0));

 VAR_8 = FUNC_3(VAR_5);
 (void) FUNC_5(VAR_5, &VAR_9, &VAR_10);
 for (VAR_11 = 0, VAR_12 = VAR_6; (VAR_11 < VAR_10) && (VAR_7 > 0); VAR_11++) {
  VAR_13 = FUNC_6(VAR_12, VAR_7, "%s ", VAR_9[VAR_11] ? VAR_9[VAR_11] : "<NULL>");
  if ((VAR_13 < 0) || (VAR_13 >= VAR_7))
   return (FUNC_0(VAR_2, VAR_8));
  VAR_12 += VAR_13;
  VAR_7 -= VAR_13;
 }
 if (VAR_10 > 0)
  *--VAR_12 = '\0';

 return (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_8, "%s", VAR_6));
}

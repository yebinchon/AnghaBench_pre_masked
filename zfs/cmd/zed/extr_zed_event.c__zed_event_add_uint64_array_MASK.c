
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zed_strings_t ;
typedef size_t uint_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef int nvpair_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,char const*) ;
 int FUNC_1 (scalar_t__,int *,char const*,char const*,char*,char*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (int) ;
 char* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__**,size_t*) ;
 int FUNC_7 (char*,int,char const*,int ) ;

__attribute__((used)) static int
FUNC_8(uint64_t VAR_2, zed_strings_t *VAR_3,
    const char *VAR_4, nvpair_t *VAR_5)
{
 char VAR_6[VAR_1];
 int VAR_7 = sizeof (VAR_6);
 const char *VAR_8;
 const char *VAR_9;
 uint64_t *VAR_10;
 uint_t VAR_11;
 uint_t VAR_12;
 char *VAR_13;
 int VAR_14;

 FUNC_3((VAR_5 != ((void*)0)) && (FUNC_5(VAR_5) == VAR_0));

 VAR_8 = FUNC_4(VAR_5);
 VAR_9 = FUNC_2(VAR_8) ? "0x%.16llX " : "%llu ";
 (void) FUNC_6(VAR_5, &VAR_10, &VAR_11);
 for (VAR_12 = 0, VAR_13 = VAR_6; (VAR_12 < VAR_11) && (VAR_7 > 0); VAR_12++) {
  VAR_14 = FUNC_7(VAR_13, VAR_7, VAR_9, (u_longlong_t)VAR_10[VAR_12]);
  if ((VAR_14 < 0) || (VAR_14 >= VAR_7))
   return (FUNC_0(VAR_2, VAR_8));
  VAR_13 += VAR_14;
  VAR_7 -= VAR_14;
 }
 if (VAR_11 > 0)
  *--VAR_13 = '\0';

 return (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_8, "%s", VAR_6));
}

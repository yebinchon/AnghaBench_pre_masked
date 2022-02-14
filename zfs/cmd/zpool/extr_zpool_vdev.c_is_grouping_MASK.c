
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;
 char const* VAR_5 ;
 char const* VAR_6 ;
 char const* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 long FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static const char *
FUNC_3(const char *VAR_9, int *VAR_10, int *VAR_11)
{
 if (FUNC_1(VAR_9, "raidz", 5) == 0) {
  const char *VAR_12 = VAR_9 + 5;
  char *VAR_13;
  long VAR_14;

  if (*VAR_12 == '\0') {
   VAR_14 = 1;
  } else if (*VAR_12 == '0') {
   return (((void*)0));
  } else {
   VAR_8 = 0;
   VAR_14 = FUNC_2(VAR_12, &VAR_13, 10);
   if (VAR_8 != 0 || VAR_14 < 1 || VAR_14 >= 255 ||
       *VAR_13 != '\0')
    return (((void*)0));
  }

  if (VAR_10 != ((void*)0))
   *VAR_10 = VAR_14 + 1;
  if (VAR_11 != ((void*)0))
   *VAR_11 = 255;
  return (VAR_6);
 }

 if (VAR_11 != ((void*)0))
  *VAR_11 = VAR_0;

 if (FUNC_0(VAR_9, "mirror") == 0) {
  if (VAR_10 != ((void*)0))
   *VAR_10 = 2;
  return (VAR_5);
 }

 if (FUNC_0(VAR_9, "spare") == 0) {
  if (VAR_10 != ((void*)0))
   *VAR_10 = 1;
  return (VAR_7);
 }

 if (FUNC_0(VAR_9, "log") == 0) {
  if (VAR_10 != ((void*)0))
   *VAR_10 = 1;
  return (VAR_4);
 }

 if (FUNC_0(VAR_9, VAR_2) == 0 ||
     FUNC_0(VAR_9, VAR_1) == 0) {
  if (VAR_10 != ((void*)0))
   *VAR_10 = 1;
  return (VAR_9);
 }

 if (FUNC_0(VAR_9, "cache") == 0) {
  if (VAR_10 != ((void*)0))
   *VAR_10 = 1;
  return (VAR_3);
 }

 return (((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* nfs_shareopt_callback_t ) (char*,char*,void*) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_2,
    nfs_shareopt_callback_t VAR_3, void *VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 int VAR_9, VAR_10;

 if (VAR_2 == ((void*)0))
  return (VAR_1);

 VAR_5 = FUNC_2(VAR_2);

 if (VAR_5 == ((void*)0))
  return (VAR_0);

 VAR_6 = VAR_5;
 VAR_9 = 0;

 while (1) {
  VAR_7 = VAR_6;

  while (*VAR_7 != ',' && *VAR_7 != '\0')
   VAR_7++;

  if (*VAR_7 == '\0')
   VAR_9 = 1;

  *VAR_7 = '\0';

  if (VAR_7 > VAR_6) {
   VAR_8 = FUNC_1(VAR_6, '=');

   if (VAR_8 != ((void*)0)) {
    *VAR_8 = '\0';
    VAR_8++;
   }

   VAR_10 = VAR_3(VAR_6, VAR_8, VAR_4);

   if (VAR_10 != VAR_1) {
    FUNC_0(VAR_5);
    return (VAR_10);
   }
  }

  VAR_6 = VAR_7 + 1;

  if (VAR_9)
   break;
 }

 FUNC_0(VAR_5);

 return (0);
}

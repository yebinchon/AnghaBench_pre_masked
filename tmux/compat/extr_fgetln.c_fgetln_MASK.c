
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int,size_t) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (char*,int,size_t) ;

char *
FUNC_4(FILE *VAR_4, size_t *VAR_5)
{
 static char *VAR_6 = ((void*)0);
 static size_t VAR_7 = 0;
 size_t VAR_8 = 0;
 char *VAR_9;
 int VAR_10, VAR_11;

 if (!VAR_4 || !VAR_5) {
  VAR_3 = VAR_1;
  return ((void*)0);
 }
 if (!VAR_6) {
  if (!(VAR_6 = FUNC_0(1, VAR_0)))
   return ((void*)0);
  VAR_7 = VAR_0;
 }
 while ((VAR_10 = FUNC_2(VAR_4)) != VAR_2) {
  VAR_6[VAR_8++] = VAR_10;
  if (VAR_8 == VAR_7) {
   if (!(VAR_9 = FUNC_3(VAR_6, 2, VAR_7))) {
    VAR_11 = VAR_3;
    FUNC_1(VAR_6);
    VAR_3 = VAR_11;
    VAR_6 = ((void*)0), VAR_7 = 0;
    return ((void*)0);
   }
   VAR_6 = VAR_9, VAR_7 = 2 * VAR_7;
  }
  if (VAR_10 == '\n')
   break;
 }
 return (*VAR_5 = VAR_8) ? VAR_6 : ((void*)0);
}

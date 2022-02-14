
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned long*,unsigned long*,int) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int ) ;

__attribute__((used)) static int
FUNC_5(char *VAR_4, unsigned long *VAR_5, unsigned long *VAR_6,
    int VAR_7, char *VAR_8, char *VAR_9)
{
 int VAR_10 = 0, VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
 char *VAR_14, *VAR_15, *VAR_16;

 VAR_16 = FUNC_3(VAR_4);
 if (VAR_16 == ((void*)0))
  return (VAR_0);

 *VAR_5 = 0;
 VAR_15 = ((void*)0);







 for (VAR_14 = VAR_16; VAR_14 && !VAR_12; VAR_14++) {
  if (VAR_15 == ((void*)0))
   VAR_15 = VAR_14;

  if (*VAR_14 == '"')
   VAR_11 = !VAR_11;

  if (VAR_11)
   continue;

  if (*VAR_14 == '\0')
   VAR_12 = 1;

  if ((*VAR_14 == ',') || (*VAR_14 == '\0')) {
   *VAR_14 = '\0';

   VAR_10 = FUNC_1(VAR_15, VAR_5, VAR_6, VAR_7);
   if (VAR_10) {
    FUNC_2(VAR_8, VAR_15);
    goto out;

   }

   if (!(*VAR_5 & VAR_2) &&
       !(*VAR_6 & VAR_3)) {
    if (VAR_13 > 0)
     FUNC_4(VAR_9, ",", VAR_1);

    FUNC_4(VAR_9, VAR_15, VAR_1);
    VAR_13++;
   }

   VAR_15 = ((void*)0);
  }
 }

out:
 FUNC_0(VAR_16);
 return (VAR_10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const***,char const*) ;
 scalar_t__ FUNC_1 (char const*,int *) ;
 int FUNC_2 (char const***,char*,char*,char const**) ;
 char const** VAR_0 ;
 char const** VAR_1 ;
 char const** VAR_2 ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const**) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_3[], bool VAR_4)
{
 const char **VAR_5 = ((void*)0);
 int VAR_6, VAR_7;

 FUNC_4(VAR_3);

 if (!VAR_4) {
  VAR_0 = VAR_3;
  return;
 }




 for (VAR_6 = VAR_7 = 0; VAR_3[VAR_6]; VAR_6++) {
  const char *VAR_8 = VAR_3[VAR_6];

  if (!FUNC_3(VAR_8, "--"))
   while (VAR_3[VAR_6])
    VAR_3[VAR_7++] = VAR_3[VAR_6++];
  else if (FUNC_1(VAR_8, ((void*)0)))
   FUNC_0(&VAR_2, VAR_8);
  else
   VAR_3[VAR_7++] = VAR_8;
 }

 VAR_3[VAR_7] = ((void*)0);

 FUNC_2(&VAR_1, "--no-revs", "--no-flags", VAR_3);
 FUNC_2(&VAR_5, "--flags", "--no-revs", VAR_3);

 if (VAR_5) {
  for (VAR_6 = VAR_7 = 0; VAR_5 && VAR_5[VAR_6]; VAR_6++) {
   const char *VAR_9 = VAR_5[VAR_6];

   if (FUNC_1(VAR_9, ((void*)0)))
    FUNC_0(&VAR_2, VAR_9);
   else
    VAR_5[VAR_7++] = VAR_9;
  }

  VAR_5[VAR_7] = ((void*)0);

  VAR_0 = VAR_5;
 }

 FUNC_2(&VAR_2, "--symbolic", "--revs-only", VAR_3);
}

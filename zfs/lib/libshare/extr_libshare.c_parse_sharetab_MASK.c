
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sa_handle_impl_t ;
typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int *,char*,char*,char*,char*,char*,int *,int ) ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(sa_handle_impl_t VAR_2)
{
 FILE *VAR_3;
 char VAR_4[512];
 char *VAR_5, *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10;

 VAR_3 = FUNC_2(VAR_1, "r");

 if (VAR_3 == ((void*)0))
  return;

 while (FUNC_1(VAR_4, sizeof (VAR_4), VAR_3) != ((void*)0)) {
  VAR_5 = VAR_4 + FUNC_6(VAR_4) - 1;

  while (VAR_5 >= VAR_4) {
   if (*VAR_5 != '\r' && *VAR_5 != '\n')
    break;

   *VAR_5 = '\0';
   VAR_5--;
  }

  VAR_6 = VAR_4;

  if ((VAR_7 = FUNC_4(VAR_6, '\t')) == ((void*)0))
   continue;

  *VAR_7 = '\0';
  VAR_7++;

  if ((VAR_8 = FUNC_4(VAR_7, '\t')) == ((void*)0))
   continue;

  *VAR_8 = '\0';
  VAR_8++;

  if ((VAR_9 = FUNC_4(VAR_8, '\t')) == ((void*)0))
   continue;

  *VAR_9 = '\0';
  VAR_9++;

  if ((VAR_10 = FUNC_4(VAR_8, '\t')) != ((void*)0)) {
   *VAR_10 = '\0';
   VAR_10++;
  }

  if (FUNC_5(VAR_7, "-") == 0)
   VAR_7 = ((void*)0);

  (void) FUNC_3(VAR_2, ((void*)0), VAR_6, VAR_7,
      VAR_8, VAR_9, VAR_10, ((void*)0), VAR_0);
 }

 FUNC_0(VAR_3);
}

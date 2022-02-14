
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct format_tree {int dummy; } ;
struct format_modifier {int dummy; } ;


 int FUNC_0 (struct format_modifier**,int *,char const*,int,char**,int) ;
 char* FUNC_1 (struct format_tree*,char*) ;
 int FUNC_2 (struct format_modifier*,int ) ;
 scalar_t__ FUNC_3 (char const) ;
 char* FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const) ;
 scalar_t__ FUNC_7 (char*,char const*,int) ;
 int * FUNC_8 (char*,char const) ;
 char** FUNC_9 (int,int) ;
 char** FUNC_10 (char**,int,int) ;
 char* FUNC_11 (char const*,int) ;

__attribute__((used)) static struct format_modifier *
FUNC_12(struct format_tree *VAR_0, const char **VAR_1, u_int *VAR_2)
{
 const char *VAR_3 = *VAR_1, *VAR_4;
 struct format_modifier *VAR_5 = ((void*)0);
 char VAR_6, VAR_7[] = "X;:", **VAR_8, *VAR_9;
 int VAR_10;
 *VAR_2 = 0;

 while (*VAR_3 != '\0' && *VAR_3 != ':') {

  if (*VAR_3 == ';')
   VAR_3++;


  if (FUNC_8("lbdtqETSWP<>", VAR_3[0]) != ((void*)0) &&
      FUNC_3(VAR_3[1])) {
   FUNC_0(&VAR_5, VAR_2, VAR_3, 1, ((void*)0), 0);
   VAR_3++;
   continue;
  }


  if ((FUNC_7("||", VAR_3, 2) == 0 ||
      FUNC_7("&&", VAR_3, 2) == 0 ||
      FUNC_7("!=", VAR_3, 2) == 0 ||
      FUNC_7("==", VAR_3, 2) == 0 ||
      FUNC_7("<=", VAR_3, 2) == 0 ||
      FUNC_7(">=", VAR_3, 2) == 0) &&
      FUNC_3(VAR_3[2])) {
   FUNC_0(&VAR_5, VAR_2, VAR_3, 2, ((void*)0), 0);
   VAR_3 += 2;
   continue;
  }


  if (FUNC_8("mCs=", VAR_3[0]) == ((void*)0))
   break;
  VAR_6 = VAR_3[0];


  if (FUNC_3(VAR_3[1])) {
   FUNC_0(&VAR_5, VAR_2, VAR_3, 1, ((void*)0), 0);
   VAR_3++;
   continue;
  }
  VAR_8 = ((void*)0);
  VAR_10 = 0;


  if (!FUNC_6(VAR_3[1]) || VAR_3[1] == '-') {
   VAR_4 = FUNC_4(VAR_3 + 1, ":;");
   if (VAR_4 == ((void*)0))
    break;

   VAR_8 = FUNC_9(1, sizeof *VAR_8);
   VAR_9 = FUNC_11(VAR_3 + 1, VAR_4 - (VAR_3 + 1));
   VAR_8[0] = FUNC_1(VAR_0, VAR_9);
   FUNC_5(VAR_9);
   VAR_10 = 1;

   FUNC_0(&VAR_5, VAR_2, &VAR_6, 1, VAR_8, VAR_10);
   VAR_3 = VAR_4;
   continue;
  }


  VAR_7[0] = VAR_3[1];
  VAR_3++;
  do {
   if (VAR_3[0] == VAR_7[0] && FUNC_3(VAR_3[1])) {
    VAR_3++;
    break;
   }
   VAR_4 = FUNC_4(VAR_3 + 1, VAR_7);
   if (VAR_4 == ((void*)0))
    break;
   VAR_3++;

   VAR_8 = FUNC_10 (VAR_8, VAR_10 + 1, sizeof *VAR_8);
   VAR_9 = FUNC_11(VAR_3, VAR_4 - VAR_3);
   VAR_8[VAR_10++] = FUNC_1(VAR_0, VAR_9);
   FUNC_5(VAR_9);

   VAR_3 = VAR_4;
  } while (!FUNC_3(VAR_3[0]));
  FUNC_0(&VAR_5, VAR_2, &VAR_6, 1, VAR_8, VAR_10);
 }
 if (*VAR_3 != ':') {
  FUNC_2(VAR_5, *VAR_2);
  *VAR_2 = 0;
  return (((void*)0));
 }
 *VAR_1 = VAR_3 + 1;
 return VAR_5;
}

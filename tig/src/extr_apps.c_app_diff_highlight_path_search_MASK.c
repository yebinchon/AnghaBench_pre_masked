
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int exec_path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 scalar_t__ FUNC_0 (char*,int) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,size_t,char const*,char*,int ) ;
 scalar_t__ FUNC_3 (char const*,char) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,char*,char const*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 int FUNC_6 (char*,char const*,int ) ;
 int FUNC_7 (char*,size_t,char const*,int ) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static bool
FUNC_9(char *VAR_5, size_t VAR_6, const char *VAR_7)
{
 if (!VAR_7 || !*VAR_7)
  return 0;

 if (FUNC_3(VAR_7, '/')) {

  FUNC_7(VAR_5, VAR_6, VAR_7, FUNC_8(VAR_7));
  return 1;
 }

 const char *VAR_8 = FUNC_1("PATH");
 char VAR_9[VAR_1];
 char VAR_10[VAR_2];

 if (!VAR_8 || !*VAR_8)
  VAR_8 = VAR_4;

 if (FUNC_0(VAR_10, sizeof(VAR_10)))
  FUNC_5(VAR_9, "%s:%s/%s:%s/%s:%s/%s:%s/%s",
         VAR_8,
         VAR_10, "../../share/git-core/contrib/diff-highlight",
         VAR_10, "../share/git-core/contrib/diff-highlight",
         VAR_10, "../../share/git/contrib/diff-highlight",
         VAR_10, "../share/git/contrib/diff-highlight");
 else
  FUNC_6(VAR_9, VAR_8, FUNC_8(VAR_8));

 if (!FUNC_2(VAR_5, VAR_6, VAR_7, VAR_9, VAR_3)
     && !FUNC_4(VAR_7, "diff-highlight")
     && !FUNC_2(VAR_5, VAR_6, "diff-highlight.perl", VAR_9, VAR_0))
  return 0;

 return 1;
}

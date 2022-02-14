
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char const**,int) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int ,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (char*) ;

void
FUNC_8(const char *VAR_1, const char *VAR_2, unsigned int VAR_3)
{
 const char *VAR_4[] = { "git", "cat-file", "blob", VAR_1, ((void*)0) };
 char VAR_5[VAR_0];
 int VAR_6;

 if (!VAR_2)
  VAR_2 = "unknown";

 if (!FUNC_5(VAR_5, "%s/tigblob.XXXXXX.%s", FUNC_0(), VAR_2)) {
  FUNC_4("Temporary file name is too long");
  return;
 }

 VAR_6 = FUNC_2(VAR_5, FUNC_6(VAR_2) + 1);

 if (VAR_6 == -1)
  FUNC_4("Failed to create temporary file");
 else if (!FUNC_1(VAR_4, VAR_6))
  FUNC_4("Failed to save blob data to file");
 else
  FUNC_3(VAR_5, VAR_3);
 if (VAR_6 != -1)
  FUNC_7(VAR_5);
}

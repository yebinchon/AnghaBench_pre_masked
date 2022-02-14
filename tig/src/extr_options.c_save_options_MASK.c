
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,char*) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (char const*,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

enum status_code
FUNC_9(const char *VAR_5)
{
 int VAR_6 = FUNC_4(VAR_5, VAR_2 | VAR_0 | VAR_1, 0666);
 FILE *VAR_7 = VAR_6 != -1 ? FUNC_2(VAR_6, "w") : ((void*)0);
 enum status_code VAR_8 = VAR_3;

 if (!VAR_7)
  return FUNC_0("%s", FUNC_8(VAR_4));

 if (!FUNC_3(VAR_7, "%s", "# Saved by Tig\n")
     || !FUNC_7(VAR_7)
     || !FUNC_6(VAR_7)
     || !FUNC_5(VAR_7))
  VAR_8 = FUNC_0("Write returned an error");

 FUNC_1(VAR_7);
 return VAR_8;
}

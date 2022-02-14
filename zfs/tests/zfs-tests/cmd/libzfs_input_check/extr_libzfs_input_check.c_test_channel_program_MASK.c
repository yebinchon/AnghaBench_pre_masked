
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (int *,char*,char* const*,int) ;
 int FUNC_5 (int *,char*,int) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(const char *VAR_2)
{
 const char *VAR_3 =
     "arg = ...\n"
     "argv = arg[\"argv\"]\n"
     "return argv[1]";
 char *const VAR_4[1] = { "Hello World!" };
 nvlist_t *VAR_5 = FUNC_6();
 nvlist_t *VAR_6 = FUNC_6();
 nvlist_t *VAR_7 = FUNC_6();

 FUNC_3(VAR_5, "program", VAR_3);
 FUNC_4(VAR_7, "argv", VAR_4, 1);
 FUNC_2(VAR_5, "arg", VAR_7);

 FUNC_1(VAR_6, "sync", VAR_0);
 FUNC_5(VAR_6, "instrlimit", 1000 * 1000);
 FUNC_5(VAR_6, "memlimit", 8192 * 1024);

 FUNC_0(VAR_1, VAR_2, VAR_5, VAR_6, 0);

 FUNC_7(VAR_7);
 FUNC_7(VAR_6);
 FUNC_7(VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *,int ,int *) ;
 int * FUNC_6 (int ,char*) ;
 int * FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (char*) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static int
FUNC_14(void)
{
    PyObject *VAR_2;
    PyObject *VAR_3;
    PyObject *VAR_4;

    if (!(VAR_3 = FUNC_6(VAR_0, "path_hook")))
 return -1;

    if (!(VAR_4 = FUNC_7("path_hooks")))
    {
 FUNC_1();
 VAR_4 = FUNC_4(1);
 FUNC_5(VAR_4, 0, VAR_3);
 if (FUNC_8("path_hooks", VAR_4))
 {
     FUNC_9(VAR_4);
     return -1;
 }
 FUNC_9(VAR_4);
    }
    else if (FUNC_3(VAR_4))
    {
 if (FUNC_2(VAR_4, VAR_3))
 {
     FUNC_9(VAR_3);
     return -1;
 }
 FUNC_9(VAR_3);
    }
    else
    {
 FUNC_12();
 FUNC_0(FUNC_13("Failed to set path hook: sys.path_hooks is not a list\n"
        "You should now do the following:\n"
        "- append vim.path_hook to sys.path_hooks\n"
        "- append vim.VIM_SPECIAL_PATH to sys.path\n"));
 FUNC_11();
 FUNC_9(VAR_3);
 return 0;
    }

    if (!(VAR_2 = FUNC_7("path")))
    {
 FUNC_1();
 VAR_2 = FUNC_4(1);
 FUNC_10(VAR_1);
 FUNC_5(VAR_2, 0, VAR_1);
 if (FUNC_8("path", VAR_2))
 {
     FUNC_9(VAR_2);
     return -1;
 }
 FUNC_9(VAR_2);
    }
    else if (FUNC_3(VAR_2))
    {
 if (FUNC_2(VAR_2, VAR_1))
     return -1;
    }
    else
    {
 FUNC_12();
 FUNC_0(FUNC_13("Failed to set path: sys.path is not a list\n"
        "You should now append vim.VIM_SPECIAL_PATH to sys.path"));
 FUNC_11();
    }

    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_run_args {int dummy; } ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct vlc_run_args const*,char*) ;
 char* FUNC_3 (char const*,int *) ;

int FUNC_4(const struct vlc_run_args *VAR_1, const char *VAR_2)
{
    char *VAR_3 = FUNC_3(VAR_2, ((void*)0));
    if (VAR_3 == ((void*)0))
    {
        FUNC_0(VAR_0, "Error: cannot convert path to URL: %s\n", VAR_2);
        return -1;
    }

    int VAR_4 = FUNC_2(VAR_1, VAR_3);
    FUNC_1(VAR_3);
    return VAR_4;
}

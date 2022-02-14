
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_0; char member_3; int * member_2; int const member_1; } ;
typedef int libvlc_instance_t ;


 int FUNC_0 () ;
 int FUNC_1 (int,char**,char*,struct option const*,int *) ;
 int * FUNC_2 (int,char const**) ;
 int FUNC_3 (int *) ;

 scalar_t__ FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;

int FUNC_7 (int VAR_0, char *VAR_1[])
{
    int VAR_2 = 1;


    for (int VAR_3 = VAR_2; VAR_3 < VAR_0; VAR_3++)
    {
        const char *VAR_4 = VAR_1[VAR_3];

        if (FUNC_4 ("VLC_PLUGIN_PATH", VAR_4, 1))
            FUNC_0 ();

        const char *VAR_5[4];
        int VAR_6 = 0;

        VAR_5[VAR_6++] = "--quiet";
        VAR_5[VAR_6++] = "--reset-plugins-cache";
        VAR_5[VAR_6++] = "--";
        VAR_5[VAR_6] = ((void*)0);

        libvlc_instance_t *VAR_7 = FUNC_2 (VAR_6, VAR_5);
        if (VAR_7 == ((void*)0))
            return 1;
        FUNC_3(VAR_7);
    }

    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_int_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char*) ;
 char* FUNC_6 (int *,char*) ;

int FUNC_7(libvlc_int_t *VAR_1, const char *VAR_2)
{
    int VAR_3;

    if (VAR_2 != ((void*)0))
        VAR_3 = FUNC_2(VAR_1, VAR_2);
    else
    {
        char *VAR_4 = FUNC_6(VAR_1, "intf");
        if (VAR_4 == ((void*)0))
        {

            if (!FUNC_5(VAR_1, "daemon"))

                FUNC_4(VAR_1, FUNC_0("Running vlc with the default interface. "
                         "Use 'cvlc' to use vlc without interface."));
        }
        VAR_3 = FUNC_2(VAR_1, VAR_4);
        FUNC_1(VAR_4);
        VAR_2 = "default";
    }
    if (VAR_3 != VAR_0)
        FUNC_3(VAR_1, "interface \"%s\" initialization failed", VAR_2);
    return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int psz_module; int * psz_header; } ;
typedef TYPE_1__ vlc_log_t ;
typedef int va_list ;


 int FUNC_0 (char*) ;
 int* VAR_0 ;
 int FUNC_1 (int,char*,int ,char*,...) ;
 int FUNC_2 (char**,char const*,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, int VAR_2, const vlc_log_t *VAR_3,
                const char *VAR_4, va_list VAR_5)
{
    static const char VAR_6[] = "message lost";
    char *VAR_7;
    int VAR_8 = VAR_0[VAR_2];

    if (FUNC_2(&VAR_7, VAR_4, VAR_5) == -1)
        VAR_7 = (char *)VAR_6;

    if (VAR_3->psz_header != ((void*)0))
        FUNC_1(VAR_8, "[%s] %s: %s", *VAR_3->psz_header, VAR_3->psz_module,
               VAR_7);
    else
        FUNC_1(VAR_8, "%s: %s", VAR_3->psz_module, VAR_7);

    if (VAR_7 != VAR_6)
        FUNC_0(VAR_7);
    (void) VAR_1;
}

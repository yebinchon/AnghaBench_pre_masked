
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int verbosity; int * stream; } ;
typedef TYPE_1__ vlc_logger_sys_t ;
struct TYPE_5__ {char* psz_module; } ;
typedef TYPE_2__ vlc_log_t ;
typedef int va_list ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,char*,int,unsigned int const) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int *) ;
 int* VAR_0 ;
 int FUNC_4 (int *,char const*,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, int VAR_2, const vlc_log_t *VAR_3,
                    const char *VAR_4, va_list VAR_5)
{
    static const unsigned VAR_6[4] = {
        0xffffff, 0xff6666, 0xffff66, 0xaaaaaa,
    };
    vlc_logger_sys_t *VAR_7 = VAR_1;
    FILE *VAR_8 = VAR_7->stream;

    if (VAR_7->verbosity < VAR_2)
        return;

    FUNC_0(VAR_8);
    FUNC_1(VAR_8, "%s%s: <span style=\"color: #%06x\">",
            VAR_3->psz_module, VAR_0[VAR_2], VAR_6[VAR_2]);

    FUNC_4(VAR_8, VAR_4, VAR_5);
    FUNC_2("</span>\n", VAR_8);
    FUNC_3(VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_object_t {int dummy; } ;
typedef enum pl_log_level { ____Placeholder_pl_log_level } pl_log_level ;







 int FUNC_0 (struct vlc_object_t*,char*,char const*) ;
 int FUNC_1 (struct vlc_object_t*,char*,char const*) ;
 int FUNC_2 (struct vlc_object_t*,char*,char const*) ;
 int FUNC_3 (struct vlc_object_t*,char*,char const*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, enum pl_log_level VAR_1, const char *VAR_2)
{
    struct vlc_object_t *VAR_3 = VAR_0;

    switch (VAR_1) {
    case 130:
    case 131: FUNC_1(VAR_3, "%s", VAR_2); break;
    case 128: FUNC_3(VAR_3, "%s", VAR_2); break;
    case 129: FUNC_2(VAR_3, "%s", VAR_2); break;
    case 132: FUNC_0(VAR_3, "%s", VAR_2); break;
    default: break;
    }
}

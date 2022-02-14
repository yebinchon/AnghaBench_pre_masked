
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ops; } ;
typedef TYPE_2__ vlc_logger_t ;
typedef int vlc_log_t ;
typedef int va_list ;
struct TYPE_5__ {int (* log ) (TYPE_2__*,int,int const*,char const*,int ) ;} ;


 int FUNC_0 (TYPE_2__*,int,int const*,char const*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(vlc_logger_t *VAR_0, int VAR_1,
                              const vlc_log_t *VAR_2, const char *VAR_3,
                              va_list VAR_4)
{
    if (VAR_0 != ((void*)0)) {
        int VAR_5 = FUNC_2();

        VAR_0->ops->log(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
        FUNC_1(VAR_5);
    }
}

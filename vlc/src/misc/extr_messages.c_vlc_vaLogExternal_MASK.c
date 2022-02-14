
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_log_t ;
typedef int va_list ;
struct vlc_logger_external {int opaque; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* log ) (int ,int,int const*,char const*,int ) ;} ;


 int FUNC_0 (int ,int,int const*,char const*,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, int VAR_1, const vlc_log_t *VAR_2,
                              const char *VAR_3, va_list VAR_4)
{
    struct vlc_logger_external *VAR_5 = VAR_0;

    VAR_5->ops->log(VAR_5->opaque, VAR_1, VAR_2, VAR_3, VAR_4);
}

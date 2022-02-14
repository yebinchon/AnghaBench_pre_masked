
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vlc_logger_operations {int dummy; } ;
struct vlc_logger {int dummy; } ;
struct TYPE_5__ {int logger; } ;
struct TYPE_6__ {TYPE_1__ obj; } ;
typedef TYPE_2__ libvlc_int_t ;


 int FUNC_0 (TYPE_2__*) ;
 struct vlc_logger VAR_0 ;
 struct vlc_logger* FUNC_1 (struct vlc_logger_operations const*,void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct vlc_logger*) ;

void FUNC_4(libvlc_int_t *VAR_1, const struct vlc_logger_operations *VAR_2,
                void *VAR_3)
{
    struct vlc_logger *VAR_4;

    if (VAR_2 != ((void*)0))
        VAR_4 = FUNC_1(VAR_2, VAR_3);
    else
        VAR_4 = ((void*)0);

    if (VAR_4 == ((void*)0))
        VAR_4 = &VAR_0;

    FUNC_3(VAR_1->obj.logger, VAR_4);
    FUNC_2(FUNC_0(VAR_1));
}

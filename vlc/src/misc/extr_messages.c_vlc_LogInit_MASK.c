
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vlc_logger {int dummy; } ;
struct TYPE_5__ {int logger; } ;
struct TYPE_6__ {TYPE_1__ obj; } ;
typedef TYPE_2__ libvlc_int_t ;


 int FUNC_0 (TYPE_2__*) ;
 struct vlc_logger VAR_0 ;
 struct vlc_logger* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct vlc_logger*) ;

void FUNC_3(libvlc_int_t *VAR_1)
{
    struct vlc_logger *VAR_2 = FUNC_1(FUNC_0(VAR_1));
    if (VAR_2 == ((void*)0))
        VAR_2 = &VAR_0;

    FUNC_2(VAR_1->obj.logger, VAR_2);
}

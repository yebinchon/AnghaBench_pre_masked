
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_logger_t ;
struct vlc_logger {int dummy; } ;
struct TYPE_5__ {int * logger; } ;
struct TYPE_6__ {TYPE_1__ obj; } ;
typedef TYPE_2__ libvlc_int_t ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct vlc_logger* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,struct vlc_logger*) ;
 int * FUNC_5 () ;

int FUNC_6(libvlc_int_t *VAR_0)
{
    vlc_logger_t *VAR_1 = FUNC_5();
    if (FUNC_1(VAR_1 == ((void*)0)))
        return -1;
    VAR_0->obj.logger = VAR_1;

    struct vlc_logger *VAR_2 = FUNC_2(VAR_1);
    if (VAR_2 != ((void*)0)) {
        FUNC_4(VAR_1, VAR_2);
        FUNC_3(FUNC_0(VAR_0));
    }
    return 0;
}

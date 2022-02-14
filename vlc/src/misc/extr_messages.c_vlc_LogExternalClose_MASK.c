
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlc_logger_external {int opaque; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* destroy ) (int ) ;} ;


 int FUNC_0 (struct vlc_logger_external*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    struct vlc_logger_external *VAR_1 = VAR_0;

    if (VAR_1->ops->destroy != ((void*)0))
        VAR_1->ops->destroy(VAR_1->opaque);
    FUNC_0(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ context_id; scalar_t__ config_id; int display; } ;
struct TYPE_5__ {TYPE_1__ hw_ctx; } ;
typedef TYPE_2__ vlc_va_sys_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
    vlc_va_sys_t *VAR_2 = VAR_1;
    if (VAR_2->hw_ctx.context_id != VAR_0)
        FUNC_2(((void*)0), VAR_2->hw_ctx.display, VAR_2->hw_ctx.context_id);
    if (VAR_2->hw_ctx.config_id != VAR_0)
        FUNC_1(((void*)0), VAR_2->hw_ctx.display, VAR_2->hw_ctx.config_id);
    FUNC_0(VAR_2);
}

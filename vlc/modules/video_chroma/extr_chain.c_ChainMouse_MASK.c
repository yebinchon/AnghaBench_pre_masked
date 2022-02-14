
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_mouse_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_5__ {int p_chain; } ;
typedef TYPE_2__ filter_sys_t ;


 int FUNC_0 (int ,int *,int const*) ;

__attribute__((used)) static int FUNC_1( filter_t *VAR_0, vlc_mouse_t *VAR_1,
                       const vlc_mouse_t *VAR_2, const vlc_mouse_t *VAR_3 )
{
    (void) VAR_2;
    filter_sys_t *VAR_4 = VAR_0->p_sys;
    return FUNC_0( VAR_4->p_chain, VAR_1, VAR_3 );
}

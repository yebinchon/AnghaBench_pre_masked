
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int video_format_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_5__ {int context; } ;
typedef TYPE_2__ filter_sys_t ;


 int FUNC_0 (int *,int *,int const*) ;

__attribute__((used)) static void FUNC_1( filter_t *VAR_0,
                      video_format_t *VAR_1, const video_format_t *VAR_2 )
{
    filter_sys_t *VAR_3 = VAR_0->p_sys;
    FUNC_0(&VAR_3->context, VAR_1, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_6__ {int p_chain; scalar_t__ p_video_filter; } ;
typedef TYPE_2__ filter_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3( vlc_object_t *VAR_1 )
{
    filter_t *VAR_2 = (filter_t *)VAR_1;
    filter_sys_t *VAR_3 = VAR_2->p_sys;

    if (VAR_3->p_video_filter)
        FUNC_0( VAR_2, VAR_3->p_video_filter,
                                  VAR_0 );
    FUNC_1( VAR_3->p_chain );
    FUNC_2( VAR_3 );
}

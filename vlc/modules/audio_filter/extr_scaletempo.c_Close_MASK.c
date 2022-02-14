
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_5__ {struct TYPE_5__* table_window; struct TYPE_5__* buf_pre_corr; struct TYPE_5__* table_blend; struct TYPE_5__* buf_overlap; struct TYPE_5__* buf_queue; } ;
typedef TYPE_2__ filter_sys_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1( vlc_object_t *VAR_0 )
{
    filter_t *VAR_1 = (filter_t *)VAR_0;
    filter_sys_t *VAR_2 = VAR_1->p_sys;
    FUNC_0( VAR_2->buf_queue );
    FUNC_0( VAR_2->buf_overlap );
    FUNC_0( VAR_2->table_blend );
    FUNC_0( VAR_2->buf_pre_corr );
    FUNC_0( VAR_2->table_window );
    FUNC_0( VAR_2 );
}

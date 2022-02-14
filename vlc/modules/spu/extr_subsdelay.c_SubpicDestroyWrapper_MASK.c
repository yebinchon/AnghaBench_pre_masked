
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int subsdelay_heap_t ;
struct TYPE_11__ {TYPE_2__* p_filter; } ;
typedef TYPE_3__ subsdelay_heap_entry_t ;
struct TYPE_9__ {TYPE_3__* p_sys; } ;
struct TYPE_12__ {TYPE_1__ updater; } ;
typedef TYPE_4__ subpicture_t ;
struct TYPE_13__ {int heap; } ;
typedef TYPE_5__ filter_sys_t ;
struct TYPE_10__ {TYPE_5__* p_sys; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( subpicture_t *VAR_0 )
{
    subsdelay_heap_entry_t *VAR_1;
    subsdelay_heap_t *VAR_2;

    VAR_1 = VAR_0->updater.p_sys;

    if( !VAR_1 )
    {
        return;
    }

    if( VAR_1->p_filter )
    {
        filter_sys_t *VAR_3 = VAR_1->p_filter->p_sys;
        VAR_2 = &VAR_3->heap;

        FUNC_1( VAR_2 );
        FUNC_2( VAR_2, VAR_1 );
        FUNC_3( VAR_2 );
    }

    FUNC_0( VAR_1 );
}

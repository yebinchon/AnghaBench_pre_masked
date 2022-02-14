
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int subsdelay_heap_t ;
struct TYPE_15__ {TYPE_2__* p_subpic; } ;
typedef TYPE_1__ subsdelay_heap_entry_t ;
struct TYPE_16__ {int b_ephemer; scalar_t__ i_start; scalar_t__ i_stop; int b_subtitle; } ;
typedef TYPE_2__ subpicture_t ;
struct TYPE_17__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_18__ {int heap; } ;
typedef TYPE_4__ filter_sys_t ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *,TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static subpicture_t * FUNC_8( filter_t *VAR_0, subpicture_t* VAR_1 )
{
    subsdelay_heap_t *VAR_2;
    subsdelay_heap_entry_t *VAR_3;

    if( !VAR_1->b_subtitle )
    {
        return VAR_1;
    }

    if( FUNC_0( VAR_1 ) )
    {



        FUNC_7( VAR_1 );

        return ((void*)0);
    }

    filter_sys_t *VAR_4 = VAR_0->p_sys;
    VAR_2 = &VAR_4->heap;



    FUNC_2( VAR_2 );

    VAR_3 = FUNC_3( VAR_2, VAR_1, VAR_0 );
    if( !VAR_3 )
    {
        FUNC_4( VAR_2 );

        FUNC_6(VAR_0, "Can't add subpicture to the heap");

        return VAR_1;
    }

    VAR_1 = VAR_3->p_subpic;

    if( VAR_1->b_ephemer )
    {



        VAR_1->i_stop = VAR_1->i_start + FUNC_5(20);
        VAR_1->b_ephemer = 0;
    }


    FUNC_1( VAR_0 );

    FUNC_4( VAR_2 );

    return VAR_1;
}

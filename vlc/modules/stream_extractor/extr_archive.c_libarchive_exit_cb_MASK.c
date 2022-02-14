
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int libarchive_t ;
struct TYPE_4__ {int * p_source; TYPE_1__* p_sys; } ;
typedef TYPE_2__ libarchive_callback_t ;
struct TYPE_3__ {int b_dead; int * source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3( libarchive_t* VAR_2, void* VAR_3 )
{
    FUNC_0( VAR_2 );

    libarchive_callback_t* VAR_4 = (libarchive_callback_t*)VAR_3;

    if( VAR_4->p_sys->source == VAR_4->p_source )
    {
        if( !VAR_4->p_sys->b_dead && FUNC_2( VAR_4->p_source, 0 ) )
            return VAR_0;
    }
    else if( VAR_4->p_source )
    {
        FUNC_1( VAR_4->p_source );
        VAR_4->p_source = ((void*)0);
    }

    return VAR_1;
}

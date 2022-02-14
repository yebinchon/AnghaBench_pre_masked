
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pp_mode ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_6__ {int lock; int * pp_mode; } ;
typedef TYPE_2__ filter_sys_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5( filter_t *VAR_0, const char *VAR_1,
                          int VAR_2 )
{
    filter_sys_t *VAR_3 = VAR_0->p_sys;
    pp_mode *VAR_4 = ((void*)0), *VAR_5;

    if( VAR_2 > 0 )
    {
         VAR_4 = FUNC_2( VAR_1 ? VAR_1 :
                                                    "default", VAR_2 );
         if( VAR_4 == ((void*)0) )
         {
             FUNC_0( VAR_0, "Error while changing post processing mode. "
                       "Keeping previous mode." );
             return;
        }
    }

    FUNC_3( &VAR_3->lock );
    VAR_5 = VAR_3->pp_mode;
    VAR_3->pp_mode = VAR_4;
    FUNC_4( &VAR_3->lock );

    FUNC_1( VAR_5 );
}

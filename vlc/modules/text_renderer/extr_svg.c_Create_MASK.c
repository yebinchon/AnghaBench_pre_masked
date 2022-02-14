
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int pf_render; int * p_sys; } ;
typedef TYPE_1__ filter_t ;
typedef int filter_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3( vlc_object_t *VAR_3 )
{
    filter_t *VAR_4 = ( filter_t * )VAR_3;

    filter_sys_t *VAR_5 = FUNC_0( 1, sizeof(*VAR_5) );
    if( !VAR_5 )
        return VAR_1;
    VAR_4->p_sys = VAR_5;

    VAR_4->pf_render = VAR_0;
    FUNC_2( VAR_4 );


    FUNC_1( );


    return VAR_2;
}

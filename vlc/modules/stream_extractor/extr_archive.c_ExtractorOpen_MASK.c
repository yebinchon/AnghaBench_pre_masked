
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_2__ {int pf_seek; int pf_control; int pf_read; int * p_sys; int identifier; int source; } ;
typedef TYPE_1__ stream_extractor_t ;
typedef int private_sys_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3( vlc_object_t* VAR_5 )
{
    stream_extractor_t* VAR_6 = (void*)VAR_5;
    private_sys_t* VAR_7 = FUNC_1( VAR_5, VAR_6->source );

    if( VAR_7 == ((void*)0) )
        return VAR_3;

    if( FUNC_2( VAR_7, VAR_6->identifier ) )
    {
        FUNC_0( VAR_7 );
        return VAR_3;
    }

    VAR_6->p_sys = VAR_7;
    VAR_6->pf_read = VAR_1;
    VAR_6->pf_control = VAR_0;
    VAR_6->pf_seek = VAR_2;

    return VAR_4;
}

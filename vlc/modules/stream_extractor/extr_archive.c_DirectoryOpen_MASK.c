
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_2__ {int pf_readdir; int * p_sys; int source; } ;
typedef TYPE_1__ stream_directory_t ;
typedef int private_sys_t ;


 int * FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1( vlc_object_t* VAR_3 )
{
    stream_directory_t* VAR_4 = (void*)VAR_3;
    private_sys_t* VAR_5 = FUNC_0( VAR_3, VAR_4->source );

    if( VAR_5 == ((void*)0) )
        return VAR_1;

    VAR_4->p_sys = VAR_5;
    VAR_4->pf_readdir = VAR_0;

    return VAR_2;
}

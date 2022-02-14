
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_6__ {scalar_t__ i_proto; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_2( vlc_object_t *VAR_3 )
{
    stream_t *VAR_4 = (stream_t*)VAR_3;
    access_sys_t *VAR_5 = VAR_4->p_sys;

    if( ( VAR_5->i_proto == VAR_1 ) ||
        ( VAR_5->i_proto == VAR_2 ) )
    {
         FUNC_1 ( VAR_4 );
    }
    else if( VAR_5->i_proto == VAR_0 )
    {
         FUNC_0 ( VAR_4 );
    }
}

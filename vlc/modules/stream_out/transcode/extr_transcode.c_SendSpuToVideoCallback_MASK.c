
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int subpicture_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_5__ {int lock; int id_video; } ;
typedef TYPE_2__ sout_stream_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( void *VAR_0, subpicture_t *VAR_1 )
{
    sout_stream_t *VAR_2 = VAR_0;
    sout_stream_sys_t *VAR_3 = VAR_2->p_sys;
    FUNC_2( &VAR_3->lock );
    if( !VAR_3->id_video )
        FUNC_0( VAR_1 );
    else
        FUNC_1( VAR_2,
                                  VAR_3->id_video, VAR_1 );
    FUNC_3( &VAR_3->lock );
}

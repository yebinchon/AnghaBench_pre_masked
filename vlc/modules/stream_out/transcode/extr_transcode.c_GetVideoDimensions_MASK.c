
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_5__ {int lock; scalar_t__ id_video; } ;
typedef TYPE_2__ sout_stream_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,unsigned int*,unsigned int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3( void *VAR_1, unsigned *VAR_2, unsigned *VAR_3 )
{
    sout_stream_t *VAR_4 = VAR_1;
    sout_stream_sys_t *VAR_5 = VAR_4->p_sys;
    int VAR_6 = VAR_0;
    FUNC_1( &VAR_5->lock );
    if( VAR_5->id_video )
        VAR_6 = FUNC_0( VAR_4,
                                                       VAR_5->id_video, VAR_2, VAR_3 );
    FUNC_2( &VAR_5->lock );
    return VAR_6;
}

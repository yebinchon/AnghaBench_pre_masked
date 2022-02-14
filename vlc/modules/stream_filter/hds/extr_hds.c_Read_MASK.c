
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_9__ {int ** pp_elems; } ;
struct TYPE_8__ {TYPE_3__ hds_streams; } ;
typedef TYPE_2__ stream_sys_t ;
typedef int ssize_t ;
typedef int hds_stream_t ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,void*,size_t,int *) ;
 int FUNC_2 (int *,TYPE_2__*,void*,size_t) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static ssize_t FUNC_5( stream_t *VAR_0, void *VAR_1, size_t VAR_2 )
{
    stream_sys_t *VAR_3 = VAR_0->p_sys;

    if ( FUNC_4( &VAR_3->hds_streams ) == 0 )
        return 0;
    if( FUNC_3(VAR_2 == 0) )
        return 0;


    hds_stream_t *VAR_4 = VAR_3->hds_streams.pp_elems[0];

    if ( FUNC_0( VAR_3 ) )
        return FUNC_2( VAR_4, VAR_3, VAR_1, VAR_2 );

    return FUNC_1( (vlc_object_t*)VAR_0, VAR_1, VAR_2, VAR_4 );
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_9__ {TYPE_3__** pp_elems; } ;
struct TYPE_7__ {int duration_seconds; scalar_t__ flv_header_len; TYPE_4__ hds_streams; scalar_t__ live; } ;
typedef TYPE_2__ stream_sys_t ;
struct TYPE_8__ {int bitrate; } ;
typedef TYPE_3__ hds_stream_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static uint64_t FUNC_1( stream_t* VAR_1 )
{
    stream_sys_t *VAR_2 = VAR_1->p_sys;

    if ( VAR_2->live )
        return 0;

    if ( FUNC_0( &VAR_2->hds_streams ) == 0 )
        return 0;

    hds_stream_t* VAR_3 = VAR_2->hds_streams.pp_elems[0];

    if ( VAR_3->bitrate == 0 )
        return 0;

    return VAR_2->flv_header_len + VAR_2->duration_seconds *
        VAR_3->bitrate * VAR_0;
}

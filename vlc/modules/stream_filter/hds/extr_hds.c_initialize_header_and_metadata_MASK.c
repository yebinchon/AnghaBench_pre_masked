
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flv_header; int flv_header_len; } ;
typedef TYPE_1__ stream_sys_t ;
struct TYPE_6__ {int metadata_len; int metadata; } ;
typedef TYPE_2__ hds_stream_t ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1( stream_sys_t* VAR_0, hds_stream_t *VAR_1 )
{
    VAR_0->flv_header_len =
        FUNC_0( &VAR_0->flv_header, VAR_1->metadata,
                                       VAR_1->metadata_len );
}

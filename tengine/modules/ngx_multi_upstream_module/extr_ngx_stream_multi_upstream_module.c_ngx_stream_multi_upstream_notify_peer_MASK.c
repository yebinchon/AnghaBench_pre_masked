
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_2__ {int data; int (* original_notify_peer ) (int *,int ,int ) ;} ;
typedef TYPE_1__ ngx_stream_multi_upstream_peer_data_t ;
typedef int ngx_peer_connection_t ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_1(ngx_peer_connection_t *VAR_0,
    void *VAR_1, ngx_uint_t VAR_2)
{
    ngx_stream_multi_upstream_peer_data_t *VAR_3 = VAR_1;

    if (VAR_3->original_notify_peer) {
        VAR_3->original_notify_peer(VAR_0, VAR_3->data, VAR_2);
    }
}

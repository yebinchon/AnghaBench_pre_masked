
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ flv_header; scalar_t__ flv_header_len; scalar_t__ flv_header_bytes_sent; } ;
typedef TYPE_1__ stream_sys_t ;
typedef int hds_stream_t ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (void*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2( hds_stream_t *VAR_0, stream_sys_t* VAR_1,
                            void* VAR_2, unsigned VAR_3 )
{
    if ( !VAR_1->flv_header )
    {
        FUNC_0( VAR_1, VAR_0 );
    }

    uint32_t VAR_4 = VAR_3;
    uint32_t VAR_5 =
        VAR_1->flv_header_len - VAR_1->flv_header_bytes_sent;
    if( VAR_4 > VAR_5 ) {
        VAR_4 = VAR_5;
    }

    FUNC_1( VAR_2, VAR_1->flv_header + VAR_1->flv_header_bytes_sent, VAR_4 );

    VAR_1->flv_header_bytes_sent += VAR_4;
    return VAR_4;
}

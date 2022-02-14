
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stream; } ;
typedef TYPE_1__ rtsp_stream_id_t ;
typedef int httpd_message_t ;
typedef int httpd_client_t ;
typedef int httpd_callback_sys_t ;


 int FUNC_0 (int ,TYPE_1__*,int *,int *,int const*) ;

__attribute__((used)) static int FUNC_1( httpd_callback_sys_t *VAR_0,
                           httpd_client_t *VAR_1,
                           httpd_message_t *VAR_2,
                           const httpd_message_t *VAR_3 )
{
    rtsp_stream_id_t *VAR_4 = (rtsp_stream_id_t *)VAR_0;
    return FUNC_0( VAR_4->stream, VAR_4, VAR_1, VAR_2, VAR_3 );
}

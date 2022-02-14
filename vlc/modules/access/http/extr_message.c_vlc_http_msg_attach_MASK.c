
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_stream {int dummy; } ;
struct vlc_http_msg {struct vlc_http_stream* payload; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct vlc_http_msg *VAR_0, struct vlc_http_stream *VAR_1)
{
    FUNC_0(VAR_0->payload == ((void*)0));
    VAR_0->payload = VAR_1;
}

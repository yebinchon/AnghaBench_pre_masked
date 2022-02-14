
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlc_http_stream {int dummy; } ;
struct vlc_http_msg {int dummy; } ;
struct vlc_http_conn {TYPE_1__* cbs; } ;
struct TYPE_2__ {struct vlc_http_stream* (* stream_open ) (struct vlc_http_conn*,struct vlc_http_msg const*) ;} ;


 struct vlc_http_stream* FUNC_0 (struct vlc_http_conn*,struct vlc_http_msg const*) ;

__attribute__((used)) static inline struct vlc_http_stream *
FUNC_1(struct vlc_http_conn *VAR_0, const struct vlc_http_msg *VAR_1)
{
    return VAR_0->cbs->stream_open(VAR_0, VAR_1);
}

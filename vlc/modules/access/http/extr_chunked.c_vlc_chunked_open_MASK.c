
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_tls {int dummy; } ;
struct vlc_http_stream {int * cbs; } ;
struct vlc_chunked_stream {int eof; int error; struct vlc_http_stream stream; scalar_t__ chunk_length; struct vlc_tls* tls; struct vlc_http_stream* parent; } ;


 struct vlc_chunked_stream* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;

struct vlc_http_stream *FUNC_2(struct vlc_http_stream *VAR_1,
                                         struct vlc_tls *VAR_2)
{
    struct vlc_chunked_stream *VAR_3 = FUNC_0(sizeof (*VAR_3));
    if (FUNC_1(VAR_3 == ((void*)0)))
        return ((void*)0);

    VAR_3->stream.cbs = &VAR_0;
    VAR_3->parent = VAR_1;
    VAR_3->tls = VAR_2;
    VAR_3->chunk_length = 0;
    VAR_3->eof = 0;
    VAR_3->error = 0;
    return &VAR_3->stream;
}

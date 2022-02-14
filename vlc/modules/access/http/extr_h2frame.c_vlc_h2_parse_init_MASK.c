
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlc_h2_parser_cbs {int dummy; } ;
struct TYPE_2__ {int * decoder; scalar_t__ len; int * buf; scalar_t__ sid; } ;
struct vlc_h2_parser {int rcwd_size; TYPE_1__ headers; int parser; struct vlc_h2_parser_cbs const* cbs; void* opaque; } ;


 int VAR_0 ;
 int FUNC_0 (struct vlc_h2_parser*) ;
 int * FUNC_1 (int ) ;
 struct vlc_h2_parser* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;

struct vlc_h2_parser *FUNC_4(void *VAR_2,
                                        const struct vlc_h2_parser_cbs *VAR_3)
{
    struct vlc_h2_parser *VAR_4 = FUNC_2(sizeof (*VAR_4));
    if (FUNC_3(VAR_4 == ((void*)0)))
        return ((void*)0);

    VAR_4->opaque = VAR_2;
    VAR_4->cbs = VAR_3;
    VAR_4->parser = VAR_1;
    VAR_4->headers.sid = 0;
    VAR_4->headers.buf = ((void*)0);
    VAR_4->headers.len = 0;
    VAR_4->headers.decoder = FUNC_1(VAR_0);
    if (FUNC_3(VAR_4->headers.decoder == ((void*)0)))
    {
        FUNC_0(VAR_4);
        return ((void*)0);
    }
    VAR_4->rcwd_size = 65535;
    return VAR_4;
}

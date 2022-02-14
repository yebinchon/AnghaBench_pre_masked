
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sid; scalar_t__ eos; int len; int buf; int decoder; } ;
struct vlc_h2_parser {TYPE_2__ headers; int parser; TYPE_1__* cbs; } ;
struct TYPE_3__ {int (* stream_end ) (void*) ;int (* stream_headers ) (void*,int,char const***) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,char***,int) ;
 int FUNC_2 (void*,int,char const***) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct vlc_h2_parser*,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct vlc_h2_parser*,scalar_t__,int ) ;
 void* FUNC_6 (struct vlc_h2_parser*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct vlc_h2_parser *VAR_4)
{
    char *VAR_5[VAR_1][2];


    int VAR_6 = FUNC_1(VAR_4->headers.decoder, VAR_4->headers.buf, VAR_4->headers.len,
                         VAR_5, VAR_1);
    if (VAR_6 > VAR_1)
    {
        for (unsigned VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
        {
            FUNC_0(VAR_5[VAR_7][0]);
            FUNC_0(VAR_5[VAR_7][1]);
        }
        VAR_6 = -1;
    }
    if (VAR_6 < 0)
        return FUNC_4(VAR_4, VAR_0);

    void *VAR_8 = FUNC_6(VAR_4, VAR_4->headers.sid);
    int VAR_9 = 0;

    if (VAR_8 != ((void*)0))
    {
        const char *VAR_10[VAR_6 ? VAR_6 : 1][2];

        for (int VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
            VAR_10[VAR_11][0] = VAR_5[VAR_11][0], VAR_10[VAR_11][1] = VAR_5[VAR_11][1];

        VAR_4->cbs->stream_headers(VAR_8, VAR_6, VAR_10);

        if (VAR_4->headers.eos)
            VAR_4->cbs->stream_end(VAR_8);
    }
    else




        VAR_9 = FUNC_5(VAR_4, VAR_4->headers.sid, VAR_2);

    for (int VAR_12 = 0; VAR_12 < VAR_6; VAR_12++)
    {
        FUNC_0(VAR_5[VAR_12][0]);
        FUNC_0(VAR_5[VAR_12][1]);
    }

    VAR_4->parser = VAR_3;
    VAR_4->headers.sid = 0;
    return VAR_9;
}

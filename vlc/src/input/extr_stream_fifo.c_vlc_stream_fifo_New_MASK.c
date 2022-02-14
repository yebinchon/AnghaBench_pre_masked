
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct vlc_stream_fifo {int eof; int * fifo; } ;
typedef struct vlc_stream_fifo vlc_stream_fifo_t ;
typedef int vlc_object_t ;
struct vlc_stream_fifo_private {struct vlc_stream_fifo* writer; } ;
struct TYPE_5__ {int pf_control; int * pf_seek; int pf_block; } ;
typedef TYPE_1__ stream_t ;


 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vlc_stream_fifo*) ;
 struct vlc_stream_fifo* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int *,int ,int,char*) ;
 struct vlc_stream_fifo_private* FUNC_6 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

vlc_stream_fifo_t *FUNC_7(vlc_object_t *VAR_3, stream_t **VAR_4)
{
    struct vlc_stream_fifo *VAR_5 = FUNC_3(sizeof (*VAR_5));
    if (FUNC_4(VAR_5 == ((void*)0)))
        return ((void*)0);

    VAR_5->fifo = FUNC_0();
    if (FUNC_4(VAR_5->fifo == ((void*)0))) {
        FUNC_2(VAR_5);
        return ((void*)0);
    }
    VAR_5->eof = 0;

    struct vlc_stream_fifo_private *VAR_6;
    stream_t *VAR_7 = FUNC_5(VAR_3, VAR_2,
                                       sizeof (*VAR_6), "stream");
    if (FUNC_4(VAR_7 == ((void*)0))) {
        FUNC_1(VAR_5->fifo);
        FUNC_2(VAR_5);
        return ((void*)0);
    }

    VAR_6 = FUNC_6(VAR_7);
    VAR_6->writer = VAR_5;
    VAR_7->pf_block = VAR_0;
    VAR_7->pf_seek = ((void*)0);
    VAR_7->pf_control = VAR_1;
    *VAR_4 = VAR_7;
    return VAR_5;
}

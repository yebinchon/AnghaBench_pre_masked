
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fifo_t ;
struct vlc_stream_fifo {scalar_t__ eof; int * fifo; } ;
typedef int stream_t ;
typedef int block_t ;


 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct vlc_stream_fifo* FUNC_5 (int *) ;

__attribute__((used)) static block_t *FUNC_6(stream_t *VAR_0, bool *restrict VAR_1)
{
    struct vlc_stream_fifo *VAR_2 = FUNC_5(VAR_0);
    vlc_fifo_t *VAR_3 = VAR_2->fifo;
    block_t *VAR_4;

    FUNC_2(VAR_3);
    while (FUNC_1(VAR_3))
    {
        if (VAR_2->eof)
        {
            *VAR_1 = 1;
            break;
        }
        FUNC_4(VAR_3);
    }

    VAR_4 = FUNC_0(VAR_3);
    FUNC_3(VAR_3);
    return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fifo_t ;
struct vlc_stream_fifo {int eof; int * fifo; } ;
typedef int stream_t ;
typedef int block_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vlc_stream_fifo*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct vlc_stream_fifo* FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(stream_t *VAR_0)
{
    struct vlc_stream_fifo *VAR_1 = FUNC_6(VAR_0);
    vlc_fifo_t *VAR_2 = VAR_1->fifo;
    block_t *VAR_3;
    bool VAR_4;

    FUNC_4(VAR_2);
    VAR_3 = FUNC_3(VAR_2);
    VAR_4 = VAR_1->eof;
    VAR_1->eof = 1;
    FUNC_5(VAR_2);

    FUNC_0(VAR_3);

    if (VAR_4) {

        FUNC_1(VAR_2);
        FUNC_2(VAR_1);
    }
}

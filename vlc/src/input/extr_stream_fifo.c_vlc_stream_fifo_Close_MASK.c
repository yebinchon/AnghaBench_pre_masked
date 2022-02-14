
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int eof; int * fifo; } ;
typedef TYPE_1__ vlc_stream_fifo_t ;
typedef int vlc_fifo_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(vlc_stream_fifo_t *VAR_0)
{
    vlc_fifo_t *VAR_1 = VAR_0->fifo;
    bool VAR_2;

    FUNC_2(VAR_1);
    VAR_2 = VAR_0->eof;
    VAR_0->eof = 1;
    FUNC_3(VAR_1);
    FUNC_4(VAR_1);

    if (VAR_2) {

        FUNC_0(VAR_1);
        FUNC_1(VAR_0);
    }
}

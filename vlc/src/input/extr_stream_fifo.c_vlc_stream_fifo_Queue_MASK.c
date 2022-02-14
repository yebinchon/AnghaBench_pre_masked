
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int eof; int * fifo; } ;
typedef TYPE_1__ vlc_stream_fifo_t ;
typedef int vlc_fifo_t ;
typedef int block_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(vlc_stream_fifo_t *VAR_2, block_t *VAR_3)
{
    vlc_fifo_t *VAR_4 = VAR_2->fifo;

    FUNC_3(VAR_4);
    if (FUNC_1(!VAR_2->eof))
    {
        FUNC_4(VAR_4, VAR_3);
        VAR_3 = ((void*)0);
    }
    FUNC_5(VAR_4);

    if (FUNC_2(VAR_3 != ((void*)0)))
    {
        FUNC_0(VAR_3);
        VAR_1 = VAR_0;
        return -1;
    }
    return 0;
}

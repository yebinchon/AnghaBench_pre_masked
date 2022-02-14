
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_stream_fifo_t ;
struct vlc_stream_fifo_private {int * writer; } ;
typedef int stream_t ;


 struct vlc_stream_fifo_private* FUNC_0 (int *) ;

__attribute__((used)) static vlc_stream_fifo_t *FUNC_1(stream_t *VAR_0)
{
    struct vlc_stream_fifo_private *VAR_1 = FUNC_0(VAR_0);

    return VAR_1->writer;
}

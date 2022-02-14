
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint_fast32_t ;
typedef scalar_t__ uint64_t ;
struct vlc_h2_stream {int send_cwnd; struct vlc_h2_stream* older; } ;
struct vlc_h2_conn {struct vlc_h2_stream* streams; int send_cwnd; scalar_t__ init_send_cwnd; } ;



__attribute__((used)) static void FUNC_0(struct vlc_h2_conn *VAR_0,
                                         uint_fast32_t VAR_1)
{
    uint64_t VAR_2 = (uint64_t)VAR_1 - VAR_0->init_send_cwnd;

    VAR_0->init_send_cwnd = VAR_1;
    VAR_0->send_cwnd += VAR_2;

    for (struct vlc_h2_stream *VAR_3 = VAR_0->streams; VAR_3 != ((void*)0); VAR_3 = VAR_3->older)
        VAR_3->send_cwnd += VAR_2;
}

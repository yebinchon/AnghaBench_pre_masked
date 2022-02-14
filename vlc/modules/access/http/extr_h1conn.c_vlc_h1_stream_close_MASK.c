
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_stream {int dummy; } ;
struct vlc_h1_conn {int active; scalar_t__ released; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct vlc_h1_conn*) ;
 struct vlc_h1_conn* FUNC_2 (struct vlc_http_stream*) ;
 int FUNC_3 (struct vlc_h1_conn*) ;

__attribute__((used)) static void FUNC_4(struct vlc_http_stream *VAR_0, bool VAR_1)
{
    struct vlc_h1_conn *VAR_2 = FUNC_2(VAR_0);

    FUNC_0(VAR_2->active);

    if (VAR_1)
        FUNC_3(VAR_2);

    VAR_2->active = 0;

    if (VAR_2->released)
        FUNC_1(VAR_2);
}

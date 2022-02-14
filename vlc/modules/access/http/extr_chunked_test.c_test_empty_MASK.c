
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_stream {int dummy; } ;
typedef int block_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 struct vlc_http_stream* FUNC_1 (int *,int *) ;
 int FUNC_2 (struct vlc_http_stream*,int) ;
 int * FUNC_3 (struct vlc_http_stream*) ;

__attribute__((used)) static void FUNC_4(void)
{
    struct vlc_http_stream *VAR_5;
    block_t *VAR_6;

    VAR_3 = "0\r\n";
    VAR_4 = 3;
    VAR_2 = 1;

    VAR_5 = FUNC_1(&VAR_0, &VAR_1);
    FUNC_0(VAR_5 != ((void*)0));

    VAR_6 = FUNC_3(VAR_5);
    FUNC_0(VAR_6 == ((void*)0));
    VAR_6 = FUNC_3(VAR_5);
    FUNC_0(VAR_6 == ((void*)0));
    FUNC_2(VAR_5, 0);
}

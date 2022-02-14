
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_stream {int dummy; } ;
typedef int block_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char const*) ;
 struct vlc_http_stream* FUNC_3 (int *,int *) ;
 int * VAR_5 ;
 int FUNC_4 (struct vlc_http_stream*,int) ;
 int * FUNC_5 (struct vlc_http_stream*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_6)
{
    struct vlc_http_stream *VAR_7;
    block_t *VAR_8;

    VAR_3 = VAR_6;
    VAR_4 = FUNC_2(VAR_6);
    VAR_2 = 1;

    VAR_7 = FUNC_3(&VAR_0, &VAR_1);
    FUNC_0(VAR_7 != ((void*)0));

    while ((VAR_8 = FUNC_5(VAR_7)) != VAR_5)
    {
        FUNC_0(VAR_8 != ((void*)0));
        FUNC_1(VAR_8);
    }

    FUNC_4(VAR_7, 0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_stream {int dummy; } ;
struct vlc_http_msg {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct vlc_http_msg*) ;
 struct vlc_http_msg* FUNC_2 (char*,char*,char*,char*) ;
 struct vlc_http_stream* FUNC_3 (int ,struct vlc_http_msg*) ;

__attribute__((used)) static struct vlc_http_stream *FUNC_4(void)
{
    struct vlc_http_msg *VAR_1 = FUNC_2("GET", "https",
                                                 "www.example.com", "/");
    FUNC_0(VAR_1 != ((void*)0));

    struct vlc_http_stream *VAR_2 = FUNC_3(VAR_0, VAR_1);
    FUNC_1(VAR_1);
    return VAR_2;
}

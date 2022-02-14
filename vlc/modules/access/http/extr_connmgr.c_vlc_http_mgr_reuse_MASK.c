
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_stream {int dummy; } ;
struct vlc_http_msg {int dummy; } ;
struct vlc_http_mgr {int dummy; } ;
struct vlc_http_conn {int dummy; } ;


 struct vlc_http_conn* FUNC_0 (struct vlc_http_mgr*,char const*,unsigned int) ;
 int FUNC_1 (struct vlc_http_mgr*,struct vlc_http_conn*) ;
 struct vlc_http_msg* FUNC_2 (struct vlc_http_stream*) ;
 struct vlc_http_stream* FUNC_3 (struct vlc_http_conn*,struct vlc_http_msg const*) ;

__attribute__((used)) static
struct vlc_http_msg *FUNC_4(struct vlc_http_mgr *VAR_0,
                                        const char *VAR_1, unsigned VAR_2,
                                        const struct vlc_http_msg *VAR_3)
{
    struct vlc_http_conn *VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
    if (VAR_4 == ((void*)0))
        return ((void*)0);

    struct vlc_http_stream *VAR_5 = FUNC_3(VAR_4, VAR_3);
    if (VAR_5 != ((void*)0))
    {
        struct vlc_http_msg *VAR_6 = FUNC_2(VAR_5);
        if (VAR_6 != ((void*)0))
            return VAR_6;





    }

    FUNC_1(VAR_0, VAR_4);
    return ((void*)0);
}

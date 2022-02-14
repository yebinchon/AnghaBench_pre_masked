
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
struct vlc_http_resource {struct vlc_http_msg* response; } ;
struct vlc_http_msg {int dummy; } ;
struct vlc_http_file {scalar_t__ offset; } ;


 int FUNC_0 (struct vlc_http_msg*) ;
 int FUNC_1 (struct vlc_http_msg*) ;
 struct vlc_http_msg* FUNC_2 (struct vlc_http_resource*,scalar_t__*) ;

int FUNC_3(struct vlc_http_resource *VAR_0, uintmax_t VAR_1)
{
    struct vlc_http_msg *VAR_2 = FUNC_2(VAR_0, &VAR_1);
    if (VAR_2 == ((void*)0))
        return -1;

    struct vlc_http_file *VAR_3 = (struct vlc_http_file *)VAR_0;

    int VAR_4 = FUNC_1(VAR_2);
    if (VAR_0->response != ((void*)0))
    {




        if (VAR_4 != 206 && VAR_4 != 416 && (VAR_1 != 0 || VAR_4 >= 300))
        {
            FUNC_0(VAR_2);
            return -1;
        }
        FUNC_0(VAR_0->response);
    }

    VAR_0->response = VAR_2;
    VAR_3->offset = VAR_1;
    return 0;
}

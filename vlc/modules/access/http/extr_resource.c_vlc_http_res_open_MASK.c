
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlc_http_resource {int negotiate; TYPE_1__* cbs; int path; int host; int manager; int port; int secure; } ;
struct vlc_http_msg {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* response_validate ) (struct vlc_http_resource*,struct vlc_http_msg*,void*) ;} ;


 scalar_t__ FUNC_0 (struct vlc_http_resource*,struct vlc_http_msg*,void*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct vlc_http_msg* FUNC_3 (int ,int ,int ,int ,struct vlc_http_msg*) ;
 int FUNC_4 (struct vlc_http_msg*) ;
 int FUNC_5 (struct vlc_http_msg*,int ,int ,int ) ;
 struct vlc_http_msg* FUNC_6 (struct vlc_http_msg*) ;
 int FUNC_7 (struct vlc_http_msg*) ;
 struct vlc_http_msg* FUNC_8 (struct vlc_http_resource*,void*) ;

struct vlc_http_msg *FUNC_9(struct vlc_http_resource *VAR_0,
                                       void *VAR_1)
{
    struct vlc_http_msg *VAR_2;
retry:
    VAR_2 = FUNC_8(VAR_0, VAR_1);
    if (FUNC_1(VAR_2 == ((void*)0)))
        return ((void*)0);

    struct vlc_http_msg *VAR_3 = FUNC_3(VAR_0->manager, VAR_0->secure,
                                                    VAR_0->host, VAR_0->port, VAR_2);
    FUNC_4(VAR_2);

    VAR_3 = FUNC_6(VAR_3);
    if (VAR_3 == ((void*)0))
        return ((void*)0);

    FUNC_5(VAR_3, FUNC_2(VAR_0->manager),
                             VAR_0->host, VAR_0->path);

    int VAR_4 = FUNC_7(VAR_3);
    if (VAR_4 < 200 || VAR_4 >= 599)
        goto fail;

    if (VAR_4 == 406 && VAR_0->negotiate)
    {







        FUNC_4(VAR_3);
        VAR_0->negotiate = 0;
        goto retry;
    }

    if (VAR_0->cbs->response_validate(VAR_0, VAR_3, VAR_1))
        goto fail;

    return VAR_3;
fail:
    FUNC_4(VAR_3);
    return ((void*)0);
}

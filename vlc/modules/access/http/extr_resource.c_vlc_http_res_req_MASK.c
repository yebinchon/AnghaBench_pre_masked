
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlc_http_resource {char const* referrer; TYPE_1__* cbs; int manager; int * agent; int * password; int * username; scalar_t__ negotiate; int path; int authority; scalar_t__ secure; } ;
struct vlc_http_msg {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* request_format ) (struct vlc_http_resource const*,struct vlc_http_msg*,void*) ;} ;


 int FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (struct vlc_http_resource const*,struct vlc_http_msg*,void*) ;
 scalar_t__ FUNC_2 (int ) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct vlc_http_msg*,int *) ;
 int FUNC_6 (struct vlc_http_msg*,int ) ;
 int FUNC_7 (struct vlc_http_msg*,int,int *,int *) ;
 int FUNC_8 (struct vlc_http_msg*,char*,char*,...) ;
 int FUNC_9 (struct vlc_http_msg*) ;
 struct vlc_http_msg* FUNC_10 (char*,char*,int ,int ) ;

__attribute__((used)) static struct vlc_http_msg *
FUNC_11(const struct vlc_http_resource *VAR_0, void *VAR_1)
{
    struct vlc_http_msg *VAR_2;

    VAR_2 = FUNC_10("GET", VAR_0->secure ? "https" : "http",
                              VAR_0->authority, VAR_0->path);
    if (FUNC_2(VAR_2 == ((void*)0)))
        return ((void*)0);


    FUNC_8(VAR_2, "Accept", "*/*");

    if (VAR_0->negotiate)
    {
        const char *VAR_3 = FUNC_3("C");
        if (!FUNC_0(VAR_3, "C"))
            VAR_3 = "en_US";
        FUNC_8(VAR_2, "Accept-Language", "%s", VAR_3);
    }


    if (VAR_0->username != ((void*)0) && VAR_0->password != ((void*)0))
        FUNC_7(VAR_2, 0, VAR_0->username, VAR_0->password);


    if (VAR_0->agent != ((void*)0))
        FUNC_5(VAR_2, VAR_0->agent);

    if (VAR_0->referrer != ((void*)0))
        FUNC_8(VAR_2, "Referer", "%s", VAR_0->referrer);

    FUNC_6(VAR_2, FUNC_4(VAR_0->manager));



    if (VAR_0->cbs->request_format(VAR_0, VAR_2, VAR_1))
    {
        FUNC_9(VAR_2);
        return ((void*)0);
    }

    return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int logger; } ;
typedef TYPE_1__ vlc_object_t ;
struct vlc_http_mgr {int * conn; struct vlc_http_cookie_jar_t* jar; int * creds; TYPE_1__* obj; int logger; } ;
struct vlc_http_cookie_jar_t {int dummy; } ;


 struct vlc_http_mgr* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

struct vlc_http_mgr *FUNC_2(vlc_object_t *VAR_0,
                                         struct vlc_http_cookie_jar_t *VAR_1)
{
    struct vlc_http_mgr *VAR_2 = FUNC_0(sizeof (*VAR_2));
    if (FUNC_1(VAR_2 == ((void*)0)))
        return ((void*)0);

    VAR_2->logger = VAR_0->logger;
    VAR_2->obj = VAR_0;
    VAR_2->creds = ((void*)0);
    VAR_2->jar = VAR_1;
    VAR_2->conn = ((void*)0);
    return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dst; } ;
typedef TYPE_1__ httpd_redirect_t ;
struct TYPE_9__ {int i_version; int i_status; unsigned char* p_body; int i_body; int i_type; int i_proto; } ;
typedef TYPE_2__ httpd_message_t ;
struct TYPE_10__ {int query; } ;
typedef TYPE_3__ httpd_client_t ;
typedef int httpd_callback_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**,int,int ) ;
 int FUNC_1 (TYPE_2__*,char*,char*,...) ;
 int * FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3(httpd_callback_sys_t *VAR_3,
                                   httpd_client_t *VAR_4, httpd_message_t *VAR_5,
                                   const httpd_message_t *VAR_6)
{
    httpd_redirect_t *VAR_7 = (httpd_redirect_t*)VAR_3;
    char *VAR_8;
    (void)VAR_4;

    if (!VAR_5 || !VAR_6)
        return VAR_2;

    VAR_5->i_proto = VAR_1;
    VAR_5->i_version= 1;
    VAR_5->i_type = VAR_0;
    VAR_5->i_status = 301;

    VAR_5->i_body = FUNC_0 (&VAR_8, 301, VAR_7->dst);
    VAR_5->p_body = (unsigned char *)VAR_8;


    FUNC_1(VAR_5, "Location", "%s", VAR_7->dst);

    FUNC_1(VAR_5, "Content-Length", "%d", VAR_5->i_body);

    if (FUNC_2(&VAR_4->query, "Connection") != ((void*)0))
        FUNC_1(VAR_5, "Connection", "close");

    return VAR_2;
}

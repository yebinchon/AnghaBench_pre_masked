
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {size_t i_body; int * p_body; int i_type; int psz_url; int * psz_args; scalar_t__ i_status; int i_proto; } ;
typedef TYPE_1__ httpd_message_t ;
struct TYPE_7__ {int p_sys; int (* pf_fill ) (int ,TYPE_2__*,int ,int *,int ,int *,size_t,char*,int *,int **,size_t*) ;} ;
typedef TYPE_2__ httpd_handler_t ;
typedef int httpd_client_t ;
typedef int httpd_callback_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int *) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,int,char const*) ;
 char* FUNC_5 (char*,char) ;
 size_t FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,char**,int ) ;
 int FUNC_9 (int ,TYPE_2__*,int ,int *,int ,int *,size_t,char*,int *,int **,size_t*) ;
 scalar_t__ FUNC_10 (int) ;
 int * FUNC_11 (int *,size_t) ;

__attribute__((used)) static int
FUNC_12(httpd_callback_sys_t *VAR_5, httpd_client_t *VAR_6,
                       httpd_message_t *VAR_7, const httpd_message_t *VAR_8)
{
    httpd_handler_t *VAR_9 = (httpd_handler_t*)VAR_5;
    char VAR_10[VAR_3];

    if (!VAR_7 || !VAR_8)
        return VAR_4;

    VAR_7->i_proto = VAR_2;
    VAR_7->i_type = VAR_0;


    VAR_7->i_status = 0;

    if (!FUNC_1(VAR_6, VAR_10, ((void*)0)))
        *VAR_10 = '\0';

    uint8_t *VAR_11 = VAR_8->psz_args;
    VAR_9->pf_fill(VAR_9->p_sys, VAR_9, VAR_8->psz_url, VAR_11,
                      VAR_8->i_type, VAR_8->p_body, VAR_8->i_body,
                      VAR_10, ((void*)0),
                      &VAR_7->p_body, &VAR_7->i_body);

    if (VAR_8->i_type == VAR_1) {
        char *VAR_12 = (char *)VAR_7->p_body;


        while ((VAR_12 = FUNC_5(VAR_12, '\r')))
            if (VAR_12[1] == '\n' && VAR_12[2] == '\r' && VAR_12[3] == '\n')
                break;

        if (VAR_12) {
            VAR_12[4] = '\0';
            VAR_7->i_body = FUNC_6((char*)VAR_7->p_body) + 1;
            VAR_7->p_body = FUNC_11(VAR_7->p_body, VAR_7->i_body);
        }
    }

    if (FUNC_7((char *)VAR_7->p_body, "HTTP/1.", 7)) {
        int VAR_13, VAR_14;
        char *VAR_15, *VAR_16;
        const char *VAR_17;

        if (!FUNC_7((char *)VAR_7->p_body, "Status: ", 8)) {

            VAR_13 = FUNC_8((char *)&VAR_7->p_body[8], &VAR_15, 0);
            if (*VAR_15 == '\r' || *VAR_15 == '\n') VAR_15++;
            if (*VAR_15 == '\n') VAR_15++;
            VAR_14 = VAR_7->i_body - (VAR_15 - (char *)VAR_7->p_body);
        } else {
            VAR_13 = 200;
            VAR_15 = (char *)VAR_7->p_body;
            VAR_14 = VAR_7->i_body;
        }

        VAR_17 = FUNC_2(VAR_13);
        VAR_7->i_body = sizeof("HTTP/1.0 xxx \r\n")
                        + FUNC_6(VAR_17) + VAR_14 - 1;
        VAR_16 = (char *)FUNC_10(VAR_7->i_body + 1);
        FUNC_4(VAR_16, "HTTP/1.0 %03d %s\r\n", VAR_13, VAR_17);
        FUNC_3(&VAR_16[FUNC_6(VAR_16)], VAR_15, VAR_14);
        FUNC_0(VAR_7->p_body);
        VAR_7->p_body = (uint8_t *)VAR_16;
    }

    return VAR_4;
}

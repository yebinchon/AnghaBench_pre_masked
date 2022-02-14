
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_15__ {char* data; size_t len; } ;
struct TYPE_18__ {int default_port; TYPE_3__* addrs; TYPE_2__ url; scalar_t__ err; } ;
typedef TYPE_5__ ngx_url_t ;
typedef size_t ngx_uint_t ;
struct TYPE_17__ {char* data; size_t len; } ;
struct TYPE_16__ {int * sockaddr; } ;
struct TYPE_19__ {size_t facility; size_t severity; int nohostname; TYPE_4__ tag; TYPE_3__ server; } ;
typedef TYPE_6__ ngx_syslog_peer_t ;
struct TYPE_20__ {char* data; int len; } ;
typedef TYPE_7__ ngx_str_t ;
struct TYPE_21__ {int pool; TYPE_1__* args; } ;
typedef TYPE_8__ ngx_conf_t ;
struct TYPE_14__ {TYPE_7__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int ** VAR_5 ;
 int FUNC_0 (int ,TYPE_8__*,int ,char*,...) ;
 int FUNC_1 (TYPE_5__*,int) ;
 scalar_t__ FUNC_2 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char*,int *) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 char FUNC_6 (char) ;
 int ** VAR_6 ;

__attribute__((used)) static char *
FUNC_7(ngx_conf_t *VAR_7, ngx_syslog_peer_t *VAR_8)
{
    u_char *VAR_9, *VAR_10, VAR_11;
    size_t VAR_12;
    ngx_str_t *VAR_13;
    ngx_url_t VAR_14;
    ngx_uint_t VAR_15;

    VAR_13 = VAR_7->args->elts;

    VAR_9 = VAR_13[1].data + sizeof("syslog:") - 1;

    for ( ;; ) {
        VAR_10 = (u_char *) FUNC_3(VAR_9, ',');

        if (VAR_10 != ((void*)0)) {
            VAR_12 = VAR_10 - VAR_9;
            *VAR_10 = '\0';

        } else {
            VAR_12 = VAR_13[1].data + VAR_13[1].len - VAR_9;
        }

        if (FUNC_5(VAR_9, "server=", 7) == 0) {

            if (VAR_8->server.sockaddr != ((void*)0)) {
                FUNC_0(VAR_3, VAR_7, 0,
                                   "duplicate syslog \"server\"");
                return VAR_0;
            }

            FUNC_1(&VAR_14, sizeof(ngx_url_t));

            VAR_14.url.data = VAR_9 + 7;
            VAR_14.url.len = VAR_12 - 7;
            VAR_14.default_port = 514;

            if (FUNC_2(VAR_7->pool, &VAR_14) != VAR_4) {
                if (VAR_14.err) {
                    FUNC_0(VAR_3, VAR_7, 0,
                                       "%s in syslog server \"%V\"",
                                       VAR_14.err, &VAR_14.url);
                }

                return VAR_0;
            }

            VAR_8->server = VAR_14.addrs[0];

        } else if (FUNC_5(VAR_9, "facility=", 9) == 0) {

            if (VAR_8->facility != VAR_2) {
                FUNC_0(VAR_3, VAR_7, 0,
                                   "duplicate syslog \"facility\"");
                return VAR_0;
            }

            for (VAR_15 = 0; VAR_5[VAR_15] != ((void*)0); VAR_15++) {

                if (FUNC_4(VAR_9 + 9, VAR_5[VAR_15]) == 0) {
                    VAR_8->facility = VAR_15;
                    goto next;
                }
            }

            FUNC_0(VAR_3, VAR_7, 0,
                               "unknown syslog facility \"%s\"", VAR_9 + 9);
            return VAR_0;

        } else if (FUNC_5(VAR_9, "severity=", 9) == 0) {

            if (VAR_8->severity != VAR_2) {
                FUNC_0(VAR_3, VAR_7, 0,
                                   "duplicate syslog \"severity\"");
                return VAR_0;
            }

            for (VAR_15 = 0; VAR_6[VAR_15] != ((void*)0); VAR_15++) {

                if (FUNC_4(VAR_9 + 9, VAR_6[VAR_15]) == 0) {
                    VAR_8->severity = VAR_15;
                    goto next;
                }
            }

            FUNC_0(VAR_3, VAR_7, 0,
                               "unknown syslog severity \"%s\"", VAR_9 + 9);
            return VAR_0;

        } else if (FUNC_5(VAR_9, "tag=", 4) == 0) {

            if (VAR_8->tag.data != ((void*)0)) {
                FUNC_0(VAR_3, VAR_7, 0,
                                   "duplicate syslog \"tag\"");
                return VAR_0;
            }





            if (VAR_12 - 4 > 32) {
                FUNC_0(VAR_3, VAR_7, 0,
                                   "syslog tag length exceeds 32");
                return VAR_0;
            }

            for (VAR_15 = 4; VAR_15 < VAR_12; VAR_15++) {
                VAR_11 = FUNC_6(VAR_9[VAR_15]);

                if (VAR_11 < '0' || (VAR_11 > '9' && VAR_11 < 'a' && VAR_11 != '_') || VAR_11 > 'z') {
                    FUNC_0(VAR_3, VAR_7, 0,
                                       "syslog \"tag\" only allows "
                                       "alphanumeric characters "
                                       "and underscore");
                    return VAR_0;
                }
            }

            VAR_8->tag.data = VAR_9 + 4;
            VAR_8->tag.len = VAR_12 - 4;

        } else if (VAR_12 == 10 && FUNC_5(VAR_9, "nohostname", 10) == 0) {
            VAR_8->nohostname = 1;

        } else {
            FUNC_0(VAR_3, VAR_7, 0,
                               "unknown syslog parameter \"%s\"", VAR_9);
            return VAR_0;
        }

    next:

        if (VAR_10 == ((void*)0)) {
            break;
        }

        VAR_9 = VAR_10 + 1;
    }

    return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct passwd {scalar_t__ pw_uid; } ;
struct group {int gr_gid; } ;
struct TYPE_8__ {char* data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_9__ {scalar_t__ user; char* username; int group; } ;
typedef TYPE_3__ ngx_core_conf_t ;
struct TYPE_10__ {TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_7__ {int nelts; TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 struct group* FUNC_1 (char*) ;
 struct passwd* FUNC_2 (char const*) ;
 int FUNC_3 (int ,TYPE_4__*,int ,char*,...) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_6, ngx_command_t *VAR_7, void *VAR_8)
{
    ngx_core_conf_t *VAR_9 = VAR_8;

    char *VAR_10;
    struct passwd *VAR_11;
    struct group *VAR_12;
    ngx_str_t *VAR_13;

    if (VAR_9->user != (uid_t) VAR_2) {
        return "is duplicate";
    }

    if (FUNC_0() != 0) {
        FUNC_3(VAR_4, VAR_6, 0,
                           "the \"user\" directive makes sense only "
                           "if the master process runs "
                           "with super-user privileges, ignored");
        return VAR_1;
    }

    VAR_13 = VAR_6->args->elts;

    VAR_9->username = (char *) VAR_13[1].data;

    FUNC_4(0);
    VAR_11 = FUNC_2((const char *) VAR_13[1].data);
    if (VAR_11 == ((void*)0)) {
        FUNC_3(VAR_3, VAR_6, VAR_5,
                           "getpwnam(\"%s\") failed", VAR_13[1].data);
        return VAR_0;
    }

    VAR_9->user = VAR_11->pw_uid;

    VAR_10 = (char *) ((VAR_6->args->nelts == 2) ? VAR_13[1].data : VAR_13[2].data);

    FUNC_4(0);
    VAR_12 = FUNC_1(VAR_10);
    if (VAR_12 == ((void*)0)) {
        FUNC_3(VAR_3, VAR_6, VAR_5,
                           "getgrnam(\"%s\") failed", VAR_10);
        return VAR_0;
    }

    VAR_9->group = VAR_12->gr_gid;

    return VAR_1;


}

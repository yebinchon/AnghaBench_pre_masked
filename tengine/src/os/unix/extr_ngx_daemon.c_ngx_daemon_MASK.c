
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_log_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *,int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;

ngx_int_t
FUNC_9(ngx_log_t *VAR_10)
{
    int VAR_11;

    switch (FUNC_3()) {
    case -1:
        FUNC_5(VAR_1, VAR_10, VAR_7, "fork() failed");
        return VAR_0;

    case 0:
        break;

    default:
        FUNC_2(0);
    }

    VAR_8 = VAR_9;
    VAR_9 = FUNC_4();

    if (FUNC_7() == -1) {
        FUNC_5(VAR_1, VAR_10, VAR_7, "setsid() failed");
        return VAR_0;
    }

    FUNC_8(0);

    VAR_11 = FUNC_6("/dev/null", VAR_3);
    if (VAR_11 == -1) {
        FUNC_5(VAR_1, VAR_10, VAR_7,
                      "open(\"/dev/null\") failed");
        return VAR_0;
    }

    if (FUNC_1(VAR_11, VAR_5) == -1) {
        FUNC_5(VAR_1, VAR_10, VAR_7, "dup2(STDIN) failed");
        return VAR_0;
    }

    if (FUNC_1(VAR_11, VAR_6) == -1) {
        FUNC_5(VAR_1, VAR_10, VAR_7, "dup2(STDOUT) failed");
        return VAR_0;
    }
    if (VAR_11 > VAR_4) {
        if (FUNC_0(VAR_11) == -1) {
            FUNC_5(VAR_1, VAR_10, VAR_7, "close() failed");
            return VAR_0;
        }
    }

    return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* data; int len; } ;
struct server {TYPE_1__ pname; } ;
struct context {int evb; } ;
struct conn {scalar_t__ err; scalar_t__ sd; int connecting; int connected; int addrlen; int addr; int family; scalar_t__ done; int proxy; int client; } ;
typedef scalar_t__ rstatus_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int ,struct conn*) ;
 int FUNC_3 (int ,char*,scalar_t__,char*,...) ;
 int FUNC_4 (char*,scalar_t__,char*,char*,...) ;
 int FUNC_5 (char*,scalar_t__,int ,char*,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (scalar_t__) ;

rstatus_t
FUNC_10(struct context *VAR_8, struct server *VAR_9, struct conn *VAR_10)
{
    rstatus_t VAR_11;

    FUNC_0(!VAR_10->client && !VAR_10->proxy);

    if (VAR_10->err) {
      FUNC_0(VAR_10->done && VAR_10->sd < 0);
      VAR_7 = VAR_10->err;
      return VAR_4;
    }

    if (VAR_10->sd > 0) {

        return VAR_5;
    }

    FUNC_3(VAR_3, "connect to server '%.*s'", VAR_9->pname.len,
              VAR_9->pname.data);

    VAR_10->sd = FUNC_8(VAR_10->family, VAR_6, 0);
    if (VAR_10->sd < 0) {
        FUNC_4("socket for server '%.*s' failed: %s", VAR_9->pname.len,
                  VAR_9->pname.data, FUNC_9(VAR_7));
        VAR_11 = VAR_4;
        goto error;
    }

    VAR_11 = FUNC_6(VAR_10->sd);
    if (VAR_11 != VAR_5) {
        FUNC_4("set nonblock on s %d for server '%.*s' failed: %s",
                  VAR_10->sd, VAR_9->pname.len, VAR_9->pname.data,
                  FUNC_9(VAR_7));
        goto error;
    }

    if (VAR_9->pname.data[0] != '/') {
        VAR_11 = FUNC_7(VAR_10->sd);
        if (VAR_11 != VAR_5) {
            FUNC_5("set tcpnodelay on s %d for server '%.*s' failed, ignored: %s",
                     VAR_10->sd, VAR_9->pname.len, VAR_9->pname.data,
                     FUNC_9(VAR_7));
        }
    }

    VAR_11 = FUNC_2(VAR_8->evb, VAR_10);
    if (VAR_11 != VAR_5) {
        FUNC_4("event add conn s %d for server '%.*s' failed: %s",
                  VAR_10->sd, VAR_9->pname.len, VAR_9->pname.data,
                  FUNC_9(VAR_7));
        goto error;
    }

    FUNC_0(!VAR_10->connecting && !VAR_10->connected);

    VAR_11 = FUNC_1(VAR_10->sd, VAR_10->addr, VAR_10->addrlen);
    if (VAR_11 != VAR_5) {
        if (VAR_7 == VAR_0) {
            VAR_10->connecting = 1;
            FUNC_3(VAR_1, "connecting on s %d to server '%.*s'",
                      VAR_10->sd, VAR_9->pname.len, VAR_9->pname.data);
            return VAR_5;
        }

        FUNC_4("connect on s %d to server '%.*s' failed: %s", VAR_10->sd,
                  VAR_9->pname.len, VAR_9->pname.data, FUNC_9(VAR_7));

        goto error;
    }

    FUNC_0(!VAR_10->connecting);
    VAR_10->connected = 1;
    FUNC_3(VAR_2, "connected on s %d to server '%.*s'", VAR_10->sd,
              VAR_9->pname.len, VAR_9->pname.data);

    return VAR_5;

error:
    VAR_10->err = VAR_7;
    return VAR_11;
}

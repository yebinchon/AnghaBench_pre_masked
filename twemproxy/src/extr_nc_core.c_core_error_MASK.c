
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {int dummy; } ;
struct conn {int err; int sd; scalar_t__ proxy; scalar_t__ client; } ;
typedef scalar_t__ rstatus_t ;


 int FUNC_0 (struct context*,struct conn*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct context *VAR_1, struct conn *VAR_2)
{
    rstatus_t VAR_3;
    char VAR_4 = VAR_2->client ? 'c' : (VAR_2->proxy ? 'p' : 's');

    VAR_3 = FUNC_2(VAR_2->sd);
    if (VAR_3 < 0) {
        FUNC_1("get soerr on %c %d failed, ignored: %s", VAR_4, VAR_2->sd,
                  FUNC_3(VAR_0));
    }
    VAR_2->err = VAR_0;

    FUNC_0(VAR_1, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {int dummy; } ;
struct conn {scalar_t__ (* recv ) (struct context*,struct conn*) ;int sd; scalar_t__ proxy; scalar_t__ client; } ;
typedef scalar_t__ rstatus_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct context*,struct conn*) ;

__attribute__((used)) static rstatus_t
FUNC_3(struct context *VAR_3, struct conn *VAR_4)
{
    rstatus_t VAR_5;

    VAR_5 = VAR_4->recv(VAR_3, VAR_4);
    if (VAR_5 != VAR_1) {
        FUNC_0(VAR_0, "recv on %c %d failed: %s",
                  VAR_4->client ? 'c' : (VAR_4->proxy ? 'p' : 's'), VAR_4->sd,
                  FUNC_1(VAR_2));
    }

    return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int dummy; } ;
struct conn {int err; int redis; int proxy; scalar_t__ client; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct msg* FUNC_1 (struct conn*,int,int ) ;

struct msg *
FUNC_2(struct conn *VAR_1)
{
    struct msg *VAR_2;

    FUNC_0(VAR_1->client && !VAR_1->proxy);

    VAR_2 = FUNC_1(VAR_1, 1, VAR_1->redis);
    if (VAR_2 == ((void*)0)) {
        VAR_1->err = VAR_0;
    }
    return VAR_2;
}

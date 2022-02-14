
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int data; } ;
struct stats {int sd; TYPE_1__ buf; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ rstatus_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int *,int *) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int,int ) ;
 int FUNC_3 (char*,int,int ) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 scalar_t__ FUNC_5 (struct stats*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static rstatus_t
FUNC_7(struct stats *VAR_4)
{
    rstatus_t VAR_5;
    ssize_t VAR_6;
    int VAR_7;

    VAR_5 = FUNC_5(VAR_4);
    if (VAR_5 != VAR_2) {
        return VAR_5;
    }

    VAR_7 = FUNC_0(VAR_4->sd, ((void*)0), ((void*)0));
    if (VAR_7 < 0) {
        FUNC_3("accept on m %d failed: %s", VAR_4->sd, FUNC_6(VAR_3));
        return VAR_1;
    }

    FUNC_2(VAR_0, "send stats on sd %d %d bytes", VAR_7, VAR_4->buf.len);

    VAR_6 = FUNC_4(VAR_7, VAR_4->buf.data, VAR_4->buf.len);
    if (VAR_6 < 0) {
        FUNC_3("send stats on sd %d failed: %s", VAR_7, FUNC_6(VAR_3));
        FUNC_1(VAR_7);
        return VAR_1;
    }

    FUNC_1(VAR_7);

    return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conn {scalar_t__ sd; scalar_t__ client; int * owner; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct conn*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,struct conn*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_3(struct conn *VAR_6)
{
    FUNC_0(VAR_6->sd < 0);
    FUNC_0(VAR_6->owner == ((void*)0));

    FUNC_2(VAR_0, "put conn %p", VAR_6);

    VAR_5++;
    FUNC_1(&VAR_2, VAR_6, VAR_1);

    if (VAR_6->client) {
        VAR_3--;
    }
    VAR_4--;
}

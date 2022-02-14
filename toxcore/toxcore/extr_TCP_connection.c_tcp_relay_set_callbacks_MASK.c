
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int custom_uint; int * custom_object; } ;
struct TYPE_13__ {TYPE_2__* connection; } ;
typedef TYPE_1__ TCP_con ;
typedef int TCP_Connections ;
typedef TYPE_2__ TCP_Client_Connection ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_2__*,int *,int *) ;
 int FUNC_2 (TYPE_2__*,int *,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int *,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(TCP_Connections *VAR_5, int VAR_6)
{
    TCP_con *VAR_7 = FUNC_0(VAR_5, VAR_6);

    if (!VAR_7)
        return -1;

    TCP_Client_Connection *VAR_8 = VAR_7->connection;

    VAR_8->custom_object = VAR_5;
    VAR_8->custom_uint = VAR_6;
    FUNC_1(VAR_8, &VAR_1, VAR_5);
    FUNC_4(VAR_8, &VAR_3, VAR_8);
    FUNC_5(VAR_8, &VAR_4, VAR_8);
    FUNC_3(VAR_8, &VAR_0, VAR_8);
    FUNC_2(VAR_8, &VAR_2, VAR_8);

    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int exists; int value; } ;
struct TYPE_6__ {TYPE_1__ request; } ;
typedef int MSIRequest ;
typedef TYPE_2__ MSIMessage ;


 int FUNC_0 (TYPE_2__*,int ,int) ;

void FUNC_1(MSIMessage *VAR_0, MSIRequest VAR_1)
{
    FUNC_0(VAR_0, 0, sizeof(*VAR_0));
    VAR_0->request.exists = 1;
    VAR_0->request.value = VAR_1;
}

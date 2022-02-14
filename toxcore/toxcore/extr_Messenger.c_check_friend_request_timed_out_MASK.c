
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
struct TYPE_6__ {scalar_t__ friendrequest_lastsent; int friendrequest_timeout; } ;
struct TYPE_5__ {TYPE_2__* friendlist; } ;
typedef TYPE_1__ Messenger ;
typedef TYPE_2__ Friend ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,size_t,int ) ;

__attribute__((used)) static void FUNC_1(Messenger *VAR_1, uint32_t VAR_2, uint64_t VAR_3)
{
    Friend *VAR_4 = &VAR_1->friendlist[VAR_2];

    if (VAR_4->friendrequest_lastsent + VAR_4->friendrequest_timeout < VAR_3) {
        FUNC_0(VAR_1, VAR_2, VAR_0);



        VAR_4->friendrequest_timeout *= 2;
    }
}

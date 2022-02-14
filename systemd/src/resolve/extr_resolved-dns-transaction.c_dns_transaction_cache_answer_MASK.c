
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int sender; int family; } ;
struct TYPE_9__ {TYPE_6__* received; int answer_nsec_ttl; int answer_authenticated; int answer; int answer_rcode; int key; TYPE_2__* scope; } ;
struct TYPE_8__ {TYPE_1__* manager; int cache; int protocol; } ;
struct TYPE_7__ {scalar_t__ enable_cache; } ;
typedef TYPE_3__ DnsTransaction ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,scalar_t__,int ,int ,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_4(DnsTransaction *VAR_3) {
        FUNC_2(VAR_3);



        if (!FUNC_1(VAR_3->scope->protocol, VAR_1, VAR_2))
                return;


        if (VAR_3->scope->manager->enable_cache == VAR_0)
                return;





        if (!FUNC_0(VAR_3->received))
                return;

        FUNC_3(&VAR_3->scope->cache,
                      VAR_3->scope->manager->enable_cache,
                      VAR_3->key,
                      VAR_3->answer_rcode,
                      VAR_3->answer,
                      VAR_3->answer_authenticated,
                      VAR_3->answer_nsec_ttl,
                      0,
                      VAR_3->received->family,
                      &VAR_3->received->sender);
}

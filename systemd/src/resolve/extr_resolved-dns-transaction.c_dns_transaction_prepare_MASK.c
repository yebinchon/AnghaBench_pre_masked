
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int usec_t ;
struct TYPE_19__ {scalar_t__ type; } ;
struct TYPE_18__ {scalar_t__ n_attempts; scalar_t__ answer_rcode; int answer_authenticated; void* answer_source; int answer; int clamp_ttl; TYPE_3__* key; TYPE_10__* scope; int notify_zone_items; int start_usec; scalar_t__ tried_stream; } ;
struct TYPE_17__ {int trust_anchor; } ;
struct TYPE_16__ {scalar_t__ protocol; scalar_t__ dnssec_mode; int cache; int zone; TYPE_1__* manager; } ;
typedef TYPE_2__ DnsTransaction ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_3__*,int ,scalar_t__*,int *,int*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_10__*) ;
 int FUNC_7 (TYPE_10__*) ;
 int FUNC_8 (TYPE_10__*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int *,TYPE_3__*,int *) ;
 int FUNC_14 (int *,TYPE_3__*,int ,int *,int *,int *) ;
 scalar_t__ FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(DnsTransaction *VAR_13, usec_t VAR_14) {
        int VAR_15;

        FUNC_1(VAR_13);

        FUNC_12(VAR_13);

        if (!FUNC_8(VAR_13->scope)) {
                FUNC_9(VAR_13, VAR_6);
                return 0;
        }

        if (VAR_13->n_attempts >= FUNC_0(VAR_13->scope->protocol)) {
                FUNC_9(VAR_13, VAR_4);
                return 0;
        }

        if (VAR_13->scope->protocol == VAR_2 && VAR_13->tried_stream) {


                FUNC_9(VAR_13, VAR_4);
                return 0;
        }

        VAR_13->n_attempts++;
        VAR_13->start_usec = VAR_14;

        FUNC_11(VAR_13);
        FUNC_10(VAR_13);


        if (VAR_13->scope->protocol == VAR_1) {
                VAR_15 = FUNC_13(&VAR_13->scope->manager->trust_anchor, VAR_13->key, &VAR_13->answer);
                if (VAR_15 < 0)
                        return VAR_15;
                if (VAR_15 > 0) {
                        VAR_13->answer_rcode = VAR_3;
                        VAR_13->answer_source = VAR_10;
                        VAR_13->answer_authenticated = 1;
                        FUNC_9(VAR_13, VAR_9);
                        return 0;
                }

                if (FUNC_4(FUNC_5(VAR_13->key)) &&
                    VAR_13->key->type == VAR_12) {







                        if (VAR_13->scope->dnssec_mode == VAR_0) {







                                VAR_13->answer_rcode = VAR_3;
                                VAR_13->answer_source = VAR_10;
                                VAR_13->answer_authenticated = 0;
                                FUNC_9(VAR_13, VAR_9);
                        } else







                                FUNC_9(VAR_13, VAR_7);

                        return 0;
                }
        }



        if (FUNC_15(VAR_13->notify_zone_items)) {

                VAR_15 = FUNC_14(&VAR_13->scope->zone, VAR_13->key, FUNC_7(VAR_13->scope), &VAR_13->answer, ((void*)0), ((void*)0));
                if (VAR_15 < 0)
                        return VAR_15;
                if (VAR_15 > 0) {
                        VAR_13->answer_rcode = VAR_3;
                        VAR_13->answer_source = VAR_11;
                        VAR_13->answer_authenticated = 1;
                        FUNC_9(VAR_13, VAR_9);
                        return 0;
                }
        }



        if (FUNC_15(VAR_13->notify_zone_items)) {




                (void) FUNC_6(VAR_13->scope);


                FUNC_3(&VAR_13->scope->cache);

                VAR_15 = FUNC_2(&VAR_13->scope->cache, VAR_13->key, VAR_13->clamp_ttl, &VAR_13->answer_rcode, &VAR_13->answer, &VAR_13->answer_authenticated);
                if (VAR_15 < 0)
                        return VAR_15;
                if (VAR_15 > 0) {
                        VAR_13->answer_source = VAR_5;
                        if (VAR_13->answer_rcode == VAR_3)
                                FUNC_9(VAR_13, VAR_9);
                        else
                                FUNC_9(VAR_13, VAR_8);
                        return 0;
                }
        }

        return 1;
}

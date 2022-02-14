
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_21__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_16__ ;
typedef struct TYPE_28__ TYPE_15__ ;
typedef struct TYPE_27__ TYPE_14__ ;
typedef struct TYPE_26__ TYPE_13__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct TYPE_39__ {int key; } ;
struct TYPE_38__ {int fingerprint; } ;
struct TYPE_37__ {int digest; } ;
struct TYPE_36__ {int exchange; } ;
struct TYPE_35__ {int rname; int mname; } ;
struct TYPE_34__ {int items; } ;
struct TYPE_33__ {int os; int cpu; } ;
struct TYPE_32__ {int name; } ;
struct TYPE_31__ {int type; } ;
struct TYPE_30__ {int name; } ;
struct TYPE_28__ {int data; } ;
struct TYPE_27__ {int value; int tag; } ;
struct TYPE_26__ {int data; } ;
struct TYPE_25__ {int types; int salt; int next_hashed_name; } ;
struct TYPE_24__ {int types; int next_domain_name; } ;
struct TYPE_23__ {int signature; int signer; } ;
struct TYPE_29__ {int to_string; TYPE_21__* key; int wire_format; TYPE_15__ generic; scalar_t__ unparseable; TYPE_14__ caa; TYPE_13__ tlsa; TYPE_12__ nsec3; TYPE_11__ nsec; TYPE_10__ rrsig; TYPE_9__ dnskey; TYPE_8__ sshfp; TYPE_7__ ds; TYPE_6__ mx; TYPE_5__ soa; TYPE_4__ txt; TYPE_3__ hinfo; TYPE_2__ ptr; TYPE_1__ srv; } ;
typedef TYPE_16__ DnsResourceRecord ;
 int FUNC_0 (TYPE_16__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_21__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_16__* FUNC_5 (TYPE_16__*) ;

__attribute__((used)) static DnsResourceRecord* FUNC_6(DnsResourceRecord *VAR_0) {
        FUNC_0(VAR_0);

        if (VAR_0->key) {
                switch(VAR_0->key->type) {

                case 131:
                        FUNC_4(VAR_0->srv.name);
                        break;

                case 135:
                case 139:
                case 146:
                case 145:
                        FUNC_4(VAR_0->ptr.name);
                        break;

                case 142:
                        FUNC_4(VAR_0->hinfo.cpu);
                        FUNC_4(VAR_0->hinfo.os);
                        break;

                case 128:
                case 132:
                        FUNC_3(VAR_0->txt.items);
                        break;

                case 133:
                        FUNC_4(VAR_0->soa.mname);
                        FUNC_4(VAR_0->soa.rname);
                        break;

                case 140:
                        FUNC_4(VAR_0->mx.exchange);
                        break;

                case 143:
                        FUNC_4(VAR_0->ds.digest);
                        break;

                case 130:
                        FUNC_4(VAR_0->sshfp.fingerprint);
                        break;

                case 144:
                        FUNC_4(VAR_0->dnskey.key);
                        break;

                case 134:
                        FUNC_4(VAR_0->rrsig.signer);
                        FUNC_4(VAR_0->rrsig.signature);
                        break;

                case 138:
                        FUNC_4(VAR_0->nsec.next_domain_name);
                        FUNC_1(VAR_0->nsec.types);
                        break;

                case 137:
                        FUNC_4(VAR_0->nsec3.next_hashed_name);
                        FUNC_4(VAR_0->nsec3.salt);
                        FUNC_1(VAR_0->nsec3.types);
                        break;

                case 141:
                case 149:
                case 148:
                        break;

                case 129:
                        FUNC_4(VAR_0->tlsa.data);
                        break;

                case 147:
                        FUNC_4(VAR_0->caa.tag);
                        FUNC_4(VAR_0->caa.value);
                        break;

                case 136:
                default:
                        if (!VAR_0->unparseable)
                                FUNC_4(VAR_0->generic.data);
                }

                if (VAR_0->unparseable)
                        FUNC_4(VAR_0->generic.data);

                FUNC_4(VAR_0->wire_format);
                FUNC_2(VAR_0->key);
        }

        FUNC_4(VAR_0->to_string);
        return FUNC_5(VAR_0);
}

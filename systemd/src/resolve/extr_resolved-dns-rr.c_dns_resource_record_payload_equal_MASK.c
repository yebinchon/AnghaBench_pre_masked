
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_15__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct TYPE_29__ {int os; int cpu; } ;
struct TYPE_28__ {int name; } ;
struct TYPE_27__ {int port; int weight; int priority; int name; } ;
struct TYPE_26__ {int type; } ;
struct TYPE_25__ {int types; int next_domain_name; } ;
struct TYPE_24__ {int altitude; int longitude; int latitude; int vert_pre; int horiz_pre; int size; int version; } ;
struct TYPE_23__ {int exchange; int priority; } ;
struct TYPE_22__ {int minimum; int expire; int retry; int refresh; int serial; int rname; int mname; } ;
struct TYPE_21__ {int in6_addr; } ;
struct TYPE_20__ {int tag; int flags; int matching_type; int selector; int cert_usage; int types; int iterations; int algorithm; int signer; int key_tag; int inception; int expiration; int original_ttl; int labels; int type_covered; int protocol; int fptype; int digest_type; } ;
struct TYPE_18__ {int in_addr; } ;
struct TYPE_17__ {int items; } ;
struct TYPE_19__ {scalar_t__ unparseable; TYPE_15__ generic; TYPE_15__ caa; TYPE_15__ tlsa; TYPE_15__ nsec3; TYPE_5__ nsec; TYPE_15__ rrsig; TYPE_15__ dnskey; TYPE_15__ sshfp; TYPE_15__ ds; TYPE_4__ loc; TYPE_3__ mx; TYPE_2__ soa; TYPE_1__ aaaa; TYPE_11__ a; TYPE_10__ txt; TYPE_9__ hinfo; TYPE_8__ ptr; TYPE_7__ srv; TYPE_6__* key; } ;
typedef TYPE_12__ DnsResourceRecord ;
 int FUNC_0 (TYPE_15__,TYPE_15__,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_8 ;

int FUNC_8(const DnsResourceRecord *VAR_9, const DnsResourceRecord *VAR_10) {
        int VAR_11;



        if (VAR_9->unparseable != VAR_10->unparseable)
                return 0;

        switch (VAR_9->unparseable ? VAR_0 : VAR_9->key->type) {

        case 131:
                VAR_11 = FUNC_3(VAR_9->srv.name, VAR_10->srv.name);
                if (VAR_11 <= 0)
                        return VAR_11;

                return VAR_9->srv.priority == VAR_10->srv.priority &&
                       VAR_9->srv.weight == VAR_10->srv.weight &&
                       VAR_9->srv.port == VAR_10->srv.port;

        case 135:
        case 139:
        case 146:
        case 145:
                return FUNC_3(VAR_9->ptr.name, VAR_10->ptr.name);

        case 142:
                return FUNC_6(VAR_9->hinfo.cpu, VAR_10->hinfo.cpu) &&
                       FUNC_6(VAR_9->hinfo.os, VAR_10->hinfo.os);

        case 132:
        case 128:
                return FUNC_4(VAR_9->txt.items, VAR_10->txt.items);

        case 149:
                return FUNC_5(&VAR_9->a.in_addr, &VAR_10->a.in_addr, sizeof(struct in_addr)) == 0;

        case 148:
                return FUNC_5(&VAR_9->aaaa.in6_addr, &VAR_10->aaaa.in6_addr, sizeof(struct in6_addr)) == 0;

        case 133:
                VAR_11 = FUNC_3(VAR_9->soa.mname, VAR_10->soa.mname);
                if (VAR_11 <= 0)
                        return VAR_11;
                VAR_11 = FUNC_3(VAR_9->soa.rname, VAR_10->soa.rname);
                if (VAR_11 <= 0)
                        return VAR_11;

                return VAR_9->soa.serial == VAR_10->soa.serial &&
                       VAR_9->soa.refresh == VAR_10->soa.refresh &&
                       VAR_9->soa.retry == VAR_10->soa.retry &&
                       VAR_9->soa.expire == VAR_10->soa.expire &&
                       VAR_9->soa.minimum == VAR_10->soa.minimum;

        case 140:
                if (VAR_9->mx.priority != VAR_10->mx.priority)
                        return 0;

                return FUNC_3(VAR_9->mx.exchange, VAR_10->mx.exchange);

        case 141:
                FUNC_1(VAR_9->loc.version == VAR_10->loc.version);

                return VAR_9->loc.size == VAR_10->loc.size &&
                       VAR_9->loc.horiz_pre == VAR_10->loc.horiz_pre &&
                       VAR_9->loc.vert_pre == VAR_10->loc.vert_pre &&
                       VAR_9->loc.latitude == VAR_10->loc.latitude &&
                       VAR_9->loc.longitude == VAR_10->loc.longitude &&
                       VAR_9->loc.altitude == VAR_10->loc.altitude;

        case 143:
                return VAR_9->ds.key_tag == VAR_10->ds.key_tag &&
                       VAR_9->ds.algorithm == VAR_10->ds.algorithm &&
                       VAR_9->ds.digest_type == VAR_10->ds.digest_type &&
                       FUNC_0(VAR_9->ds, VAR_10->ds, VAR_2);

        case 130:
                return VAR_9->sshfp.algorithm == VAR_10->sshfp.algorithm &&
                       VAR_9->sshfp.fptype == VAR_10->sshfp.fptype &&
                       FUNC_0(VAR_9->sshfp, VAR_10->sshfp, VAR_3);

        case 144:
                return VAR_9->dnskey.flags == VAR_10->dnskey.flags &&
                       VAR_9->dnskey.protocol == VAR_10->dnskey.protocol &&
                       VAR_9->dnskey.algorithm == VAR_10->dnskey.algorithm &&
                       FUNC_0(VAR_9->dnskey, VAR_10->dnskey, VAR_4);

        case 134:

                return VAR_9->rrsig.type_covered == VAR_10->rrsig.type_covered &&
                       VAR_9->rrsig.algorithm == VAR_10->rrsig.algorithm &&
                       VAR_9->rrsig.labels == VAR_10->rrsig.labels &&
                       VAR_9->rrsig.original_ttl == VAR_10->rrsig.original_ttl &&
                       VAR_9->rrsig.expiration == VAR_10->rrsig.expiration &&
                       VAR_9->rrsig.inception == VAR_10->rrsig.inception &&
                       VAR_9->rrsig.key_tag == VAR_10->rrsig.key_tag &&
                       FUNC_0(VAR_9->rrsig, VAR_10->rrsig, VAR_7) &&
                       FUNC_3(VAR_9->rrsig.signer, VAR_10->rrsig.signer);

        case 138:
                return FUNC_3(VAR_9->nsec.next_domain_name, VAR_10->nsec.next_domain_name) &&
                       FUNC_2(VAR_9->nsec.types, VAR_10->nsec.types);

        case 137:
                return VAR_9->nsec3.algorithm == VAR_10->nsec3.algorithm &&
                       VAR_9->nsec3.flags == VAR_10->nsec3.flags &&
                       VAR_9->nsec3.iterations == VAR_10->nsec3.iterations &&
                       FUNC_0(VAR_9->nsec3, VAR_10->nsec3, VAR_6) &&
                       FUNC_0(VAR_9->nsec3, VAR_10->nsec3, VAR_5) &&
                       FUNC_2(VAR_9->nsec3.types, VAR_10->nsec3.types);

        case 129:
                return VAR_9->tlsa.cert_usage == VAR_10->tlsa.cert_usage &&
                       VAR_9->tlsa.selector == VAR_10->tlsa.selector &&
                       VAR_9->tlsa.matching_type == VAR_10->tlsa.matching_type &&
                       FUNC_0(VAR_9->tlsa, VAR_10->tlsa, VAR_1);

        case 147:
                return VAR_9->caa.flags == VAR_10->caa.flags &&
                       FUNC_7(VAR_9->caa.tag, VAR_10->caa.tag) &&
                       FUNC_0(VAR_9->caa, VAR_10->caa, VAR_8);

        case 136:
        default:
                return FUNC_0(VAR_9->generic, VAR_10->generic, VAR_1);
        }
}

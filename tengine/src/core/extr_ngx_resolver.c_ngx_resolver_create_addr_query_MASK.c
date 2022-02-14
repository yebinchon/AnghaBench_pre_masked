
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef void* u_char ;
struct TYPE_9__ {int* s6_addr; } ;
struct sockaddr_in6 {TYPE_1__ sin6_addr; } ;
struct TYPE_11__ {int s_addr; } ;
struct sockaddr_in {TYPE_3__ sin_addr; } ;
typedef int ngx_uint_t ;
typedef int ngx_resolver_t ;
typedef int ngx_resolver_qs_t ;
struct TYPE_12__ {void** query; scalar_t__ qlen; } ;
typedef TYPE_4__ ngx_resolver_node_t ;
struct TYPE_13__ {int flags_hi; int nqs_lo; scalar_t__ nar_lo; scalar_t__ nar_hi; scalar_t__ nns_lo; scalar_t__ nns_hi; scalar_t__ nan_lo; scalar_t__ nan_hi; scalar_t__ nqs_hi; scalar_t__ flags_lo; void* ident_lo; void* ident_hi; } ;
typedef TYPE_5__ ngx_resolver_hdr_t ;
struct TYPE_14__ {TYPE_2__* sockaddr; } ;
typedef TYPE_6__ ngx_resolver_addr_t ;
typedef size_t ngx_int_t ;
typedef size_t in_addr_t ;
struct TYPE_10__ {int sa_family; } ;



 size_t VAR_0 ;
 size_t VAR_1 ;
 void** FUNC_0 (void**,char*,int) ;
 int FUNC_1 () ;
 void** FUNC_2 (int *,size_t) ;
 void** FUNC_3 (void**,char*,size_t,...) ;
 size_t FUNC_4 (int ) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_resolver_t *VAR_2, ngx_resolver_node_t *VAR_3,
    ngx_resolver_addr_t *VAR_4)
{
    u_char *VAR_5, *VAR_6;
    size_t VAR_7;
    in_addr_t VAR_8;
    ngx_int_t VAR_9;
    ngx_uint_t VAR_10;
    ngx_resolver_hdr_t *VAR_11;
    struct sockaddr_in *VAR_12;




    switch (VAR_4->sockaddr->sa_family) {
    default:
        VAR_7 = sizeof(ngx_resolver_hdr_t)
              + sizeof(".255.255.255.255.in-addr.arpa.") - 1
              + sizeof(ngx_resolver_qs_t);
    }

    VAR_5 = FUNC_2(VAR_2, VAR_7);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    VAR_3->query = VAR_5;
    VAR_11 = (ngx_resolver_hdr_t *) VAR_5;

    VAR_10 = FUNC_1();

    VAR_11->ident_hi = (u_char) ((VAR_10 >> 8) & 0xff);
    VAR_11->ident_lo = (u_char) (VAR_10 & 0xff);


    VAR_11->flags_hi = 1; VAR_11->flags_lo = 0;


    VAR_11->nqs_hi = 0; VAR_11->nqs_lo = 1;
    VAR_11->nan_hi = 0; VAR_11->nan_lo = 0;
    VAR_11->nns_hi = 0; VAR_11->nns_lo = 0;
    VAR_11->nar_hi = 0; VAR_11->nar_lo = 0;

    VAR_5 += sizeof(ngx_resolver_hdr_t);

    switch (VAR_4->sockaddr->sa_family) {
    default:

        VAR_12 = (struct sockaddr_in *) VAR_4->sockaddr;
        VAR_8 = FUNC_4(VAR_12->sin_addr.s_addr);

        for (VAR_9 = 0; VAR_9 < 32; VAR_9 += 8) {
            VAR_6 = FUNC_3(&VAR_5[1], "%ud", (VAR_8 >> VAR_9) & 0xff);
            *VAR_5 = (u_char) (VAR_6 - &VAR_5[1]);
            VAR_5 = VAR_6;
        }

        VAR_5 = FUNC_0(VAR_5, "\7in-addr\4arpa\0", 14);
    }


    VAR_5 = FUNC_0(VAR_5, "\0\14\0\1", 4);

    VAR_3->qlen = (u_short) (VAR_5 - VAR_3->query);

    return VAR_1;
}

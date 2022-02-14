
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef char u_char ;
typedef int ngx_uint_t ;
struct TYPE_11__ {int len; char* data; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_12__ {int log; scalar_t__ ipv6; } ;
typedef TYPE_2__ ngx_resolver_t ;
struct TYPE_13__ {int class_lo; int type_lo; scalar_t__ class_hi; scalar_t__ type_hi; } ;
typedef TYPE_3__ ngx_resolver_qs_t ;
struct TYPE_14__ {char* query; char* query6; scalar_t__ qlen; } ;
typedef TYPE_4__ ngx_resolver_node_t ;
struct TYPE_15__ {char ident_hi; char ident_lo; int flags_hi; int nqs_lo; scalar_t__ nar_lo; scalar_t__ nar_hi; scalar_t__ nns_lo; scalar_t__ nns_hi; scalar_t__ nan_lo; scalar_t__ nan_hi; scalar_t__ nqs_hi; scalar_t__ flags_lo; } ;
typedef TYPE_5__ ngx_resolver_hdr_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,char*,TYPE_1__*,int) ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 int FUNC_2 () ;
 char* FUNC_3 (TYPE_2__*,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_resolver_t *VAR_6, ngx_resolver_node_t *VAR_7,
    ngx_str_t *VAR_8)
{
    u_char *VAR_9, *VAR_10;
    size_t VAR_11, VAR_12;
    ngx_uint_t VAR_13;
    ngx_resolver_qs_t *VAR_14;
    ngx_resolver_hdr_t *VAR_15;

    VAR_12 = VAR_8->len ? (1 + VAR_8->len + 1) : 1;

    VAR_11 = sizeof(ngx_resolver_hdr_t) + VAR_12 + sizeof(ngx_resolver_qs_t);




    VAR_9 = FUNC_3(VAR_6, VAR_11);

    if (VAR_9 == ((void*)0)) {
        return VAR_1;
    }

    VAR_7->qlen = (u_short) VAR_11;
    VAR_7->query = VAR_9;







    VAR_15 = (ngx_resolver_hdr_t *) VAR_9;

    VAR_13 = FUNC_2();

    FUNC_0(VAR_2, VAR_6->log, 0,
                   "resolve: \"%V\" A %i", VAR_8, VAR_13 & 0xffff);

    VAR_15->ident_hi = (u_char) ((VAR_13 >> 8) & 0xff);
    VAR_15->ident_lo = (u_char) (VAR_13 & 0xff);


    VAR_15->flags_hi = 1; VAR_15->flags_lo = 0;


    VAR_15->nqs_hi = 0; VAR_15->nqs_lo = 1;
    VAR_15->nan_hi = 0; VAR_15->nan_lo = 0;
    VAR_15->nns_hi = 0; VAR_15->nns_lo = 0;
    VAR_15->nar_hi = 0; VAR_15->nar_lo = 0;

    VAR_9 += sizeof(ngx_resolver_hdr_t) + VAR_12;

    VAR_14 = (ngx_resolver_qs_t *) VAR_9;


    VAR_14->type_hi = 0; VAR_14->type_lo = VAR_4;


    VAR_14->class_hi = 0; VAR_14->class_lo = 1;



    VAR_11 = 0;
    VAR_9--;
    *VAR_9-- = '\0';

    if (VAR_8->len == 0) {
        return VAR_0;
    }

    for (VAR_10 = VAR_8->data + VAR_8->len - 1; VAR_10 >= VAR_8->data; VAR_10--) {
        if (*VAR_10 != '.') {
            *VAR_9 = *VAR_10;
            VAR_11++;

        } else {
            if (VAR_11 == 0 || VAR_11 > 255) {
                return VAR_0;
            }

            *VAR_9 = (u_char) VAR_11;
            VAR_11 = 0;
        }

        VAR_9--;
    }

    if (VAR_11 == 0 || VAR_11 > 255) {
        return VAR_0;
    }

    *VAR_9 = (u_char) VAR_11;
    return VAR_3;
}

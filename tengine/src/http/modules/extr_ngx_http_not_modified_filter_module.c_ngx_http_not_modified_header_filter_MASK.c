
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_17__ {scalar_t__ len; } ;
struct TYPE_16__ {scalar_t__ len; } ;
struct TYPE_19__ {scalar_t__ status; TYPE_4__* content_encoding; TYPE_3__ content_type; TYPE_2__ status_line; } ;
struct TYPE_15__ {scalar_t__ if_none_match; scalar_t__ if_modified_since; scalar_t__ if_match; scalar_t__ if_unmodified_since; } ;
struct TYPE_20__ {TYPE_5__ headers_out; TYPE_1__ headers_in; scalar_t__ disable_not_modified; struct TYPE_20__* main; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_18__ {scalar_t__ hash; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*,int *,int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*,scalar_t__,int) ;
 scalar_t__ FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_request_t *VAR_3)
{
    if (VAR_3->headers_out.status != VAR_1
        || VAR_3 != VAR_3->main
        || VAR_3->disable_not_modified)
    {
        return FUNC_3(VAR_3);
    }

    if (VAR_3->headers_in.if_unmodified_since
        && !FUNC_6(VAR_3))
    {
        return FUNC_2(VAR_3, ((void*)0),
                                                VAR_2);
    }

    if (VAR_3->headers_in.if_match
        && !FUNC_4(VAR_3, VAR_3->headers_in.if_match, 0))
    {
        return FUNC_2(VAR_3, ((void*)0),
                                                VAR_2);
    }

    if (VAR_3->headers_in.if_modified_since || VAR_3->headers_in.if_none_match) {

        if (VAR_3->headers_in.if_modified_since
            && FUNC_5(VAR_3))
        {
            return FUNC_3(VAR_3);
        }

        if (VAR_3->headers_in.if_none_match
            && !FUNC_4(VAR_3, VAR_3->headers_in.if_none_match, 1))
        {
            return FUNC_3(VAR_3);
        }



        VAR_3->headers_out.status = VAR_0;
        VAR_3->headers_out.status_line.len = 0;
        VAR_3->headers_out.content_type.len = 0;
        FUNC_1(VAR_3);
        FUNC_0(VAR_3);

        if (VAR_3->headers_out.content_encoding) {
            VAR_3->headers_out.content_encoding->hash = 0;
            VAR_3->headers_out.content_encoding = ((void*)0);
        }

        return FUNC_3(VAR_3);
    }

    return FUNC_3(VAR_3);
}

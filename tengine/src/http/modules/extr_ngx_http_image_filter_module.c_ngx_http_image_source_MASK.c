
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_8__ {int type; int image; int length; } ;
typedef TYPE_3__ ngx_http_image_filter_ctx_t ;
typedef int * gdImagePtr ;
struct TYPE_6__ {int log; } ;






 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,char*) ;

__attribute__((used)) static gdImagePtr
FUNC_5(ngx_http_request_t *VAR_1, ngx_http_image_filter_ctx_t *VAR_2)
{
    char *VAR_3;
    gdImagePtr VAR_4;

    VAR_4 = ((void*)0);

    switch (VAR_2->type) {

    case 130:
        VAR_4 = FUNC_1(VAR_2->length, VAR_2->image);
        VAR_3 = "gdImageCreateFromJpegPtr() failed";
        break;

    case 131:
        VAR_4 = FUNC_0(VAR_2->length, VAR_2->image);
        VAR_3 = "gdImageCreateFromGifPtr() failed";
        break;

    case 129:
        VAR_4 = FUNC_2(VAR_2->length, VAR_2->image);
        VAR_3 = "gdImageCreateFromPngPtr() failed";
        break;

    case 128:




        VAR_3 = "nginx was built without GD WebP support";

        break;

    default:
        VAR_3 = "unknown image type";
        break;
    }

    if (VAR_4 == ((void*)0)) {
        FUNC_4(VAR_0, VAR_1->connection->log, 0, VAR_3);
    }

    return VAR_4;
}

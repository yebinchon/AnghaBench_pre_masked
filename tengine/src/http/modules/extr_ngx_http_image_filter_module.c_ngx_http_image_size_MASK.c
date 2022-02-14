
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_7__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_8__ {int* image; int type; int length; int force; scalar_t__ height; scalar_t__ width; } ;
typedef TYPE_3__ ngx_http_image_filter_ctx_t ;
struct TYPE_6__ {int log; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,size_t) ;
 int FUNC_1 (int ,int ,int ,char*,int,int) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_3, ngx_http_image_filter_ctx_t *VAR_4)
{
    u_char *VAR_5, *VAR_6;
    size_t VAR_7, VAR_8;
    ngx_uint_t VAR_9, VAR_10;

    VAR_5 = VAR_4->image;

    switch (VAR_4->type) {

    case 130:

        VAR_5 += 2;
        VAR_6 = VAR_4->image + VAR_4->length - 10;
        VAR_9 = 0;
        VAR_10 = 0;
        VAR_8 = 0;

        while (VAR_5 < VAR_6) {

            if (VAR_5[0] == 0xff && VAR_5[1] != 0xff) {

                FUNC_1(VAR_1, VAR_3->connection->log, 0,
                               "JPEG: %02xd %02xd", VAR_5[0], VAR_5[1]);

                VAR_5++;

                if ((*VAR_5 == 0xc0 || *VAR_5 == 0xc1 || *VAR_5 == 0xc2 || *VAR_5 == 0xc3
                     || *VAR_5 == 0xc9 || *VAR_5 == 0xca || *VAR_5 == 0xcb)
                    && (VAR_9 == 0 || VAR_10 == 0))
                {
                    VAR_9 = VAR_5[6] * 256 + VAR_5[7];
                    VAR_10 = VAR_5[4] * 256 + VAR_5[5];
                }

                FUNC_1(VAR_1, VAR_3->connection->log, 0,
                               "JPEG: %02xd %02xd", VAR_5[1], VAR_5[2]);

                VAR_7 = VAR_5[1] * 256 + VAR_5[2];

                if (*VAR_5 >= 0xe1 && *VAR_5 <= 0xef) {

                    VAR_8 += VAR_7;
                }

                VAR_5 += VAR_7;

                continue;
            }

            VAR_5++;
        }

        if (VAR_9 == 0 || VAR_10 == 0) {
            return VAR_0;
        }

        if (VAR_4->length / 20 < VAR_8) {

            VAR_4->force = 1;
            FUNC_0(VAR_1, VAR_3->connection->log, 0,
                           "app data size: %uz", VAR_8);
        }

        break;

    case 131:

        if (VAR_4->length < 10) {
            return VAR_0;
        }

        VAR_9 = VAR_5[7] * 256 + VAR_5[6];
        VAR_10 = VAR_5[9] * 256 + VAR_5[8];

        break;

    case 129:

        if (VAR_4->length < 24) {
            return VAR_0;
        }

        VAR_9 = VAR_5[18] * 256 + VAR_5[19];
        VAR_10 = VAR_5[22] * 256 + VAR_5[23];

        break;

    case 128:

        if (VAR_4->length < 30) {
            return VAR_0;
        }

        if (VAR_5[12] != 'V' || VAR_5[13] != 'P' || VAR_5[14] != '8') {
            return VAR_0;
        }

        switch (VAR_5[15]) {

        case ' ':
            if (VAR_5[20] & 1) {

                return VAR_0;
            }

            if (VAR_5[23] != 0x9d || VAR_5[24] != 0x01 || VAR_5[25] != 0x2a) {

                return VAR_0;
            }

            VAR_9 = (VAR_5[26] | VAR_5[27] << 8) & 0x3fff;
            VAR_10 = (VAR_5[28] | VAR_5[29] << 8) & 0x3fff;

            break;

        case 'L':
            if (VAR_5[20] != 0x2f) {

                return VAR_0;
            }

            VAR_9 = ((VAR_5[21] | VAR_5[22] << 8) & 0x3fff) + 1;
            VAR_10 = ((VAR_5[22] >> 6 | VAR_5[23] << 2 | VAR_5[24] << 10) & 0x3fff) + 1;

            break;

        case 'X':
            VAR_9 = (VAR_5[24] | VAR_5[25] << 8 | VAR_5[26] << 16) + 1;
            VAR_10 = (VAR_5[27] | VAR_5[28] << 8 | VAR_5[29] << 16) + 1;
            break;

        default:
            return VAR_0;
        }

        break;

    default:

        return VAR_0;
    }

    FUNC_1(VAR_1, VAR_3->connection->log, 0,
                   "image size: %d x %d", (int) VAR_9, (int) VAR_10);

    VAR_4->width = VAR_9;
    VAR_4->height = VAR_10;

    return VAR_2;
}

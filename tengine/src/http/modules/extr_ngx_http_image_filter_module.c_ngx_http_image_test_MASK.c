
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_9__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_10__ {TYPE_1__* buf; } ;
typedef TYPE_4__ ngx_chain_t ;
struct TYPE_8__ {int log; } ;
struct TYPE_7__ {int* pos; int* last; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,char*,int,int) ;

__attribute__((used)) static ngx_uint_t
FUNC_1(ngx_http_request_t *VAR_6, ngx_chain_t *VAR_7)
{
    u_char *VAR_8;

    VAR_8 = VAR_7->buf->pos;

    if (VAR_7->buf->last - VAR_8 < 16) {
        return VAR_2;
    }

    FUNC_0(VAR_5, VAR_6->connection->log, 0,
                   "image filter: \"%c%c\"", VAR_8[0], VAR_8[1]);

    if (VAR_8[0] == 0xff && VAR_8[1] == 0xd8) {



        return VAR_1;

    } else if (VAR_8[0] == 'G' && VAR_8[1] == 'I' && VAR_8[2] == 'F' && VAR_8[3] == '8'
               && VAR_8[5] == 'a')
    {
        if (VAR_8[4] == '9' || VAR_8[4] == '7') {

            return VAR_0;
        }

    } else if (VAR_8[0] == 0x89 && VAR_8[1] == 'P' && VAR_8[2] == 'N' && VAR_8[3] == 'G'
               && VAR_8[4] == 0x0d && VAR_8[5] == 0x0a && VAR_8[6] == 0x1a && VAR_8[7] == 0x0a)
    {


        return VAR_3;

    } else if (VAR_8[0] == 'R' && VAR_8[1] == 'I' && VAR_8[2] == 'F' && VAR_8[3] == 'F'
               && VAR_8[8] == 'W' && VAR_8[9] == 'E' && VAR_8[10] == 'B' && VAR_8[11] == 'P')
    {


        return VAR_4;
    }

    return VAR_2;
}

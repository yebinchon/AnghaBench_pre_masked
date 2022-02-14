
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {TYPE_2__* out; } ;
typedef TYPE_3__ ngx_http_mp4_trak_t ;
struct TYPE_8__ {int log; } ;
struct TYPE_11__ {TYPE_1__ file; } ;
typedef TYPE_4__ ngx_http_mp4_file_t ;
struct TYPE_12__ {scalar_t__ last; scalar_t__ pos; } ;
typedef TYPE_5__ ngx_buf_t ;
typedef scalar_t__ int32_t ;
struct TYPE_9__ {TYPE_5__* buf; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(ngx_http_mp4_file_t *VAR_2,
    ngx_http_mp4_trak_t *VAR_3, int32_t VAR_4)
{
    uint32_t VAR_5, *VAR_6, *VAR_7;
    ngx_buf_t *VAR_8;






    FUNC_0(VAR_1, VAR_2->file.log, 0,
                   "mp4 stco atom adjustment");

    VAR_8 = VAR_3->out[VAR_0].buf;
    VAR_6 = (uint32_t *) VAR_8->pos;
    VAR_7 = (uint32_t *) VAR_8->last;

    while (VAR_6 < VAR_7) {
        VAR_5 = FUNC_1(VAR_6);
        VAR_5 += VAR_4;
        FUNC_2(VAR_6, VAR_5);
        VAR_6++;
    }
}

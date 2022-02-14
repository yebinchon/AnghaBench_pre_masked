
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int member_0; int member_2; int member_1; } ;
struct TYPE_9__ {int cParams; TYPE_4__ fParams; } ;
typedef TYPE_1__ ZSTD_parameters ;
struct TYPE_10__ {size_t size; size_t pos; void* dst; } ;
typedef TYPE_2__ ZSTD_outBuffer ;
struct TYPE_11__ {size_t size; scalar_t__ pos; void const* src; } ;
typedef TYPE_3__ ZSTD_inBuffer ;
typedef TYPE_4__ ZSTD_frameParameters ;
typedef int ZSTD_compressionParameters ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,int *,int ,TYPE_1__,int ) ;
 int VAR_1 ;

__attribute__((used)) static size_t
FUNC_3(const void* VAR_2, size_t VAR_3,
                          void* VAR_4, size_t VAR_5,
                          void* VAR_6)
{
    ZSTD_outBuffer VAR_7;
    ZSTD_inBuffer VAR_8;
    ZSTD_parameters VAR_9;
    ZSTD_frameParameters VAR_10 = {1 , 0, 0};
    VAR_9.fParams = VAR_10;
    VAR_9.cParams = *(ZSTD_compressionParameters*)VAR_6;
    FUNC_2(VAR_1, ((void*)0), 0, VAR_9, VAR_0);
    VAR_7.dst = VAR_4;
    VAR_7.size = VAR_5;
    VAR_7.pos = 0;
    VAR_8.src = VAR_2;
    VAR_8.size = VAR_3;
    VAR_8.pos = 0;
    FUNC_0(VAR_1, &VAR_7, &VAR_8);
    FUNC_1(VAR_1, &VAR_7);
    return VAR_7.pos;
}

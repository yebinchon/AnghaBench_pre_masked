
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t size; size_t pos; void* dst; } ;
typedef TYPE_1__ ZSTD_outBuffer ;
struct TYPE_6__ {size_t size; scalar_t__ pos; void const* src; } ;
typedef TYPE_2__ ZSTD_inBuffer ;


 int FUNC_0 (int ,TYPE_1__*,TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static size_t
FUNC_1(const void* VAR_3, size_t VAR_4,
                                     void* VAR_5, size_t VAR_6,
                                     void* VAR_7)
{
    ZSTD_outBuffer VAR_8;
    ZSTD_inBuffer VAR_9;
    (void)VAR_7;
    VAR_8.dst = VAR_5;
    VAR_8.size = VAR_6;
    VAR_8.pos = 0;
    VAR_9.src = VAR_3;
    VAR_9.size = VAR_4;
    VAR_9.pos = 0;
    FUNC_0(VAR_2, &VAR_8, &VAR_9, VAR_0);
    FUNC_0(VAR_2, &VAR_8, &VAR_9, VAR_1);
    return VAR_8.pos;
}

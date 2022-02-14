
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t size; size_t pos; void* dst; } ;
typedef TYPE_1__ ZSTD_outBuffer ;
struct TYPE_6__ {scalar_t__ pos; int size; void* src; } ;
typedef TYPE_2__ ZSTD_inBuffer ;


 int FUNC_0 (int ,TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static size_t
FUNC_2(const void* VAR_2, size_t VAR_3,
                            void* VAR_4, size_t VAR_5,
                            void* VAR_6)
{
    ZSTD_outBuffer VAR_7;
    ZSTD_inBuffer VAR_8;
    (void)VAR_2; (void)VAR_3;
    FUNC_1(VAR_1);
    VAR_7.dst = VAR_4;
    VAR_7.size = VAR_5;
    VAR_7.pos = 0;
    VAR_8.src = VAR_6;
    VAR_8.size = VAR_0;
    VAR_8.pos = 0;
    FUNC_0(VAR_1, &VAR_7, &VAR_8);
    return VAR_7.pos;
}

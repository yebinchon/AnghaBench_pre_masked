
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int log; int cache; int min_uses; TYPE_2__* file; } ;
typedef TYPE_1__ ngx_open_file_cache_cleanup_t ;
struct TYPE_4__ {int count; } ;


 int FUNC_0 (int ,TYPE_2__*,int ,int ) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
    ngx_open_file_cache_cleanup_t *VAR_1 = VAR_0;

    VAR_1->file->count--;

    FUNC_0(VAR_1->cache, VAR_1->file, VAR_1->min_uses, VAR_1->log);


    FUNC_1(VAR_1->cache, 1, VAR_1->log);
}

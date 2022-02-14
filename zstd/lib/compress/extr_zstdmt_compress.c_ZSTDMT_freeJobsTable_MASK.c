
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ZSTD_customMem ;
struct TYPE_4__ {int job_cond; int job_mutex; } ;
typedef TYPE_1__ ZSTDMT_jobDescription ;
typedef size_t U32 ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(ZSTDMT_jobDescription* VAR_0, U32 VAR_1, ZSTD_customMem VAR_2)
{
    U32 VAR_3;
    if (VAR_0 == ((void*)0)) return;
    for (VAR_3=0; VAR_3<VAR_1; VAR_3++) {
        FUNC_2(&VAR_0[VAR_3].job_mutex);
        FUNC_1(&VAR_0[VAR_3].job_cond);
    }
    FUNC_0(VAR_0, VAR_2);
}

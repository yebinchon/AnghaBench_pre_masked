
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ZSTD_customMem ;
struct TYPE_4__ {int job_cond; int job_mutex; } ;
typedef TYPE_1__ ZSTDMT_jobDescription ;
typedef int U32 ;


 int FUNC_0 (TYPE_1__* const,int const,int ) ;
 scalar_t__ FUNC_1 (int const,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static ZSTDMT_jobDescription* FUNC_5(U32* VAR_0, ZSTD_customMem VAR_1)
{
    U32 const VAR_2 = FUNC_2(*VAR_0) + 1;
    U32 const VAR_3 = 1 << VAR_2;
    U32 VAR_4;
    ZSTDMT_jobDescription* const VAR_5 = (ZSTDMT_jobDescription*)
                FUNC_1(VAR_3 * sizeof(ZSTDMT_jobDescription), VAR_1);
    int VAR_6 = 0;
    if (VAR_5==((void*)0)) return ((void*)0);
    *VAR_0 = VAR_3;
    for (VAR_4=0; VAR_4<VAR_3; VAR_4++) {
        VAR_6 |= FUNC_4(&VAR_5[VAR_4].job_mutex, ((void*)0));
        VAR_6 |= FUNC_3(&VAR_5[VAR_4].job_cond, ((void*)0));
    }
    if (VAR_6 != 0) {
        FUNC_0(VAR_5, VAR_3, VAR_1);
        return ((void*)0);
    }
    return VAR_5;
}

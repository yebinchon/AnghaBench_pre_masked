
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dictSize; } ;
typedef TYPE_1__ contexts_t ;
struct TYPE_8__ {int srcSize; int maxBlockSize; } ;
typedef TYPE_2__ buffers_t ;
typedef int BMK_benchResult_t ;


 scalar_t__ FUNC_0 (int *,TYPE_2__ const,TYPE_1__ const,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int const,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_7(const buffers_t VAR_3, const contexts_t VAR_4, const int VAR_5)
{
    BMK_benchResult_t VAR_6;
    VAR_1 = FUNC_4(FUNC_6(FUNC_5(FUNC_3(VAR_5, VAR_3.maxBlockSize, VAR_4.dictSize)), VAR_1), VAR_3.maxBlockSize, VAR_4.dictSize);

    if (FUNC_0(&VAR_6, VAR_3, VAR_4, VAR_1)) {
        FUNC_2("Error during benchmarking\n");
        return 1;
    }

    FUNC_1(VAR_2, VAR_0, VAR_6, VAR_1, VAR_3.srcSize);

    return 0;
}

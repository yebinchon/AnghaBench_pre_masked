
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__* vals; } ;
struct TYPE_10__ {TYPE_2__ const params; } ;
typedef TYPE_1__ winnerInfo_t ;
typedef TYPE_2__ paramValues_t ;
typedef int contexts_t ;
struct TYPE_12__ {int srcSize; } ;
typedef TYPE_3__ buffers_t ;
typedef size_t U32 ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_2__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,TYPE_1__*,TYPE_2__ const,TYPE_3__ const,int const) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 size_t VAR_2 ;

__attribute__((used)) static void
FUNC_6( FILE* VAR_3,
                       winnerInfo_t* VAR_4,
                       const buffers_t VAR_5, const contexts_t VAR_6)
{
    U32 const VAR_7 = FUNC_0(&VAR_1) % (VAR_0+1);
    if ((VAR_7==0) || (VAR_4[VAR_7].params.vals[VAR_2]==0)) {

        paramValues_t const VAR_8 = FUNC_1(FUNC_2(FUNC_4(FUNC_5())),
                                             VAR_5.srcSize, 0);
        FUNC_3(VAR_3, VAR_4, VAR_8, VAR_5, VAR_6);
    } else {
        FUNC_3(VAR_3, VAR_4, VAR_4[VAR_7].params, VAR_5, VAR_6);
    }
}

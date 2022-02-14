
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int params ;
struct TYPE_5__ {int compressionLevel; int notificationLevel; } ;
struct TYPE_6__ {int d; int steps; TYPE_1__ zParams; } ;
typedef TYPE_2__ ZDICT_fastCover_params_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (void*,size_t,void const*,size_t const*,unsigned int,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

size_t FUNC_3(void* VAR_1, size_t VAR_2,
                             const void* VAR_3, const size_t* VAR_4, unsigned VAR_5)
{
    ZDICT_fastCover_params_t VAR_6;
    FUNC_0(3, "ZDICT_trainFromBuffer");
    FUNC_2(&VAR_6, 0, sizeof(VAR_6));
    VAR_6.d = 8;
    VAR_6.steps = 4;

    VAR_6.zParams.compressionLevel = 3;



    return FUNC_1(VAR_1, VAR_2,
                                               VAR_3, VAR_4, VAR_5,
                                               &VAR_6);
}

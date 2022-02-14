
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int format; } ;
typedef TYPE_1__ ZSTD_DStream ;
typedef int ZSTD_DDict ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int const*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_0 ;
 size_t FUNC_3 (int ) ;

size_t FUNC_4(ZSTD_DStream* VAR_1, const ZSTD_DDict* VAR_2)
{
    FUNC_0( FUNC_2(VAR_1, VAR_0) );
    FUNC_0( FUNC_1(VAR_1, VAR_2) );
    return FUNC_3(VAR_1->format);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {size_t cbData; int * pbData; } ;
typedef scalar_t__ (* ProcessFunc ) (TYPE_1__*,int *,int *,int *,int *,int ,TYPE_1__*) ;
typedef TYPE_1__ DATA_BLOB ;
typedef int BYTE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int *,int *,size_t) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static size_t FUNC_4(const uint8_t *VAR_2, size_t VAR_3, uint8_t **VAR_4, ProcessFunc VAR_5)
{
    DATA_BLOB VAR_6 =
    {
        .cbData = VAR_3,
        .pbData = (BYTE*)VAR_2
    };
    DATA_BLOB VAR_7;

    if (VAR_5( &VAR_6, ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_0, &VAR_7) == VAR_1)
        return 0;
    *VAR_4 = FUNC_1(VAR_7.cbData);
    if( FUNC_3( *VAR_4 == ((void*)0) ) )
    {
        FUNC_0( VAR_7.pbData );
        return 0;
    }
    FUNC_2( *VAR_4, VAR_7.pbData, VAR_7.cbData );
    FUNC_0( VAR_7.pbData );
    return VAR_7.cbData;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {int sessionc; TYPE_2__** sessionv; } ;
typedef TYPE_1__ rtsp_stream_t ;
struct TYPE_6__ {scalar_t__ id; } ;
typedef TYPE_2__ rtsp_session_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char**,int) ;

__attribute__((used)) static
rtsp_session_t *FUNC_1( rtsp_stream_t *VAR_1, const char *VAR_2 )
{
    char *VAR_3;
    uint64_t VAR_4;
    int VAR_5;

    if( VAR_2 == ((void*)0) )
        return ((void*)0);

    VAR_0 = 0;
    VAR_4 = FUNC_0( VAR_2, &VAR_3, 0x10 );
    if( VAR_0 || *VAR_3 )
        return ((void*)0);


    for( VAR_5 = 0; VAR_5 < VAR_1->sessionc; VAR_5++ )
    {
        if( VAR_1->sessionv[VAR_5]->id == VAR_4 )
            return VAR_1->sessionv[VAR_5];
    }
    return ((void*)0);
}

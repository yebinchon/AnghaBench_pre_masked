
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_4__ {int dts; } ;
typedef TYPE_1__ logical_stream_t ;
typedef int int64_t ;
typedef int date_t ;


 int FUNC_0 (TYPE_1__ const*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

vlc_tick_t FUNC_3( const logical_stream_t *VAR_2, int64_t VAR_3, bool VAR_4 )
{
    VAR_3 = FUNC_0( VAR_2, VAR_3, VAR_4 );
    if( VAR_3 < 0 )
        return VAR_1;

    date_t VAR_5 = VAR_2->dts;
    FUNC_2(&VAR_5, VAR_0);
    return FUNC_1( &VAR_5, VAR_3 );
}

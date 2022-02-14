
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef int logical_stream_t ;
typedef int int64_t ;


 int FUNC_0 (int const*,int) ;
 int FUNC_1 (int const*,int) ;
 int FUNC_2 (int const*,int) ;
 int FUNC_3 (int const*,int,int) ;
 int VAR_0 ;

vlc_tick_t FUNC_4( const logical_stream_t *VAR_1, int64_t VAR_2,
                           bool VAR_3, bool VAR_4 )
{
    if( !FUNC_0( VAR_1, VAR_2 ) )
        return VAR_0;

    int64_t VAR_5 = FUNC_1( VAR_1, VAR_2 );
    if( VAR_4 )
    {
        int64_t VAR_6 = FUNC_2( VAR_1, VAR_2 );
        if( VAR_6 != -1 )
            VAR_5 += VAR_6;
    }
    return FUNC_3( VAR_1, VAR_5, VAR_3 );
}

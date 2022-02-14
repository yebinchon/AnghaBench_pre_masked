
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef int uint8_t ;
typedef int stime_t ;


 int FUNC_0 (int const*,int,int *) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_3( const uint8_t *VAR_2, size_t VAR_3,
                                     vlc_tick_t *VAR_4, int *VAR_5 )
{
    const uint8_t *VAR_6 = VAR_2;
    if( VAR_3 >= 14 && (VAR_6[4] >> 6) == 0x01 )
    {
        *VAR_4 = FUNC_2( FUNC_1( &VAR_6[4] ) );
        *VAR_5 = ( VAR_6[10] << 14 )|( VAR_6[11] << 6 )|( VAR_6[12] >> 2);
    }
    else if( VAR_3 >= 12 && (VAR_6[4] >> 4) == 0x02 )
    {
        stime_t VAR_7;
        if(!FUNC_0( &VAR_6[4], 0x02, &VAR_7 ))
            return VAR_0;
        *VAR_4 = FUNC_2( VAR_7 );
        *VAR_5 = ( ( VAR_6[9]&0x7f )<< 15 )|( VAR_6[10] << 7 )|( VAR_6[11] >> 1);
    }
    else
    {
        return VAR_0;
    }
    return VAR_1;
}

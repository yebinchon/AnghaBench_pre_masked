
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef enum vlc_dts_syncword_e { ____Placeholder_vlc_dts_syncword_e } vlc_dts_syncword_e ;


 int FUNC_0 (void*,void const*,size_t,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (void const*) ;

ssize_t FUNC_2( void *VAR_4, size_t VAR_5,
                                      const void *VAR_6, size_t VAR_7,
                                      bool VAR_8 )
{
    size_t VAR_9 = VAR_7 * 14 / 16;
    if( VAR_7 <= VAR_3 || VAR_9 > VAR_5 )
        return -1;

    enum vlc_dts_syncword_e VAR_10 = FUNC_1( VAR_6 );
    if( VAR_10 == VAR_2 )
        return -1;

    if( VAR_10 != VAR_0
     && VAR_10 != VAR_1 )
        return -1;

    int VAR_11 = FUNC_0( VAR_4, VAR_6, VAR_7,
                           VAR_10 == VAR_1, VAR_8 );
    return VAR_11;
}

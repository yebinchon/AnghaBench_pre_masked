
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,int*,int*,int*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static vlc_tick_t FUNC_2( const char *VAR_1 )
{
    int VAR_2, VAR_3, VAR_4;
    switch( FUNC_0( VAR_1, "%u:%u:%u", &VAR_2, &VAR_3, &VAR_4 ) )
    {
    case 3:
        return FUNC_1( ( VAR_2*60 + VAR_3 )*60 + VAR_4 );
    case 2:
        return FUNC_1( VAR_2*60 + VAR_3 );
    default:
        return VAR_0;
    }
}

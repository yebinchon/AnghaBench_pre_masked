
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int base; int frames; } ;
typedef TYPE_1__ tt_time_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (char**,char*,unsigned int,unsigned int,unsigned int,...) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static char *FUNC_2( tt_time_t VAR_1 )
{
    if( !FUNC_1( &VAR_1 ) )
        VAR_1.base = 0;
    unsigned VAR_2 = VAR_1.base % VAR_0;
    VAR_1.base /= VAR_0;
    unsigned VAR_3 = VAR_1.base / 3600;
    unsigned VAR_4 = VAR_1.base % 3600 / 60;
    unsigned VAR_5 = VAR_1.base % 60;

    int VAR_6;
    char *VAR_7;
    if( VAR_2 )
    {
        const char *VAR_8 = "000000";
        const char *VAR_9 = &VAR_8[6];

        for( unsigned VAR_10=10*VAR_2; VAR_10<VAR_0; VAR_10 *= 10 )
            VAR_9--;

        for( ; VAR_2 > 0 && (VAR_2 % 10) == 0; VAR_2 /= 10 );
        VAR_6 = FUNC_0( &VAR_7, "%02u:%02u:%02u.%s%u",
                                 VAR_3, VAR_4, VAR_5, VAR_9, VAR_2 );
    }
    else if( VAR_1.frames )
    {
        VAR_6 = FUNC_0( &VAR_7, "%02u:%02u:%02u:%s%u",
                                 VAR_3, VAR_4, VAR_5, VAR_1.frames < 10 ? "0" : "", VAR_1.frames );
    }
    else
    {
        VAR_6 = FUNC_0( &VAR_7, "%02u:%02u:%02u",
                                 VAR_3, VAR_4, VAR_5 );
    }

    return VAR_6 < 0 ? ((void*)0) : VAR_7;
}

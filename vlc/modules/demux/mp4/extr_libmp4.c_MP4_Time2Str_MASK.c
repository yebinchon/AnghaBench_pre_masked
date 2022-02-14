
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int stime_t ;


 scalar_t__ FUNC_0 (char**,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static char * FUNC_1( stime_t VAR_0, uint32_t VAR_1 )
{
    uint64_t VAR_2 = (VAR_1 > 0) ? VAR_0 / VAR_1 : 0;
    unsigned VAR_3 = ( VAR_2 /( 60*60 ) ) % 60;
    unsigned VAR_4 = ( VAR_2 / 60 ) % 60;
    unsigned VAR_5 = VAR_2 % 60;
    unsigned VAR_6 = (VAR_1) ? (1000*VAR_0 / VAR_1) % 1000 : 0;

    char *VAR_7;
    if( FUNC_0( &VAR_7, "%u:%.2u:%.2u:%.3u", VAR_3, VAR_4, VAR_5, VAR_6 ) < 0 )
        return ((void*)0);
    return VAR_7;
}

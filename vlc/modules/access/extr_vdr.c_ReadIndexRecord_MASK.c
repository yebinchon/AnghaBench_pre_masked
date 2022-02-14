
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
typedef int int64_t ;
typedef int index_record ;
typedef int FILE ;


 int FUNC_0 (int**) ;
 int FUNC_1 (int**) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int**,int,int,int *) ;
 scalar_t__ FUNC_4 (int *,int,int ) ;

__attribute__((used)) static bool FUNC_5( FILE *VAR_1, bool VAR_2, int64_t VAR_3,
                            uint64_t *VAR_4, uint16_t *VAR_5 )
{
    uint8_t VAR_6[8];
    if( FUNC_4( VAR_1, sizeof(VAR_6) * VAR_3, VAR_0 ) != 0 )
        return 0;
    if( FUNC_3( &VAR_6, sizeof(VAR_6), 1, VAR_1 ) < 1 )
        return 0;



    if( VAR_2 )
    {
        uint64_t VAR_7 = FUNC_1( &VAR_6 );
        *VAR_4 = VAR_7 & FUNC_2(0xFFFFFFFFFF);
        *VAR_5 = VAR_7 >> 48;
    }
    else
    {
        *VAR_4 = FUNC_0( &VAR_6 );
        *VAR_5 = VAR_6[5];
    }

    return 1;
}

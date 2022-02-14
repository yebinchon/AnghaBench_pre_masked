
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_meta_t ;
typedef int seekpoint_t ;


 int FUNC_0 (int,int **,int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned int*,int *,char*,int*,int ***,int **,int*) ;

__attribute__((used)) static void FUNC_5( unsigned *VAR_0, vlc_meta_t *VAR_1,
                                const char *VAR_2, int VAR_3,
                                int *VAR_4, seekpoint_t ***VAR_5 )
{
    seekpoint_t *VAR_6 = ((void*)0);
    bool VAR_7 = 0;

    const char *VAR_8 = VAR_2;
    const char *VAR_9 = VAR_8;
    while( VAR_9 < VAR_2 + VAR_3 )
    {
        if( *VAR_9 == 0x0D )
        {
            char *VAR_10 = FUNC_2( VAR_8, VAR_9 - VAR_8 );
            if( VAR_10 )
            {
                FUNC_4( VAR_0, VAR_1, VAR_10,
                                        VAR_4, VAR_5,
                                        &VAR_6, &VAR_7 );
                FUNC_1( VAR_10 );
            }
            if( *(++VAR_9) == 0x0A )
                VAR_9++;
            VAR_8 = VAR_9;
        }
        else
        {
            VAR_9++;
        }
    }


    if( VAR_6 )
    {
        if( VAR_7 )
            FUNC_0( *VAR_4, *VAR_5, VAR_6 );
        else
            FUNC_3( VAR_6 );
    }
}

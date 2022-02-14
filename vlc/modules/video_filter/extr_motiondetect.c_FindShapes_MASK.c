
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int,int,int) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4( uint32_t *VAR_1, uint32_t *VAR_2,
                       int VAR_3, int VAR_4, int VAR_5,
                       int *VAR_6,
                       int *VAR_7, int *VAR_8,
                       int *VAR_9, int *VAR_10 )
{
    int VAR_11 = 1;




    FUNC_1( VAR_1, VAR_2, VAR_3, VAR_5, VAR_4 );




    for( int VAR_12 = 0; VAR_12 < VAR_3; VAR_12++ )
    {
        VAR_2[VAR_12] = 0;
        VAR_2[(VAR_5-1)*VAR_3+VAR_12] = 0;
    }
    for( int VAR_13 = 1; VAR_13 < VAR_5-1; VAR_13++ )
    {
        int VAR_14;
        VAR_2[VAR_13*VAR_3] = 0;
        for( VAR_14 = 1; VAR_14 < VAR_3-1; VAR_14++ )
        {
            if( VAR_2[VAR_13*VAR_3+VAR_14] > 15 )
            {
                if( VAR_2[(VAR_13-1)*VAR_3+VAR_14-1] )
                {
                    VAR_2[VAR_13*VAR_3+VAR_14] = VAR_2[(VAR_13-1)*VAR_3+VAR_14-1];
                }
                else if( VAR_2[(VAR_13-1)*VAR_3+VAR_14] )
                    VAR_2[VAR_13*VAR_3+VAR_14] = VAR_2[(VAR_13-1)*VAR_3+VAR_14];
                else if( VAR_2[VAR_13*VAR_3+VAR_14-1] )
                    VAR_2[VAR_13*VAR_3+VAR_14] = VAR_2[VAR_13*VAR_3+VAR_14-1];
                else
                {
                    if( VAR_11 < VAR_0 )
                    {
                        VAR_2[VAR_13*VAR_3+VAR_14] = VAR_11;
                        VAR_6[VAR_11] = VAR_11;
                        VAR_11++;
                    }
                }
                if( VAR_2[VAR_13*VAR_3+VAR_14-1] && VAR_2[VAR_13*VAR_3+VAR_14-1] != VAR_2[VAR_13*VAR_3+VAR_14] ) { if( VAR_2[VAR_13*VAR_3+VAR_14-1] < VAR_2[VAR_13*VAR_3+VAR_14] ) VAR_6[VAR_2[VAR_13*VAR_3+VAR_14]] = VAR_2[VAR_13*VAR_3+VAR_14-1]; else VAR_6[VAR_2[VAR_13*VAR_3+VAR_14-1]] = VAR_2[VAR_13*VAR_3+VAR_14]; };
                if( VAR_2[(VAR_13-1)*VAR_3+VAR_14-1] && VAR_2[(VAR_13-1)*VAR_3+VAR_14-1] != VAR_2[VAR_13*VAR_3+VAR_14] ) { if( VAR_2[(VAR_13-1)*VAR_3+VAR_14-1] < VAR_2[VAR_13*VAR_3+VAR_14] ) VAR_6[VAR_2[VAR_13*VAR_3+VAR_14]] = VAR_2[(VAR_13-1)*VAR_3+VAR_14-1]; else VAR_6[VAR_2[(VAR_13-1)*VAR_3+VAR_14-1]] = VAR_2[VAR_13*VAR_3+VAR_14]; };
                if( VAR_2[(VAR_13-1)*VAR_3+VAR_14] && VAR_2[(VAR_13-1)*VAR_3+VAR_14] != VAR_2[VAR_13*VAR_3+VAR_14] ) { if( VAR_2[(VAR_13-1)*VAR_3+VAR_14] < VAR_2[VAR_13*VAR_3+VAR_14] ) VAR_6[VAR_2[VAR_13*VAR_3+VAR_14]] = VAR_2[(VAR_13-1)*VAR_3+VAR_14]; else VAR_6[VAR_2[(VAR_13-1)*VAR_3+VAR_14]] = VAR_2[VAR_13*VAR_3+VAR_14]; };
                if( VAR_2[(VAR_13-1)*VAR_3+VAR_14+1] && VAR_2[(VAR_13-1)*VAR_3+VAR_14+1] != VAR_2[VAR_13*VAR_3+VAR_14] ) { if( VAR_2[(VAR_13-1)*VAR_3+VAR_14+1] < VAR_2[VAR_13*VAR_3+VAR_14] ) VAR_6[VAR_2[VAR_13*VAR_3+VAR_14]] = VAR_2[(VAR_13-1)*VAR_3+VAR_14+1]; else VAR_6[VAR_2[(VAR_13-1)*VAR_3+VAR_14+1]] = VAR_2[VAR_13*VAR_3+VAR_14]; };

            }
            else
            {
                VAR_2[VAR_13*VAR_3+VAR_14] = 0;
            }
        }
        VAR_2[VAR_13*VAR_3+VAR_14] = 0;
    }




    for( int VAR_15 = 1; VAR_15 < VAR_11; VAR_15++ )
    {
        VAR_7[VAR_15] = -1;
        VAR_8[VAR_15] = -1;
        VAR_9[VAR_15] = -1;
        VAR_10[VAR_15] = -1;
    }




    for( int VAR_16 = 0; VAR_16 < VAR_3 * VAR_5; VAR_16++ )
    {
        if( VAR_2[VAR_16] )
        {
            while( VAR_6[VAR_2[VAR_16]] != (int)VAR_2[VAR_16] )
                VAR_2[VAR_16] = VAR_6[VAR_2[VAR_16]];
            if( VAR_7[VAR_2[VAR_16]] == -1 )
            {
                VAR_7[VAR_2[VAR_16]] =
                VAR_8[VAR_2[VAR_16]] = VAR_16 % VAR_3;
                VAR_9[VAR_2[VAR_16]] =
                VAR_10[VAR_2[VAR_16]] = VAR_16 / VAR_3;
            }
            else
            {
                int VAR_17 = VAR_16 % VAR_3, VAR_18 = VAR_16 / VAR_3;
                if( VAR_17 < VAR_7[VAR_2[VAR_16]] )
                    VAR_7[VAR_2[VAR_16]] = VAR_17;
                if( VAR_17 > VAR_8[VAR_2[VAR_16]] )
                    VAR_8[VAR_2[VAR_16]] = VAR_17;
                if( VAR_18 < VAR_9[VAR_2[VAR_16]] )
                    VAR_9[VAR_2[VAR_16]] = VAR_18;
                if( VAR_18 > VAR_10[VAR_2[VAR_16]] )
                    VAR_10[VAR_2[VAR_16]] = VAR_18;
            }
        }
    }




    for( int VAR_19 = 1; VAR_19 < VAR_11; VAR_19++ )
    {
        if( VAR_6[VAR_19] != VAR_19 ) continue;
        if( VAR_7[VAR_19] == -1 ) continue;
        for( int VAR_20 = VAR_19+1; VAR_20 < VAR_11; VAR_20++ )
        {
            if( VAR_6[VAR_20] != VAR_20 ) continue;
            if( VAR_7[VAR_20] == -1 ) continue;
            if( FUNC_2( VAR_7[VAR_19], VAR_7[VAR_20] ) < FUNC_3( VAR_8[VAR_19], VAR_8[VAR_20] ) &&
                FUNC_2( VAR_9[VAR_19], VAR_9[VAR_20] ) < FUNC_3( VAR_10[VAR_19], VAR_10[VAR_20] ) )
            {
                VAR_7[VAR_19] = FUNC_3( VAR_7[VAR_19], VAR_7[VAR_20] );
                VAR_8[VAR_19] = FUNC_2( VAR_8[VAR_19], VAR_8[VAR_20] );
                VAR_9[VAR_19] = FUNC_3( VAR_9[VAR_19], VAR_9[VAR_20] );
                VAR_10[VAR_19] = FUNC_2( VAR_10[VAR_19], VAR_10[VAR_20] );
                VAR_7[VAR_20] = -1;
                VAR_20 = 0;
            }
        }
    }

    return VAR_11;
}

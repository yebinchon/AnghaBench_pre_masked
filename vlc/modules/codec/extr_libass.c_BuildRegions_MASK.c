
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int rectangle_t ;
typedef scalar_t__ int64_t ;
struct TYPE_6__ {scalar_t__ w; scalar_t__ h; struct TYPE_6__* next; } ;
typedef TYPE_1__ ASS_Image ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 TYPE_1__** FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__**) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int ,char*,int,int,...) ;
 int VAR_1 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,int *,int,int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 () ;

__attribute__((used)) static int FUNC_11( rectangle_t *VAR_2, int VAR_3, ASS_Image *VAR_4, int VAR_5, int VAR_6 )
{
    ASS_Image *VAR_7;
    int VAR_8;





    for( VAR_7 = VAR_4, VAR_8 = 0; VAR_7 != ((void*)0); VAR_7 = VAR_7->next )
        if( VAR_7->w > 0 && VAR_7->h > 0 )
            VAR_8++;
    if( VAR_8 <= 0 )
        return 0;

    ASS_Image **VAR_9 = FUNC_2( VAR_8, sizeof(*VAR_9) );
    if( !VAR_9 )
        return 0;

    for( VAR_7 = VAR_4, VAR_8 = 0; VAR_7 != ((void*)0); VAR_7 = VAR_7->next )
        if( VAR_7->w > 0 && VAR_7->h > 0 )
            VAR_9[VAR_8++] = VAR_7;


    const int VAR_10 = FUNC_0( ( VAR_5 + 49 ) / 50, 32 );
    const int VAR_11 = FUNC_0( ( VAR_6 + 99 ) / 100, 32 );
    int VAR_12 = VAR_10;
    int VAR_13 = VAR_11;
    int VAR_14;
    rectangle_t VAR_15[VAR_3+1];

    VAR_14 = 0;
    for( int VAR_16 = 0; VAR_16 < VAR_8; )
    {
        int VAR_17;
        for( VAR_17 = 0; VAR_17 < VAR_8; VAR_17++ )
        {
            if( VAR_9[VAR_17] )
                break;
        }
        FUNC_1( VAR_14 < VAR_3 + 1 );
        VAR_15[VAR_14++] = FUNC_7( VAR_9[VAR_17] );
        VAR_9[VAR_17] = ((void*)0); VAR_16++;

        bool VAR_18;
        do {
            VAR_18 = 0;
            for( VAR_17 = 0; VAR_17 < VAR_8; VAR_17++ )
            {
                ASS_Image *VAR_19 = VAR_9[VAR_17];
                if( !VAR_19 )
                    continue;
                rectangle_t VAR_20 = FUNC_7( VAR_19 );

                int VAR_21;
                int VAR_22 = -1;
                int VAR_23 = VAR_0;
                for( VAR_21 = 0; VAR_21 < VAR_14; VAR_21++ )
                {
                    if( !FUNC_8( &VAR_15[VAR_21], &VAR_20, VAR_13, VAR_12 ) )
                        continue;
                    int VAR_24 = FUNC_9( &VAR_20 );
                    if( VAR_24 < VAR_23 )
                    {
                        VAR_23 = VAR_24;
                        VAR_22 = VAR_21;
                    }
                }
                if( VAR_22 >= 0 )
                {
                    FUNC_6( &VAR_15[VAR_22], &VAR_20 );
                    VAR_9[VAR_17] = ((void*)0); VAR_16++;
                    VAR_18 = 1;
                }
            }
        } while( VAR_18 );

        if( VAR_14 > VAR_3 )
        {
            int VAR_25 = -1;
            int VAR_26 = -1;
            int VAR_27 = VAR_0;


            for( int VAR_28 = 0; VAR_28 < VAR_14; VAR_28++ )
            {
                for( int VAR_29 = VAR_28+1; VAR_29 < VAR_14; VAR_29++ )
                {
                    rectangle_t VAR_30 = VAR_15[VAR_28];
                    FUNC_6( &VAR_30, &VAR_15[VAR_29] );
                    int VAR_31 = FUNC_9( &VAR_30 ) - FUNC_9( &VAR_15[VAR_28] ) - FUNC_9( &VAR_15[VAR_29] );

                    if( VAR_31 < VAR_27 )
                    {
                        VAR_25 = VAR_28;
                        VAR_26 = VAR_29;
                        VAR_27 = VAR_31;
                    }
                }
            }



            if( VAR_26 >= 0 && VAR_25 >= 0 )
            {
                FUNC_6( &VAR_15[VAR_25], &VAR_15[VAR_26] );

                if( VAR_26+1 < VAR_14 )
                    FUNC_4( &VAR_15[VAR_26], &VAR_15[VAR_26+1], sizeof(*VAR_15) * ( VAR_14 - (VAR_26+1) ) );
                VAR_14--;
            }
        }
    }


    for( int VAR_32 = 0; VAR_32 < VAR_14; VAR_32++ )
        VAR_2[VAR_32] = VAR_15[VAR_32];






    FUNC_3( VAR_9 );

    return VAR_14;
}

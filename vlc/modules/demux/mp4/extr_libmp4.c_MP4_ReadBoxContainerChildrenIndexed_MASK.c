
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int stream_t ;
struct TYPE_5__ {scalar_t__ i_size; scalar_t__ i_pos; scalar_t__ const i_type; scalar_t__ i_index; scalar_t__ p_father; } ;
typedef TYPE_1__ MP4_Box_t ;


 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*,int *,scalar_t__ const*,int*) ;
 int FUNC_2 (int *,scalar_t__ const) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6( stream_t *VAR_0,
               MP4_Box_t *VAR_1, const uint32_t VAR_2[],
               const uint32_t VAR_3[], bool VAR_4 )
{


    if( (VAR_1->i_size || VAR_1->p_father)
            && ( FUNC_5( VAR_0 ) + ((VAR_4)?16:8) >
        (uint64_t)(VAR_1->i_pos + VAR_1->i_size) )
      )
    {

        return 0;
    }

    uint64_t VAR_5 = 0;
    const uint64_t VAR_6 = VAR_1->i_pos + VAR_1->i_size;
    MP4_Box_t *VAR_7 = ((void*)0);
    bool VAR_8 = 0;
    bool VAR_9;
    do
    {
        VAR_9 = 0;
        if ( VAR_1->i_size )
        {
            const uint64_t VAR_10 = FUNC_5( VAR_0 );
            if( VAR_10 + ((VAR_4)?16:8) >= VAR_6 )
                break;
        }

        uint32_t VAR_11 = 0;
        if ( VAR_4 )
        {
            uint8_t VAR_12[8];
            if ( FUNC_4( VAR_0, VAR_12, 8 ) < 8 )
                break;
            VAR_11 = FUNC_0(&VAR_12[4]);
        }
        VAR_8 = 0;
        if( (VAR_7 = FUNC_1( VAR_0, VAR_1, ((void*)0), VAR_3, &VAR_8 )) )
        {
            VAR_9 = 1;
            VAR_7->i_index = VAR_11;
            for(size_t VAR_13=0; VAR_2 && VAR_2[VAR_13]; VAR_13++)
            {
                if( VAR_7->i_type == VAR_2[VAR_13] )
                    return 1;
            }
        }

        const uint64_t VAR_14 = FUNC_5( VAR_0 );
        if ( VAR_1->i_size && VAR_14 >= VAR_6 )
        {
            FUNC_3( VAR_14 == VAR_6 );
            break;
        }

        if ( !VAR_7 )
        {

            if( VAR_5 == VAR_14 )
                break;
            VAR_5 = VAR_14;
            VAR_9 = 1;
        }

    } while( VAR_9 );


    if ( !VAR_8 && VAR_1->i_size )
    {
        const uint64_t VAR_15 = FUNC_5( VAR_0 );
        if ( VAR_15 != VAR_6 )
            FUNC_2( VAR_0, VAR_6 );
    }

    return 1;
}

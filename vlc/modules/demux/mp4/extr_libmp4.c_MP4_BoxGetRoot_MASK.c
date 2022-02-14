
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int stream_t ;
struct TYPE_13__ {TYPE_1__* p_cmov; } ;
struct TYPE_14__ {int i_shortsize; struct TYPE_14__* p_first; struct TYPE_14__* p_next; struct TYPE_14__* p_father; TYPE_2__ data; int i_type; scalar_t__ i_size; } ;
struct TYPE_12__ {TYPE_3__* p_moov; } ;
typedef TYPE_3__ MP4_Box_t ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_3__*,char*) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_3__*,int const*) ;
 int FUNC_5 (int *,TYPE_3__*,int const*,int const*,int) ;
 int FUNC_6 (int *,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int ,int*) ;
 scalar_t__ FUNC_10 (int *,scalar_t__*) ;
 scalar_t__ FUNC_11 (int *) ;

MP4_Box_t *FUNC_12( stream_t *VAR_8 )
{
    int VAR_9;

    MP4_Box_t *VAR_10 = FUNC_3( VAR_3 );
    if( VAR_10 == ((void*)0) )
        return ((void*)0);

    VAR_10->i_shortsize = 1;
    uint64_t VAR_11;
    if( FUNC_10( VAR_8, &VAR_11 ) == 0 )
        VAR_10->i_size = VAR_11;


    {
        const uint32_t VAR_12[] = { VAR_2, VAR_0, 0 };
        VAR_9 = FUNC_4( VAR_8, VAR_10, VAR_12 );
    }


    if( VAR_9 && !FUNC_2( VAR_10, "moov" ) )
    {
        bool VAR_13;
        if( FUNC_9( VAR_8, VAR_6, &VAR_13 ) != VAR_7 || !VAR_13 )
        {
            FUNC_7( VAR_8, "no moov before mdat and the stream is not seekable" );
            goto error;
        }


        const uint32_t VAR_14[] = { VAR_2, 0 };
        VAR_9 = FUNC_4( VAR_8, VAR_10, VAR_14 );
    }

    if( !VAR_9 )
        return VAR_10;


    if( FUNC_0( VAR_10, "moov/mvex" ) > 0 )
    {

        const uint32_t VAR_15[] = { VAR_4, 0 };
        const uint32_t VAR_16[] = { VAR_1, VAR_0, 0 };
        FUNC_5( VAR_8, VAR_10, VAR_15, VAR_16, 0 );
        return VAR_10;
    }

    if( FUNC_11( VAR_8 ) + 8 < (uint64_t) FUNC_8( VAR_8 ) )
    {

        VAR_9 = FUNC_4( VAR_8, VAR_10, ((void*)0) );

        if( !VAR_9 )
            goto error;
    }

    MP4_Box_t *VAR_17;
    MP4_Box_t *VAR_18;



    if( ( ( VAR_17 = FUNC_2( VAR_10, "moov" ) ) &&
          ( VAR_18 = FUNC_2( VAR_10, "moov/cmov" ) ) ) ||
        ( ( VAR_17 = FUNC_2( VAR_10, "foov" ) ) &&
          ( VAR_18 = FUNC_2( VAR_10, "foov/cmov" ) ) ) )
    {

        VAR_17->i_type = VAR_5;


        VAR_17 = VAR_18->data.p_cmov->p_moov;
        VAR_18->data.p_cmov->p_moov = ((void*)0);


        VAR_17->p_father = VAR_10;


        VAR_17->p_next = VAR_10->p_first;
        VAR_10->p_first = VAR_17;
    }

    return VAR_10;

error:
    FUNC_1( VAR_10 );
    FUNC_6( VAR_8, 0 );
    return ((void*)0);
}

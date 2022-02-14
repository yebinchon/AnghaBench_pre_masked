
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef int uint8_t ;
struct TYPE_14__ {scalar_t__ i_codec; } ;
struct TYPE_15__ {int b_configured; TYPE_11__ fmt; scalar_t__ es; int i_id; } ;
typedef TYPE_1__ ps_track_t ;
struct TYPE_16__ {int i_version; int i_es; int uniqueextdesc; TYPE_3__* es; } ;
typedef TYPE_2__ ps_psm_t ;
struct TYPE_17__ {int i_type; int i_id; int desc; } ;
typedef TYPE_3__ ps_es_t ;
typedef int es_out_t ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_11__*) ;
 int FUNC_3 (TYPE_11__*,int ,int ) ;
 scalar_t__ FUNC_4 (int *,TYPE_11__*) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int const*,size_t,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,TYPE_2__*,int ,int const*,size_t,int) ;
 TYPE_3__* FUNC_9 (TYPE_3__*,int) ;

__attribute__((used)) static inline int FUNC_10( ps_psm_t *VAR_6,
                               const uint8_t *VAR_7, size_t VAR_8,
                               ps_track_t VAR_9[VAR_2], es_out_t *VAR_10 )
{
    size_t VAR_11, VAR_12, VAR_13;
    uint8_t VAR_14;
    bool VAR_15;



    FUNC_1(VAR_8 >= 4);
    if( !VAR_6 || VAR_8 < 10 || VAR_7[3] != VAR_1)
        return VAR_4;

    VAR_11 = FUNC_0(&VAR_7[4]) + 6;
    if( VAR_11 > VAR_8 ) return VAR_4;

    if((VAR_7[6] & 0x80) == 0)
        return VAR_4;

    VAR_15 = VAR_7[6] & 0x40;
    VAR_14 = (VAR_7[6] & 0xf8);

    if( VAR_6->i_version == VAR_14 ) return VAR_4;

    FUNC_7( VAR_6 );

    VAR_12 = FUNC_0(&VAR_7[8]);
    if( VAR_12 + 10 > VAR_11 )
        return VAR_4;




    VAR_13 = 12 + VAR_12;

    while( VAR_13 + 4 < VAR_11 )
    {
        ps_es_t *VAR_16 = FUNC_9( VAR_6->es, sizeof(ps_es_t) * (VAR_6->i_es+1) );
        if( VAR_16 == ((void*)0) )
            break;
        VAR_6->es = VAR_16;

        ps_es_t *VAR_17 = &VAR_6->es[ VAR_6->i_es++ ];
        VAR_17->i_type = VAR_7[ VAR_13 ];
        VAR_17->i_id = VAR_7[ VAR_13 + 1 ];

        VAR_12 = FUNC_0(&VAR_7[ VAR_13 + 2 ]);

        if( VAR_13 + 4 + VAR_12 > VAR_11 )
            break;






        if( VAR_17->i_id == VAR_0 && VAR_15 == 0 )
        {
            if( VAR_12 < 3 )
                break;
            VAR_17->i_id = (VAR_17->i_id << 8) | (VAR_7[VAR_13 + 6] & 0x7F);
            FUNC_6( &VAR_7[VAR_13 + 4 + 3],
                                  VAR_12 - 3,
                                  &VAR_6->uniqueextdesc );
        }
        else
        {
            FUNC_6( &VAR_7[VAR_13 + 4],
                                  VAR_12, &VAR_17->desc );
        }

        VAR_13 += 4 + VAR_12;
    }



    VAR_6->i_version = VAR_14;


    for( int VAR_18 = 0; VAR_18 < VAR_2; VAR_18++ )
    {
        if( !VAR_9[VAR_18].b_configured || !VAR_9[VAR_18].es ) continue;

        ps_track_t VAR_19;
        FUNC_3( &VAR_19.fmt, VAR_3, 0 );

        if( FUNC_8( &VAR_19, VAR_6, VAR_9[VAR_18].i_id,
                           VAR_7, VAR_8, 0 ) != VAR_5 )
            continue;

        if( VAR_19.fmt.i_codec == VAR_9[VAR_18].fmt.i_codec )
        {
            FUNC_2( &VAR_19.fmt );
            continue;
        }

        FUNC_5( VAR_10, VAR_9[VAR_18].es );
        FUNC_2( &VAR_9[VAR_18].fmt );

        VAR_19.b_configured = 1;
        VAR_9[VAR_18] = VAR_19;
        VAR_9[VAR_18].es = FUNC_4( VAR_10, &VAR_9[VAR_18].fmt );
    }

    return VAR_5;
}

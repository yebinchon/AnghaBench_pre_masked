
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int oggpack_buffer ;
struct TYPE_11__ {int bytes; int packet; } ;
typedef TYPE_4__ ogg_packet ;
struct TYPE_10__ {char* psz_description; void** psz_language; } ;
struct TYPE_8__ {void* i_num_headers; } ;
struct TYPE_9__ {TYPE_1__ kate; } ;
struct TYPE_12__ {int b_force_backup; TYPE_3__ fmt; int dts; void* i_granule_shift; TYPE_2__ special; } ;
typedef TYPE_5__ logical_stream_t ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (void*,int) ;
 int FUNC_2 (int *,void*,void*) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int *,int) ;
 void* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,int ) ;
 char* FUNC_8 (int ) ;

__attribute__((used)) static bool FUNC_9( logical_stream_t *VAR_0,
                                ogg_packet *VAR_1 )
{
    oggpack_buffer VAR_2;
    uint32_t VAR_3;
    uint32_t VAR_4;
    int VAR_5;
    char *VAR_6;




    VAR_0->b_force_backup = 1;


    FUNC_7( &VAR_2, VAR_1->packet, VAR_1->bytes);
    FUNC_5( &VAR_2, 11*8 );
    VAR_0->special.kate.i_num_headers = FUNC_6( &VAR_2, 8 );
    FUNC_5( &VAR_2, 3*8 );
    VAR_0->i_granule_shift = FUNC_6( &VAR_2, 8 );
    FUNC_5( &VAR_2, 8*8 );
    VAR_3 = FUNC_6( &VAR_2, 32 );
    VAR_4 = FUNC_6( &VAR_2, 32 );
    VAR_4 = FUNC_1( VAR_4, 1 );
    if ( !VAR_3 || !VAR_4 )
        return 0;
    FUNC_2( &VAR_0->dts, VAR_3, VAR_4 );

    VAR_0->fmt.psz_language = FUNC_4(16);
    if( VAR_0->fmt.psz_language )
    {
        for( VAR_5 = 0; VAR_5 < 16; VAR_5++ )
            VAR_0->fmt.psz_language[VAR_5] = FUNC_6(&VAR_2,8);
        VAR_0->fmt.psz_language[15] = 0;
    }
    else
    {
        for( VAR_5 = 0; VAR_5 < 16; VAR_5++ )
            FUNC_6(&VAR_2,8);
    }
    VAR_0->fmt.psz_description = FUNC_4(16);
    if( VAR_0->fmt.psz_description )
    {
        for( VAR_5 = 0; VAR_5 < 16; VAR_5++ )
            VAR_0->fmt.psz_description[VAR_5] = FUNC_6(&VAR_2,8);
        VAR_0->fmt.psz_description[15] = 0;


        VAR_6 = FUNC_8(FUNC_0(VAR_0->fmt.psz_description));
        if( VAR_6 )
        {
            FUNC_3( VAR_0->fmt.psz_description );
            VAR_0->fmt.psz_description = VAR_6;
        }
    }
    else
    {
        for( VAR_5 = 0; VAR_5 < 16; VAR_5++ )
            FUNC_6(&VAR_2,8);
    }

    return 1;
}

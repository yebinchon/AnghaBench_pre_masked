
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_13__ {TYPE_4__* p_b25; } ;
typedef TYPE_2__ stream_sys_t ;
typedef int ssize_t ;
struct TYPE_15__ {int (* put ) (TYPE_4__*,TYPE_3__*) ;int (* get ) (TYPE_4__*,TYPE_3__*) ;} ;
struct TYPE_14__ {int member_1; scalar_t__ data; scalar_t__ size; int * member_0; } ;
typedef TYPE_3__ ARIB_STD_B25_BUFFER ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__) ;
 size_t FUNC_2 (TYPE_1__*,int *,size_t) ;
 int FUNC_3 (size_t,size_t) ;
 int VAR_0 ;
 int FUNC_4 (int *,scalar_t__,int) ;
 int FUNC_5 (TYPE_1__*,char*,size_t,...) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_8 (int ,int *,size_t) ;

__attribute__((used)) static ssize_t FUNC_9( stream_t *VAR_1, void *VAR_2, size_t VAR_3 )
{
    stream_sys_t *VAR_4 = VAR_1->p_sys;
    uint8_t *VAR_5 = VAR_2;
    int VAR_6 = 0;
    int VAR_7;

    if ( !VAR_3 )
        return -1;


    size_t VAR_8 = FUNC_2( VAR_1, VAR_5, VAR_3 );
    VAR_6 += VAR_8;
    VAR_5 += VAR_8;
    VAR_3 -= VAR_8;

    while ( VAR_3 )
    {

        int VAR_9 = FUNC_8( VAR_1->s, VAR_5, VAR_3 );
        if ( VAR_9 > 0 )
        {
            ARIB_STD_B25_BUFFER VAR_10 = { *VAR_5, VAR_9 };
            VAR_7 = VAR_4->p_b25->put( VAR_4->p_b25, &VAR_10 );
            if ( VAR_7 < 0 )
            {
                FUNC_5( VAR_1, "decoder put failed: %s",
                         FUNC_0( VAR_7, VAR_0 ) );
                return 0;
            }
        }
        else
        {
            if ( VAR_9 < 0 )
                FUNC_5( VAR_1, "Can't read %lu bytes from source stream: %d", VAR_3, VAR_9 );
            return 0;
        }

        ARIB_STD_B25_BUFFER VAR_11;
        VAR_7 = VAR_4->p_b25->get( VAR_4->p_b25, &VAR_11 );
        if ( VAR_7 < 0 )
        {
            FUNC_5( VAR_1, "decoder get failed: %s",
                     FUNC_0( VAR_7, VAR_0 ) );
            return 0;
        }

        if ( (size_t)VAR_11.size > VAR_3 )
        {

            FUNC_1( VAR_1, VAR_11.data + VAR_3, VAR_11.size - VAR_3 );
        }

        int VAR_12 = FUNC_3( (size_t)VAR_11.size, VAR_3 );
        FUNC_4( VAR_5, VAR_11.data, VAR_12 );

        VAR_6 += VAR_12;
        VAR_5 += VAR_12;
        VAR_3 -= VAR_12;
    }

    return VAR_6;
}

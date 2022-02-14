
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_6__ {scalar_t__ i_length; } ;
typedef TYPE_1__ block_t ;
struct TYPE_7__ {scalar_t__ size; scalar_t__ data; } ;
typedef TYPE_2__ AVPacket ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int,scalar_t__) ;
 scalar_t__ FUNC_2 (char**,char*,unsigned int,int,scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (char*,scalar_t__,size_t const) ;
 int FUNC_5 (char*,char*,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static block_t *FUNC_8( const AVPacket *VAR_0, unsigned VAR_1 )
{
    if( VAR_0->size <= 0 )
        return ((void*)0);

    char VAR_2[256];
    const size_t VAR_3 = FUNC_1( (int)sizeof(VAR_2) - 1, VAR_0->size );
    FUNC_4( VAR_2, VAR_0->data, VAR_3 );
    VAR_2[VAR_3] = '\0';


    int VAR_4;
    int VAR_5, VAR_6, VAR_7, VAR_8;
    int VAR_9, VAR_10, VAR_11, VAR_12;
    int VAR_13 = 0;
    if( FUNC_5( VAR_2, "Dialogue: %d,%d:%d:%d.%d,%d:%d:%d.%d,%n", &VAR_4,
                &VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_11, &VAR_12, &VAR_13 ) < 9 )
        return ((void*)0);
    if( VAR_13 <= 0 || (unsigned)VAR_13 >= VAR_3 )
        return ((void*)0);

    char *VAR_14;
    if( FUNC_2( &VAR_14, "%u,%d,%.*s", VAR_1, VAR_4, VAR_0->size - VAR_13, VAR_0->data + VAR_13 ) < 0 )
        return ((void*)0);

    block_t *VAR_15 = FUNC_3( VAR_14, FUNC_6(VAR_14) + 1 );
    if( VAR_15 )
        VAR_15->i_length = FUNC_7((VAR_9-VAR_5) * 3600 +
                                         (VAR_10-VAR_6) * 60 +
                                         (VAR_11-VAR_7) * 1) +
                             FUNC_0 (VAR_12-VAR_8) / 100;
    return VAR_15;
}

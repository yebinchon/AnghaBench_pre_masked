
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int stream_t ;
struct TYPE_10__ {int i_reserved2; int i_reserved1; int i_sub_object_count; int * p_last; int * p_first; } ;
struct TYPE_9__ {TYPE_2__ header; } ;
typedef TYPE_1__ asf_object_t ;
typedef TYPE_2__ asf_object_header_t ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (int *,char*,int ,int ,int ) ;
 int FUNC_6 (int *,int const**,int) ;
 int FUNC_7 (int *,int *,int) ;

__attribute__((used)) static int FUNC_8( stream_t *VAR_3, asf_object_t *VAR_4 )
{
    asf_object_header_t *VAR_5 = &VAR_4->header;
    asf_object_t *VAR_6;
    const uint8_t *VAR_7;

    if( FUNC_6( VAR_3, &VAR_7, 30 ) < 30 )
       return VAR_1;

    VAR_5->i_sub_object_count = FUNC_2( VAR_7 + VAR_0 );
    VAR_5->i_reserved1 = VAR_7[28];
    VAR_5->i_reserved2 = VAR_7[29];
    VAR_5->p_first = ((void*)0);
    VAR_5->p_last = ((void*)0);
    if( FUNC_7( VAR_3, ((void*)0), 30 ) != 30 )
        return VAR_1;


    for( ; ; )
    {
        VAR_6 = FUNC_4( sizeof( asf_object_t ) );

        if( !VAR_6 || FUNC_1( VAR_3, VAR_6, (asf_object_t*)VAR_5 ) )
        {
            FUNC_3( VAR_6 );
            break;
        }
        if( FUNC_0( VAR_3, VAR_6, 0 ) )
            break;
    }
    return VAR_2;
}

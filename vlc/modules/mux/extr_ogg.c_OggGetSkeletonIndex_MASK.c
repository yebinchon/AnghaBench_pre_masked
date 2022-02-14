
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {long i_index_size; char* p_index; int i_index_payload; int i_index_count; } ;
struct TYPE_5__ {TYPE_1__ skeleton; int i_length; int i_serial_no; } ;
typedef TYPE_2__ ogg_stream_t ;


 int VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (long,int) ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static void FUNC_4( uint8_t **VAR_2, long *VAR_3, ogg_stream_t *VAR_4 )
{
    uint8_t *VAR_5 = FUNC_2( VAR_1 + VAR_4->skeleton.i_index_size, sizeof(uint8_t) );
    if ( !VAR_5 ) return;
    *VAR_2 = VAR_5;

    FUNC_3( VAR_5, "index", 6 );
    FUNC_0( &VAR_5[6], VAR_4->i_serial_no );
    FUNC_1( &VAR_5[10], VAR_4->skeleton.i_index_count );
    FUNC_1( &VAR_5[18], VAR_0 );
    FUNC_1( &VAR_5[34], VAR_4->i_length );
    FUNC_3( VAR_5 + VAR_1, VAR_4->skeleton.p_index, VAR_4->skeleton.i_index_payload );
    *VAR_3 = VAR_1 + VAR_4->skeleton.i_index_size;
}

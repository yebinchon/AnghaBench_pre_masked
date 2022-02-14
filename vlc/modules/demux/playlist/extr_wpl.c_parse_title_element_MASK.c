
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xml_reader_t ;
struct TYPE_3__ {int * p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int input_item_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char const**) ;

__attribute__((used)) static int FUNC_4( stream_t* VAR_3, input_item_t* VAR_4 )
{
    xml_reader_t *VAR_5 = VAR_3->p_sys;
    char const* VAR_6;

    if( FUNC_2( VAR_5 ) )
        return VAR_1;

    if( FUNC_3( VAR_5, &VAR_6 ) != VAR_2 )
        return VAR_0;

    FUNC_1( VAR_4, VAR_6 );

    FUNC_0( VAR_5, "title" );
    return VAR_1;
}

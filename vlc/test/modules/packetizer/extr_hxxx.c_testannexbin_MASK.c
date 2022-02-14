
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int* p_buffer; size_t i_buffer; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (int*,int const*,size_t) ;
 int FUNC_5 (int*,int const*,size_t) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void FUNC_7( const uint8_t *VAR_0, size_t VAR_1,
                          const uint8_t **VAR_2, size_t *VAR_3 )
{
    FUNC_6("INPUT SET    : ");
    for(size_t VAR_4=0; VAR_4<VAR_1; VAR_4++)
        FUNC_6("0x%.2x, ", VAR_0[VAR_4] );
    FUNC_6("\n");

    for( unsigned int VAR_5=0; VAR_5<3; VAR_5++)
    {
        block_t *VAR_6 = FUNC_1( VAR_1 );
        FUNC_5( VAR_6->p_buffer, VAR_0, VAR_1 );

        VAR_6 = FUNC_3( VAR_6, 1 << VAR_5 );
        FUNC_6("DUMP prefix %d: ", 1 << VAR_5);
        if( VAR_6 )
        {
            for(size_t VAR_7=0; VAR_7<VAR_6->i_buffer; VAR_7++)
                FUNC_6("0x%.2x, ", VAR_6->p_buffer[VAR_7] );
            FUNC_6("\n");

            FUNC_6("COMPARE SET    : ");
            for(size_t VAR_8=0; VAR_8<VAR_3[VAR_5]; VAR_8++)
                FUNC_6("0x%.2x, ", VAR_2[VAR_5][VAR_8] );
            FUNC_6("\n");

            FUNC_0( VAR_6->i_buffer == VAR_3[VAR_5] );
            FUNC_0( FUNC_4( VAR_6->p_buffer, VAR_2[VAR_5], VAR_3[VAR_5] ) == 0 );
            FUNC_2( VAR_6 );
        }
        else
        {
            FUNC_6("** No output **\n");
            FUNC_0(0);
        }
    }
}

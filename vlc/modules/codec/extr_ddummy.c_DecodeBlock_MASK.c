
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_8__ {scalar_t__ i_buffer; int i_flags; int p_buffer; } ;
typedef TYPE_2__ block_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int,scalar_t__,int *) ;
 int FUNC_2 (TYPE_1__*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_3( decoder_t *VAR_2, block_t *VAR_3 )
{
    FILE *VAR_4 = (void *)VAR_2->p_sys;

    if( !VAR_3 ) return VAR_1;

    if( VAR_4 != ((void*)0)
     && VAR_3->i_buffer > 0
     && !(VAR_3->i_flags & (VAR_0)) )
    {
        FUNC_1( VAR_3->p_buffer, 1, VAR_3->i_buffer, VAR_4 );
        FUNC_2( VAR_2, "dumped %zu bytes", VAR_3->i_buffer );
    }
    FUNC_0( VAR_3 );

    return VAR_1;
}

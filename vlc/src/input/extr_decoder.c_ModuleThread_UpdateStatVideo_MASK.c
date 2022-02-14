
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decoder_owner {int * p_vout; } ;


 int FUNC_0 (struct decoder_owner*,int ,int,unsigned int,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_2( struct decoder_owner *VAR_1,
                                          bool VAR_2 )
{
    unsigned VAR_3 = 0;
    unsigned VAR_4 = 0;
    if( VAR_1->p_vout != ((void*)0) )
    {
        FUNC_1( VAR_1->p_vout, &VAR_3, &VAR_4 );
    }
    if (VAR_2) VAR_4++;

    FUNC_0(VAR_1, VAR_0, 1, VAR_4, VAR_3);
}

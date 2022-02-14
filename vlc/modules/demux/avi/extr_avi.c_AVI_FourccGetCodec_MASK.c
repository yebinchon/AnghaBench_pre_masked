
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fourcc_t ;




 int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int ,int *,int *) ;

vlc_fourcc_t FUNC_2( unsigned int VAR_1, vlc_fourcc_t VAR_2 )
{
    switch( VAR_1 )
    {
        case 129:
            FUNC_1( VAR_2, &VAR_2, ((void*)0) );
            return VAR_2;
        case 128:
            return FUNC_0( VAR_1, VAR_2 );
        default:
            return VAR_0;
    }
}

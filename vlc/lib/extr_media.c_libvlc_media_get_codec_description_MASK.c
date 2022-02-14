
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int libvlc_track_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 char const* FUNC_0 (int ,int ) ;

const char *
FUNC_1( libvlc_track_type_t VAR_4,
                                    uint32_t VAR_5 )
{
    switch( VAR_4 )
    {
        case 131:
            return FUNC_0( VAR_0, VAR_5 );
        case 128:
            return FUNC_0( VAR_3, VAR_5 );
        case 130:
            return FUNC_0( VAR_1, VAR_5 );
        case 129:
        default:
            return FUNC_0( VAR_2, VAR_5 );
    }
}

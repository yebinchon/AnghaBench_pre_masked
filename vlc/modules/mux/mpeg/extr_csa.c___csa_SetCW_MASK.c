
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_3__ {int e_kk; int e_ck; int o_kk; int o_ck; } ;
typedef TYPE_1__ csa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int *,int) ;

int FUNC_6( vlc_object_t *VAR_3, csa_t *VAR_4, char *VAR_5, bool VAR_6 )
{
    if ( !VAR_4 )
    {
        FUNC_2( VAR_3, "no CSA found" );
        return VAR_1;
    }

    if( VAR_5[0] == '0' && ( VAR_5[1] == 'x' || VAR_5[1] == 'X' ) )
    {
        VAR_5 += 2;
    }
    if( FUNC_4( VAR_5 ) != 16 )
    {
        FUNC_3( VAR_3, "invalid csa ck (it must be 16 chars long)" );
        return VAR_0;
    }
    else
    {
        uint64_t VAR_7 = FUNC_5( VAR_5, ((void*)0), 16 );
        uint8_t VAR_8[8];
        int VAR_9;

        for( VAR_9 = 0; VAR_9 < 8; VAR_9++ )
        {
            VAR_8[VAR_9] = ( VAR_7 >> ( 56 - 8*VAR_9) )&0xff;
        }

        FUNC_2( VAR_3, "using CSA (de)scrambling with %s "
                 "key=%x:%x:%x:%x:%x:%x:%x:%x", VAR_6 ? "odd" : "even",
                 VAR_8[0], VAR_8[1], VAR_8[2], VAR_8[3], VAR_8[4], VAR_8[5], VAR_8[6], VAR_8[7] );

        if( VAR_6 )
        {
            FUNC_1( VAR_4->o_ck, VAR_8, 8 );
            FUNC_0( VAR_4->o_kk, VAR_8 );
        }
        else
        {
            FUNC_1( VAR_4->e_ck , VAR_8, 8 );
            FUNC_0( VAR_4->e_kk , VAR_8 );
        }
        return VAR_2;
    }
}

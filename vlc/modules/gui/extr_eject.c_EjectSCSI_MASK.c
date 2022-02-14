
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int ,...) ;

__attribute__((used)) static int FUNC_1( int VAR_6 )
{
    struct sdata
    {
        int inlen;
        int outlen;
        char cmd[256];
    } VAR_7;

    VAR_7.inlen = 0;
    VAR_7.outlen = 0;
    VAR_7.cmd[0] = VAR_0;
    VAR_7.cmd[1] = 0;
    VAR_7.cmd[2] = 0;
    VAR_7.cmd[3] = 0;
    VAR_7.cmd[4] = 0;
    VAR_7.cmd[5] = 0;
    if( FUNC_0( VAR_6, VAR_2, (void *)&VAR_7 ) < 0 )
        return VAR_4;

    VAR_7.inlen = 0;
    VAR_7.outlen = 0;
    VAR_7.cmd[0] = VAR_3;
    VAR_7.cmd[1] = 0;
    VAR_7.cmd[2] = 0;
    VAR_7.cmd[3] = 0;
    VAR_7.cmd[4] = 1;
    VAR_7.cmd[5] = 0;
    if( FUNC_0( VAR_6, VAR_2, (void *)&VAR_7 ) < 0 )
        return VAR_4;

    VAR_7.inlen = 0;
    VAR_7.outlen = 0;
    VAR_7.cmd[0] = VAR_3;
    VAR_7.cmd[1] = 0;
    VAR_7.cmd[2] = 0;
    VAR_7.cmd[3] = 0;
    VAR_7.cmd[4] = 2;
    VAR_7.cmd[5] = 0;
    if( FUNC_0( VAR_6, VAR_2, (void *)&VAR_7 ) < 0 )
        return VAR_4;


    FUNC_0( VAR_6, VAR_1 );
    return VAR_5;
}

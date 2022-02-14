
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_6__ {int s; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_7__ {scalar_t__ i_fourcc; scalar_t__ i_type; int i_size; } ;
typedef TYPE_2__ avi_packet_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int *,size_t) ;

__attribute__((used)) static int FUNC_3( demux_t *VAR_9 )
{
    avi_packet_t VAR_10;
    size_t VAR_11 = 0;

    if( FUNC_0( VAR_9, &VAR_10 ) )
    {
        return VAR_7;
    }

    if( VAR_10.i_fourcc == VAR_1 &&
        ( VAR_10.i_type == VAR_4 || VAR_10.i_type == VAR_3 ) )
    {
        VAR_11 = 12;
    }
    else if( VAR_10.i_fourcc == VAR_2 &&
             VAR_10.i_type == VAR_0 )
    {
        VAR_11 = 24;
    }
    else
    {
        if( VAR_10.i_size > VAR_6 - 9 )
            return VAR_7;
        VAR_11 = FUNC_1( VAR_10.i_size ) + 8;
    }

    if( VAR_11 > VAR_5 )
        return VAR_7;

    ssize_t VAR_12 = FUNC_2( VAR_9->s, ((void*)0), VAR_11 );
    if( VAR_12 < 0 || (size_t) VAR_12 != VAR_11 )
    {
        return VAR_7;
    }
    return VAR_8;
}

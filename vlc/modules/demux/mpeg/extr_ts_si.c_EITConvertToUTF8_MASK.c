
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_7__ {scalar_t__ p_instance; } ;
struct TYPE_9__ {scalar_t__ standard; TYPE_1__ arib; } ;
typedef TYPE_3__ demux_sys_t ;
typedef int arib_decoder_t ;


 char* FUNC_0 (char*,unsigned char const*,size_t) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 size_t FUNC_2 (int *,unsigned char const*,size_t,char*,size_t) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (size_t,int) ;
 char* FUNC_8 (unsigned char const*,size_t) ;

__attribute__((used)) static char *FUNC_9( demux_t *VAR_1,
                               const unsigned char *VAR_2,
                               size_t VAR_3,
                               bool VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_1->p_sys;
    FUNC_1(VAR_5);






    VAR_4 = VAR_4 && VAR_3 && *VAR_2 > 0x20;

    if( VAR_4 )
        return FUNC_0( "ISO_8859-1", VAR_2, VAR_3 );
    return FUNC_8( VAR_2, VAR_3 );
}

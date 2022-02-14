
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_extractor_t ;
struct TYPE_9__ {int b_eof; scalar_t__ i_offset; int p_archive; scalar_t__ b_dead; int b_seekable_archive; int p_entry; int b_seekable_source; } ;
typedef TYPE_2__ private_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,char*,...) ;
 int FUNC_7 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_8( stream_extractor_t* VAR_3, uint64_t VAR_4 )
{
    private_sys_t* VAR_5 = VAR_3->p_sys;

    if( !VAR_5->p_entry || !VAR_5->b_seekable_source )
        return VAR_1;

    if( FUNC_1( VAR_5->p_entry ) &&
        (uint64_t)FUNC_0( VAR_5->p_entry ) <= VAR_4 )
    {
        VAR_5->b_eof = 1;
        return VAR_2;
    }

    VAR_5->b_eof = 0;

    if( !VAR_5->b_seekable_archive || VAR_5->b_dead
      || FUNC_4( VAR_5->p_archive, VAR_4, VAR_0 ) < 0 )
    {
        FUNC_6( VAR_3,
            "intrinsic seek failed: '%s' (falling back to dumb seek)",
            FUNC_2( VAR_5->p_archive ) );

        uint64_t VAR_6 = VAR_4 - VAR_5->i_offset;



        if( VAR_4 < VAR_5->i_offset )
        {
            if( FUNC_3( VAR_3 ) )
            {
                FUNC_7( VAR_3, "unable to reset libarchive handle" );
                return VAR_1;
            }

            VAR_6 = VAR_4;
        }

        if( FUNC_5( VAR_3, VAR_6 ) )
            FUNC_6( VAR_3, "failed to skip to seek position" );
    }

    VAR_5->i_offset = VAR_4;
    return VAR_2;
}
